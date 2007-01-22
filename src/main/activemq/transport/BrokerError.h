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
 
#ifndef ACTIVEMQ_TRANSPORT_BROKERERROR_H_
#define ACTIVEMQ_TRANSPORT_BROKERERROR_H_

#include <activemq/transport/Response.h>
#include <activemq/exceptions/ActiveMQException.h>

namespace activemq{
namespace transport{
  
    /**
     * A distributed exception that implies that an error occurred at
     * the broker.
     */
    class BrokerError : public exceptions::ActiveMQException{        
    public:
  
        /**
         * Default Constructor
         */
        BrokerError() throw() {};

        /**
         * Copy Constructor
         * @param ex the exception to copy
         */
        BrokerError( const exceptions::ActiveMQException& ex ) throw()
        : exceptions::ActiveMQException()
        {
            *(exceptions::ActiveMQException*)this = ex;
        }

        /**
         * Copy Constructor
         * @param ex the exception to copy, which is an instance of this type
         */
        BrokerError( const BrokerError& ex ) throw()
        : exceptions::ActiveMQException()
        {
            *(exceptions::ActiveMQException*)this = ex;
        }

        /**
         * Consturctor
         * @param file name of the file were the exception occured.
         * @param lineNumber line where the exception occured
         * @param msg the message that was generated
         */
        BrokerError(const char* file, const int lineNumber, 
            const char* msg, ...) throw()
        : exceptions::ActiveMQException()
        {
            va_list vargs ;
            va_start(vargs, msg) ;
            buildMessage(msg, vargs) ;
            
            // Set the first mark for this exception.
            setMark( file, lineNumber );
        }
        
        /**
         * Clones this exception.  This is useful for cases where you need
         * to preserve the type of the original exception as well as the message.
         * All subclasses should override.
         * @returns a cloned copy of this exception
         */
        virtual exceptions::ActiveMQException* clone() const{
            return new BrokerError( *this );
        }
        
        virtual ~BrokerError() throw() {}
        
    };
    
}}

#endif /*ACTIVEMQ_TRANSPORT_BROKERERROR_H_*/
