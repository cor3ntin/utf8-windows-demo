add_executable(test_utf8 main.cpp)
target_compile_options(test_utf8 PUBLIC /utf-8)

if(MSVC)
		ADD_CUSTOM_COMMAND(
			TARGET test_utf8
			POST_BUILD
			DEPENDS 
			COMMAND mt.exe -manifest manifest.xml -inputresource:\"$<TARGET_FILE:test_utf8>\"\;\#1 -updateresource:\"$<TARGET_FILE:test_utf8>\"\;\#1
		)
	ENDIF()
ENDIF(MSVC)