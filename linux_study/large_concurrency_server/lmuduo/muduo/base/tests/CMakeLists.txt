add_executable(atomic_unittest Atomic_unittest.cc)
target_link_libraries(atomic_unittest muduo_base)

add_executable(blockingqueue_bench BlockingQueue_bench.cc)
target_link_libraries(blockingqueue_bench muduo_base)

add_executable(blockingqueue_test BlockingQueue_test.cc)
target_link_libraries(blockingqueue_test muduo_base)

add_executable(boundedblockingqueue BoundedBlockingQueue_test.cc)
target_link_libraries(boundedblockingqueue muduo_base)

add_executable(Exception_test Exception_test.cc)
target_link_libraries(Exception_test muduo_base)

# if (BOOSTTEST_LIBARARY)
add_executable(LogStream_test LogStream_test.cc)
target_link_libraries(LogStream_test muduo_base boost_unit_test_framework)
# endif()

add_executable(LogFile_test LogFile_test.cc)
target_link_libraries(LogFile_test muduo_base)

add_executable(LogStream_bench LogStream_bench.cc)
target_link_libraries(LogStream_bench muduo_base)

add_executable(Mutex_test Mutex_test.cc)
target_link_libraries(Mutex_test muduo_base)

add_executable(Thread_test Thread_test.cc)
target_link_libraries(Thread_test muduo_base)

add_executable(ThreadPool_test ThreadPool_test.cc)
target_link_libraries(ThreadPool_test muduo_base)

add_executable(ThreadLocal_test ThreadLocal_test.cc)
target_link_libraries(ThreadLocal_test muduo_base)

add_executable(ThreadLocalSingleton_test ThreadLocalSingleton_test.cc)
target_link_libraries(ThreadLocalSingleton_test muduo_base)

add_executable(Singleton_test Singleton_test.cc)
target_link_libraries(Singleton_test muduo_base)

add_executable(timestamp_unittest Timestamp_unittest.cc)
target_link_libraries(timestamp_unittest muduo_base)

