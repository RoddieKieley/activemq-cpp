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
 
#ifndef _ACTIVEMQ_UTIL_DATETEST_H_
#define _ACTIVEMQ_UTIL_DATETEST_H_

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

#include <activemq/util/Date.h>
#include <activemq/concurrent/Thread.h>

namespace activemq{
namespace util{
    
    class DateTest : public CppUnit::TestFixture 
    {
        CPPUNIT_TEST_SUITE( DateTest );
        CPPUNIT_TEST( test );
        CPPUNIT_TEST_SUITE_END();
     
    public:
    	DateTest(){};
    	virtual ~DateTest(){};
        
        void test(){
            
            Date date1;
            CPPUNIT_ASSERT( date1.getTime() != 0 );
            
            activemq::concurrent::Thread::sleep(10);
            
            Date date2;
            CPPUNIT_ASSERT( date1.before(date2) == true );
            CPPUNIT_ASSERT( date1.after(date2) == false );
            
            Date date3 = date1;
            CPPUNIT_ASSERT( date1.equals( date3 ) == true );
        }
        
    };

}}

#endif /*_ACTIVEMQ_UTIL_DATETEST_H_*/
