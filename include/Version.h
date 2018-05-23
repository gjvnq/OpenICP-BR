#pragma once
#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)
#define OPENICP_VERSION_MAJOR 0
#define OPENICP_VERSION_MINOR 2
#define OPENICP_VERSION_PATCH 0
#ifndef OPENICP_VERSION_DEV
	#define OPENICP_VERSION_DEV false
#endif
#if OPENICP_VERSION_DEV
	#define OPENICP_VERSION_SUFFIX "dev"
#endif

#ifdef OPENICP_VERSION_SUFFIX
	#define OPENICP_VERSION STR(OPENICP_VERSION_MAJOR) "." STR(OPENICP_VERSION_MINOR) "." STR(OPENICP_VERSION_PATCH) "-" OPENICP_VERSION_SUFFIX
#else
	#define OPENICP_VERSION STR(OPENICP_VERSION_MAJOR) "." STR(OPENICP_VERSION_MINOR) "." STR(OPENICP_VERSION_PATCH)
#endif

const char OpenICP_Version[] = OPENICP_VERSION;
const int OpenICP_Version_Major = OPENICP_VERSION_MAJOR;
const int OpenICP_Version_Minor = OPENICP_VERSION_MINOR;
const int OpenICP_Version_Patch = OPENICP_VERSION_PATCH;
const bool OpenICP_Version_Dev = OPENICP_VERSION_DEV;
#ifdef OPENICP_VERSION_SUFFIX
const char OpenICP_Version_Suffix[] = OPENICP_VERSION_SUFFIX;
#else
const char OpenICP_Version_Suffix[] = "";
#endif