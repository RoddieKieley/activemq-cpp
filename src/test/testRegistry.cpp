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

// All CPP Unit tests are registered in here so we can disable them and
// enable them easily in one place.

#include <activemq/commands/BrokerInfoTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::commands::BrokerInfoTest );
#include <activemq/commands/BrokerIdTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::commands::BrokerIdTest );
#include <activemq/commands/ActiveMQTopicTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::commands::ActiveMQTopicTest );
#include <activemq/commands/ActiveMQTextMessageTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::commands::ActiveMQTextMessageTest );
#include <activemq/commands/ActiveMQTempTopicTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::commands::ActiveMQTempTopicTest );
#include <activemq/commands/ActiveMQTempQueueTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::commands::ActiveMQTempQueueTest );
#include <activemq/commands/ActiveMQQueueTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::commands::ActiveMQQueueTest );
#include <activemq/commands/ActiveMQMessageTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::commands::ActiveMQMessageTest );
#include <activemq/commands/ActiveMQMapMessageTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::commands::ActiveMQMapMessageTest );
#include <activemq/commands/ActiveMQDestinationTest2.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::commands::ActiveMQDestinationTest );
#include <activemq/commands/ActiveMQBytesMessageTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::commands::ActiveMQBytesMessageTest );
#include <activemq/commands/ActiveMQStreamMessageTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::commands::ActiveMQStreamMessageTest );

#include <activemq/wireformat/openwire/marshal/BaseDataStreamMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::BaseDataStreamMarshallerTest );
#include <activemq/wireformat/openwire/marshal/PrimitiveTypesMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::PrimitiveTypesMarshallerTest );

#include <activemq/wireformat/openwire/utils/BooleanStreamTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::utils::BooleanStreamTest );
#include <activemq/wireformat/openwire/utils/HexTableTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::utils::HexTableTest );
#include <activemq/wireformat/openwire/utils/MessagePropertyInterceptorTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::utils::MessagePropertyInterceptorTest );

#include <activemq/wireformat/openwire/OpenWireFormatTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::OpenWireFormatTest );

#include <activemq/cmsutil/CmsAccessorTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::cmsutil::CmsAccessorTest );
#include <activemq/cmsutil/CmsDestinationAccessorTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::cmsutil::CmsDestinationAccessorTest );
#include <activemq/cmsutil/CmsTemplateTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::cmsutil::CmsTemplateTest );
#include <activemq/cmsutil/DynamicDestinationResolverTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::cmsutil::DynamicDestinationResolverTest );
#include <activemq/cmsutil/SessionPoolTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::cmsutil::SessionPoolTest );

#include <activemq/core/ActiveMQConnectionFactoryTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::core::ActiveMQConnectionFactoryTest );
#include <activemq/core/ActiveMQConnectionTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::core::ActiveMQConnectionTest );
#include <activemq/core/ActiveMQSessionTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::core::ActiveMQSessionTest );
#include <activemq/core/MessageDispatchChannelTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::core::MessageDispatchChannelTest );

#include <activemq/state/ConnectionStateTrackerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::state::ConnectionStateTrackerTest );
#include <activemq/state/ConnectionStateTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::state::ConnectionStateTest );
#include <activemq/state/ConsumerStateTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::state::ConsumerStateTest );
#include <activemq/state/ProducerStateTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::state::ProducerStateTest );
#include <activemq/state/SessionStateTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::state::SessionStateTest );
#include <activemq/state/TransactionStateTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::state::TransactionStateTest );

#include <activemq/transport/failover/FailoverTransportTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::transport::failover::FailoverTransportTest );

#include <activemq/transport/correlator/ResponseCorrelatorTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::transport::correlator::ResponseCorrelatorTest );

#include <activemq/transport/mock/MockTransportFactoryTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::transport::mock::MockTransportFactoryTest );

#include <activemq/transport/inactivity/InactivityMonitorTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::transport::inactivity::InactivityMonitorTest );

#include <activemq/transport/TransportRegistryTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::transport::TransportRegistryTest );
#include <activemq/transport/IOTransportTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::transport::IOTransportTest );

#include <activemq/exceptions/ActiveMQExceptionTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::exceptions::ActiveMQExceptionTest );

#include <activemq/util/IdGeneratorTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::util::IdGeneratorTest );
#include <activemq/util/LongSequenceGeneratorTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::util::LongSequenceGeneratorTest );
#include <activemq/util/PrimitiveValueNodeTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::util::PrimitiveValueNodeTest );
#include <activemq/util/PrimitiveListTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::util::PrimitiveListTest );
#include <activemq/util/PrimitiveMapTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::util::PrimitiveMapTest );
#include <activemq/util/PrimitiveValueConverterTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::util::PrimitiveValueConverterTest );
#include <activemq/util/URISupportTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::util::URISupportTest );
#include <activemq/util/MemoryUsageTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::util::MemoryUsageTest );
#include <activemq/util/MarshallingSupportTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::util::MarshallingSupportTest );

#include <activemq/threads/DedicatedTaskRunnerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::threads::DedicatedTaskRunnerTest );
#include <activemq/threads/CompositeTaskRunnerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::threads::CompositeTaskRunnerTest );

#include <activemq/wireformat/WireFormatRegistryTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::WireFormatRegistryTest );

#include <decaf/internal/util/ByteArrayAdapterTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::internal::util::ByteArrayAdapterTest );
#include <decaf/internal/util/TimerTaskHeapTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::internal::util::TimerTaskHeapTest );

#include <decaf/internal/net/ssl/DefaultSSLSocketFactoryTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::internal::net::ssl::DefaultSSLSocketFactoryTest );

#include <decaf/internal/nio/ByteArrayBufferTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::internal::nio::ByteArrayBufferTest );
#include <decaf/internal/nio/BufferFactoryTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::internal::nio::BufferFactoryTest );
#include <decaf/internal/nio/CharArrayBufferTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::internal::nio::CharArrayBufferTest );
#include <decaf/internal/nio/DoubleArrayBufferTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::internal::nio::DoubleArrayBufferTest );
#include <decaf/internal/nio/FloatArrayBufferTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::internal::nio::FloatArrayBufferTest );
#include <decaf/internal/nio/LongArrayBufferTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::internal::nio::LongArrayBufferTest );
#include <decaf/internal/nio/IntArrayBufferTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::internal::nio::IntArrayBufferTest );
#include <decaf/internal/nio/ShortArrayBufferTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::internal::nio::ShortArrayBufferTest );

#include <decaf/internal/net/URIEncoderDecoderTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::internal::net::URIEncoderDecoderTest );
#include <decaf/internal/net/URIHelperTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::internal::net::URIHelperTest );

#include <decaf/nio/BufferTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::nio::BufferTest );

#include <decaf/io/InputStreamTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::io::InputStreamTest );
#include <decaf/io/OutputStreamTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::io::OutputStreamTest );
#include <decaf/io/FilterInputStreamTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::io::FilterInputStreamTest );
#include <decaf/io/FilterOutputStreamTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::io::FilterOutputStreamTest );
#include <decaf/io/BufferedInputStreamTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::io::BufferedInputStreamTest );
#include <decaf/io/BufferedOutputStreamTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::io::BufferedOutputStreamTest );
#include <decaf/io/ByteArrayInputStreamTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::io::ByteArrayInputStreamTest );
#include <decaf/io/ByteArrayOutputStreamTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::io::ByteArrayOutputStreamTest );
#include <decaf/io/PushbackInputStreamTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::io::PushbackInputStreamTest );
#include <decaf/io/DataInputStreamTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::io::DataInputStreamTest );
#include <decaf/io/DataOutputStreamTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::io::DataOutputStreamTest );
#include <decaf/io/WriterTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::io::WriterTest );
#include <decaf/io/ReaderTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::io::ReaderTest );
#include <decaf/io/OutputStreamWriterTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::io::OutputStreamWriterTest );
#include <decaf/io/InputStreamReaderTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::io::InputStreamReaderTest );

#include <decaf/lang/MathTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::lang::MathTest );
#include <decaf/lang/ByteTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::lang::ByteTest );
#include <decaf/lang/CharacterTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::lang::CharacterTest );
#include <decaf/lang/BooleanTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::lang::BooleanTest );
#include <decaf/lang/ShortTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::lang::ShortTest );
#include <decaf/lang/IntegerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::lang::IntegerTest );
#include <decaf/lang/LongTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::lang::LongTest );
#include <decaf/lang/FloatTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::lang::FloatTest );
#include <decaf/lang/DoubleTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::lang::DoubleTest );
#include <decaf/lang/ExceptionTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::lang::ExceptionTest );
#include <decaf/lang/ThreadTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::lang::ThreadTest );
#include <decaf/lang/SystemTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::lang::SystemTest );
#include <decaf/lang/PointerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::lang::PointerTest );
#include <decaf/lang/ArrayPointerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::lang::ArrayPointerTest );
#include <decaf/lang/StringTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::lang::StringTest );

#include <decaf/net/InetAddressTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::net::InetAddressTest );
#include <decaf/net/Inet4AddressTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::net::InetAddressTest );
#include <decaf/net/Inet6AddressTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::net::InetAddressTest );
#include <decaf/net/SocketFactoryTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::net::SocketFactoryTest );
#include <decaf/net/ServerSocketTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::net::ServerSocketTest );
#include <decaf/net/SocketTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::net::SocketTest );
#include <decaf/net/URITest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::net::URITest );
#include <decaf/net/URISyntaxExceptionTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::net::URISyntaxExceptionTest );
#include <decaf/net/URLEncoderTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::net::URLEncoderTest );
#include <decaf/net/URLDecoderTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::net::URLDecoderTest );

#include <decaf/net/ssl/SSLSocketFactoryTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::net::ssl::SSLSocketFactoryTest );

#include <decaf/util/concurrent/ConcurrentStlMapTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::concurrent::ConcurrentStlMapTest );
#include <decaf/util/concurrent/CountDownLatchTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::concurrent::CountDownLatchTest );
#include <decaf/util/concurrent/MutexTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::concurrent::MutexTest );
#include <decaf/util/concurrent/ThreadPoolTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::concurrent::ThreadPoolTest );
#include <decaf/util/concurrent/TimeUnitTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::concurrent::TimeUnitTest );

#include <decaf/util/concurrent/atomic/AtomicBooleanTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::concurrent::atomic::AtomicBooleanTest );
#include <decaf/util/concurrent/atomic/AtomicIntegerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::concurrent::atomic::AtomicIntegerTest );
#include <decaf/util/concurrent/atomic/AtomicReferenceTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::concurrent::atomic::AtomicReferenceTest );

#include <decaf/util/concurrent/locks/LockSupportTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::concurrent::locks::LockSupportTest );

#include <decaf/util/DateTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::DateTest );
#include <decaf/util/UUIDTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::UUIDTest );
#include <decaf/util/ListTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::ListTest );
#include <decaf/util/StlMapTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::StlMapTest );
#include <decaf/util/PropertiesTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::PropertiesTest );
#include <decaf/util/QueueTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::QueueTest );
#include <decaf/util/RandomTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::RandomTest );
#include <decaf/util/SetTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::SetTest );
#include <decaf/util/StringTokenizerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::StringTokenizerTest );
#include <decaf/util/TimerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::TimerTest );
#include <decaf/util/PriorityQueueTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::PriorityQueueTest );

#include <decaf/util/zip/DeflaterTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::zip::DeflaterTest );
#include <decaf/util/zip/InflaterTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::zip::InflaterTest );
#include <decaf/util/zip/Adler32Test.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::zip::Adler32Test );
#include <decaf/util/zip/CRC32Test.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::zip::CRC32Test );
#include <decaf/util/zip/CheckedInputStreamTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::zip::CheckedInputStreamTest );
#include <decaf/util/zip/CheckedOutputStreamTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::zip::CheckedOutputStreamTest );
#include <decaf/util/zip/DeflaterOutputStreamTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::zip::DeflaterOutputStreamTest );
#include <decaf/util/zip/InflaterInputStreamTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::util::zip::InflaterInputStreamTest );

#include <decaf/security/SecureRandomTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( decaf::security::SecureRandomTest );

////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Marshaler Tests
//
#include <activemq/wireformat/openwire/marshal/universal/ActiveMQBlobMessageMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ActiveMQBlobMessageMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ActiveMQBytesMessageMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ActiveMQBytesMessageMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ActiveMQMapMessageMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ActiveMQMapMessageMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ActiveMQMessageMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ActiveMQMessageMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ActiveMQObjectMessageMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ActiveMQObjectMessageMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ActiveMQQueueMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ActiveMQQueueMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ActiveMQStreamMessageMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ActiveMQStreamMessageMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ActiveMQTempQueueMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ActiveMQTempQueueMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ActiveMQTempTopicMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ActiveMQTempTopicMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ActiveMQTextMessageMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ActiveMQTextMessageMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ActiveMQTopicMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ActiveMQTopicMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/BrokerIdMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::BrokerIdMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/BrokerInfoMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::BrokerInfoMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ConnectionControlMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ConnectionControlMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ConnectionErrorMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ConnectionErrorMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ConnectionIdMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ConnectionIdMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ConnectionInfoMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ConnectionInfoMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ConsumerControlMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ConsumerControlMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ConsumerIdMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ConsumerIdMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ConsumerInfoMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ConsumerInfoMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ControlCommandMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ControlCommandMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/DataArrayResponseMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::DataArrayResponseMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/DataResponseMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::DataResponseMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/DestinationInfoMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::DestinationInfoMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/DiscoveryEventMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::DiscoveryEventMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ExceptionResponseMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ExceptionResponseMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/FlushCommandMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::FlushCommandMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/IntegerResponseMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::IntegerResponseMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/JournalQueueAckMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::JournalQueueAckMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/JournalTopicAckMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::JournalTopicAckMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/JournalTraceMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::JournalTraceMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/JournalTransactionMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::JournalTransactionMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/KeepAliveInfoMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::KeepAliveInfoMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/LastPartialCommandMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::LastPartialCommandMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/LocalTransactionIdMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::LocalTransactionIdMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/MessageAckMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::MessageAckMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/MessageDispatchMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::MessageDispatchMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/MessageDispatchNotificationMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::MessageDispatchNotificationMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/MessageIdMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::MessageIdMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/MessagePullMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::MessagePullMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/NetworkBridgeFilterMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::NetworkBridgeFilterMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/PartialCommandMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::PartialCommandMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ProducerAckMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ProducerAckMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ProducerIdMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ProducerIdMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ProducerInfoMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ProducerInfoMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/RemoveInfoMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::RemoveInfoMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/RemoveSubscriptionInfoMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::RemoveSubscriptionInfoMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ReplayCommandMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ReplayCommandMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ResponseMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ResponseMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/SessionIdMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::SessionIdMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/SessionInfoMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::SessionInfoMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/ShutdownInfoMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::ShutdownInfoMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/SubscriptionInfoMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::SubscriptionInfoMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/TransactionInfoMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::TransactionInfoMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/WireFormatInfoMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::WireFormatInfoMarshallerTest );
#include <activemq/wireformat/openwire/marshal/universal/XATransactionIdMarshallerTest.h>
CPPUNIT_TEST_SUITE_REGISTRATION( activemq::wireformat::openwire::marshal::universal::XATransactionIdMarshallerTest );
