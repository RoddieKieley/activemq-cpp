/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _ACTIVEMQ_CONNECTOR_OPENWIRE_COMMANDS_CONNECTIONCONTROL_H_
#define _ACTIVEMQ_CONNECTOR_OPENWIRE_COMMANDS_CONNECTIONCONTROL_H_

// Turn off warning message for ignored exception specification
#ifdef _MSC_VER
#pragma warning( disable : 4290 )
#endif

#include <activemq/connector/openwire/commands/BaseCommand.h>
#include <vector>
#include <string>

namespace activemq{
namespace connector{
namespace openwire{
namespace commands{

    /*
     *
     *  Command and marshalling code for OpenWire format for ${className}
     *
     *
     *  NOTE!: This file is autogenerated - do not modify!
     *         if you need to make a change, please see the Java Classes
     *         in the activemq-openwire-generator module
     *
     */
    class ConnectionControl : public BaseCommand
    {
    protected:

        bool close;
        bool exit;
        bool faultTolerant;
        bool resume;
        bool suspend;

    public:

        const static unsigned char ID_CONNECTIONCONTROL = 18;

    public:

        ConnectionControl();
        virtual ~ConnectionControl();

        /**
         * Get the unique identifier that this object and its own
         * Marshaller share.
         * @returns new DataStructure type copy.
         */
        virtual unsigned char getDataStructureType() const;

        /**
         * Clone this object and return a new instance that the
         * caller now owns, this will be an exact copy of this one
         * @returns new copy of this object.
         */
        virtual DataStructure* cloneDataStructure() const;

        /**
         * Copy the contents of the passed object into this objects
         * members, overwriting any existing data.
         * @return src - Source Object
         */
        virtual void copyDataStructure( const DataStructure* src );

        virtual const bool isClose() const;
        virtual bool isClose();
        virtual void setClose( bool close );

        virtual const bool isExit() const;
        virtual bool isExit();
        virtual void setExit( bool exit );

        virtual const bool isFaultTolerant() const;
        virtual bool isFaultTolerant();
        virtual void setFaultTolerant( bool faultTolerant );

        virtual const bool isResume() const;
        virtual bool isResume();
        virtual void setResume( bool resume );

        virtual const bool isSuspend() const;
        virtual bool isSuspend();
        virtual void setSuspend( bool suspend );

    };

}}}}

#endif /*_ACTIVEMQ_CONNECTOR_OPENWIRE_COMMANDS_CONNECTIONCONTROL_H_*/

