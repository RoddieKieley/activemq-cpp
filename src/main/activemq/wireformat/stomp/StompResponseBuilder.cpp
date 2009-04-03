/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "StompResponseBuilder.h"

#include <activemq/connector/stomp/commands/ConnectCommand.h>
#include <activemq/connector/stomp/commands/ConnectedCommand.h>
#include <activemq/connector/stomp/commands/SubscribeCommand.h>
#include <activemq/connector/stomp/commands/UnsubscribeCommand.h>

#include <decaf/util/UUID.h>

using namespace activemq;
using namespace activemq::wireformat;
using namespace activemq::wireformat::stomp;
using namespace activemq::transport;
using namespace activemq::transport::mock;
using namespace decaf;
using namespace decaf::util;

////////////////////////////////////////////////////////////////////////////////
Response* StompResponseBuilder::buildResponse( const commands::Command* cmd ){

    // If this command requires a response we don't know what it is
    // so we throw an exception.
    if( cmd->isResponseRequired() ) {

        throw commands::CommandIOException( __FILE__, __LINE__,
            "StompResponseBuilder - unrecognized command" );
    }

    return NULL;
}

////////////////////////////////////////////////////////////////////////////////
void StompResponseBuilder::buildIncomingCommands(
    const commands::Command* command, decaf::util::Queue<commands::Command*>& queue ){

    const connector::stomp::commands::ConnectCommand* connectCommand =
        dynamic_cast<const connector::stomp::commands::ConnectCommand*>( command );

    if( connectCommand != NULL ) {
        connector::stomp::commands::ConnectedCommand* resp =
            new connector::stomp::commands::ConnectedCommand();
        resp->setCorrelationId( connectCommand->getCommandId() );

        if( connectCommand->getClientId() == NULL ) {
            resp->setSessionId( UUID::randomUUID().toString() );
        } else {
            resp->setSessionId( connectCommand->getClientId() );
        }

        queue.push( resp );
    }
}