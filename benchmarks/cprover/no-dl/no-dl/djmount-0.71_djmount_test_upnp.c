// #anon_enum$NOT_INITIALIZED=0$INITIALIZED_UTF8=1$INITIALIZED_NOT_UTF8=2
// file charset.c line 53
enum anonymous$6 { NOT_INITIALIZED=0, INITIALIZED_UTF8=1, INITIALIZED_NOT_UTF8=2 };

// #anon_enum$eINVALID_NODE=0$eELEMENT_NODE=1$eATTRIBUTE_NODE=2$eTEXT_NODE=3$eCDATA_SECTION_NODE=4$eENTITY_REFERENCE_NODE=5$eENTITY_NODE=6$ePROCESSING_INSTRUCTION_NODE=7$eCOMMENT_NODE=8$eDOCUMENT_NODE=9$eDOCUMENT_TYPE_NODE=10$eDOCUMENT_FRAGMENT_NODE=11$eNOTATION_NODE=12
// file /usr/include/upnp/ixml.h line 103
enum anonymous$9 { eINVALID_NODE=0, eELEMENT_NODE=1, eATTRIBUTE_NODE=2, eTEXT_NODE=3, eCDATA_SECTION_NODE=4, eENTITY_REFERENCE_NODE=5, eENTITY_NODE=6, ePROCESSING_INSTRUCTION_NODE=7, eCOMMENT_NODE=8, eDOCUMENT_NODE=9, eDOCUMENT_TYPE_NODE=10, eDOCUMENT_FRAGMENT_NODE=11, eNOTATION_NODE=12 };

// tag-#anon#ST[ARR16{U64}$U64$'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous$10;

// tag-#anon#UN[*{SYM#tag-_Object_Class#}$SYM#tag-_Object_Class#$'baseclass'||*{SYM#tag-_ContentDir_Class#}$SYM#tag-_ContentDir_Class#$'isa'||SYM#tag-_Service#'super'|]
// file content_dir_p.h line 43
union anonymous;

// tag-#anon#UN[*{SYM#tag-_Object_Class#}$SYM#tag-_Object_Class#$'baseclass'||*{SYM#tag-_DJFS_Class#}$SYM#tag-_DJFS_Class#$'isa'||SYM#tag-_VFS#'super'|]
// file djfs_p.h line 41
union anonymous$2;

// tag-#anon#UN[*{SYM#tag-_Object_Class#}$SYM#tag-_Object_Class#$'baseclass'||*{SYM#tag-_Service_Class#}$SYM#tag-_Service_Class#$'isa'||SYM#tag-_Object#'super'|]
// file service_p.h line 40
union anonymous$12;

// tag-#anon#UN[*{SYM#tag-_Object_Class#}$SYM#tag-_Object_Class#$'baseclass'||*{SYM#tag-_VFS_Class#}$SYM#tag-_VFS_Class#$'isa'||SYM#tag-_Object#'super'|]
// file vfs_p.h line 46
union anonymous$4;

// tag-#anon#UN[*{cSYM#tag-_Object_Class#}$cSYM#tag-_Object_Class#$'baseclass'||*{cSYM#tag-_Object_Class#}$cSYM#tag-_Object_Class#$'isa'|]
// file object_p.h line 67
union anonymous$8;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$5;

// tag-#anon#UN[SYM#tag-_Object_Class#'base'||SYM#tag-_Object_Class#'super'|]
// file service_p.h line 60
union anonymous$11;

// tag-#anon#UN[SYM#tag-_Object_Class#'base'||SYM#tag-_Service_Class#'super'|]
// file content_dir_p.h line 38
union anonymous$0;

// tag-#anon#UN[SYM#tag-_Object_Class#'base'||SYM#tag-_VFS_Class#'super'|]
// file djfs_p.h line 54
union anonymous$1;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$3;

// tag-CommandStruct
// file test_upnp.c line 89
struct CommandStruct;

// tag-CommandType
// file test_upnp.c line 68
enum CommandType { CMD_HELP=0, CMD_LOGLEVEL=1, CMD_LEAK=2, CMD_LEAK_FULL=3, CMD_BROWSE=4, CMD_METADATA=5, CMD_LS=6, CMD_SEARCHCAP=7, CMD_SEARCH=8, CMD_ACTION=9, CMD_PRINTDEV=10, CMD_LISTDEV=11, CMD_REFRESH=12, CMD_WCAT=13, CMD_EXIT=14 };

// tag-DeviceList_EventType
// file device_list.h line 54
enum DeviceList_EventType { E_DEVICE_ADDED=1, E_DEVICE_REMOVED=2 };

// tag-FREELIST
// file /usr/include/upnp/FreeList.h line 61
struct FREELIST;

// tag-FREELISTNODE
// file /usr/include/upnp/FreeList.h line 52
struct FREELISTNODE;

// tag-GetFrom
// file device.h line 116
enum GetFrom { FROM_SID=0, FROM_CONTROL_URL=1, FROM_EVENT_URL=2, FROM_SERVICE_TYPE=3 };

// tag-LINKEDLIST
// file /usr/include/upnp/LinkedList.h line 83
struct LINKEDLIST;

// tag-LISTNODE
// file /usr/include/upnp/LinkedList.h line 60
struct LISTNODE;

// tag-Log_Level
// file log.h line 60
enum Log_Level { LOG_RESERVED=-1, LOG_ERROR=0, LOG_WARNING=1, LOG_INFO=2, LOG_DEBUG=3 };

// tag-Upnp_Action_Complete
// file /usr/include/upnp/upnp.h line 640
struct Upnp_Action_Complete;

// tag-Upnp_Action_Request
// file /usr/include/upnp/upnp.h line 606
struct Upnp_Action_Request;

// tag-Upnp_Discovery
// file /usr/include/upnp/upnp.h line 727
struct Upnp_Discovery;

// tag-Upnp_Event
// file /usr/include/upnp/upnp.h line 707
struct Upnp_Event;

// tag-Upnp_EventType_e
// file /usr/include/upnp/upnp.h line 444
enum Upnp_EventType_e { UPNP_CONTROL_ACTION_REQUEST=0, UPNP_CONTROL_ACTION_COMPLETE=1, UPNP_CONTROL_GET_VAR_REQUEST=2, UPNP_CONTROL_GET_VAR_COMPLETE=3, UPNP_DISCOVERY_ADVERTISEMENT_ALIVE=4, UPNP_DISCOVERY_ADVERTISEMENT_BYEBYE=5, UPNP_DISCOVERY_SEARCH_RESULT=6, UPNP_DISCOVERY_SEARCH_TIMEOUT=7, UPNP_EVENT_SUBSCRIPTION_REQUEST=8, UPNP_EVENT_RECEIVED=9, UPNP_EVENT_RENEWAL_COMPLETE=10, UPNP_EVENT_SUBSCRIBE_COMPLETE=11, UPNP_EVENT_UNSUBSCRIBE_COMPLETE=12, UPNP_EVENT_AUTORENEWAL_FAILED=13, UPNP_EVENT_SUBSCRIPTION_EXPIRED=14 };

// tag-Upnp_Event_Subscribe
// file /usr/include/upnp/upnp.h line 766
struct Upnp_Event_Subscribe;

// tag-Upnp_State_Var_Complete
// file /usr/include/upnp/upnp.h line 690
struct Upnp_State_Var_Complete;

// tag-Upnp_State_Var_Request
// file /usr/include/upnp/upnp.h line 659
struct Upnp_State_Var_Request;

// tag-Upnp_Subscription_Request
// file /usr/include/upnp/upnp.h line 790
struct Upnp_Subscription_Request;

// tag-_Cache
// file cache.h line 41
struct _Cache;

// tag-_Charset_Direction
// file charset.h line 80
enum _Charset_Direction { CHARSET_TO_UTF8=0, CHARSET_FROM_UTF8=1 };

// tag-_ContentDir
// file content_dir.h line 64
struct _ContentDir;

// tag-_ContentDir_BrowseFlag
// file content_dir.h line 101
enum _ContentDir_BrowseFlag { CONTENT_DIR_BROWSE_METADATA=0, CONTENT_DIR_BROWSE_DIRECT_CHILDREN=1 };

// tag-_ContentDir_BrowseResult
// file content_dir.h line 90
struct _ContentDir_BrowseResult;

// tag-_ContentDir_Children
// file content_dir.h line 74
struct _ContentDir_Children;

// tag-_ContentDir_Class
// file content_dir.h line 64
struct _ContentDir_Class;

// tag-_Converter
// file charset.c line 63
struct _Converter;

// tag-_DIDLObject
// file didl_object.h line 50
struct _DIDLObject;

// tag-_DJFS
// file djfs.h line 42
struct _DJFS;

// tag-_DJFS_Class
// file djfs.h line 42
struct _DJFS_Class;

// tag-_DJFS_Flags
// file djfs.h line 49
enum _DJFS_Flags { DJFS_SHOW_DEBUG=1, DJFS_USE_PLAYLISTS=2, DJFS_SHOW_METADATA=4 };

// tag-_Device
// file device.h line 49
struct _Device;

// tag-_DeviceNode
// file device_list.c line 72
struct _DeviceNode;

// tag-_Entry
// file cache.c line 57
struct _Entry;

// tag-_FileBuffer
// file file_buffer.h line 49
struct _FileBuffer;

// tag-_FileBuffer_StringAlloc
// file file_buffer.h line 86
enum _FileBuffer_StringAlloc { FILE_BUFFER_STRING_COPY=0, FILE_BUFFER_STRING_STEAL=1, FILE_BUFFER_STRING_EXTERN=2 };

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-_IXML_Document
// file /usr/include/upnp/ixml.h line 156
struct _IXML_Document;

// tag-_IXML_Element
// file /usr/include/upnp/ixml.h line 205
struct _IXML_Element;

// tag-_IXML_Node
// file /usr/include/upnp/ixml.h line 159
struct _IXML_Node;

// tag-_IXML_NodeList
// file /usr/include/upnp/ixml.h line 235
struct _IXML_NodeList;

// tag-_MediaFile
// file media_file.h line 44
struct _MediaFile;

// tag-_MimeType
// file media_file.c line 62
struct _MimeType;

// tag-_Object
// file object.h line 84
struct _Object;

// tag-_Object_Class
// file object.h line 84
struct _Object_Class;

// tag-_PtrArray
// file ptr_array.h line 51
struct _PtrArray;

// tag-_PtrArray_Iterator
// file ptr_array.h line 203
struct _PtrArray_Iterator;

// tag-_SearchHistory
// file djfs.c line 66
struct _SearchHistory;

// tag-_Service
// file service.h line 55
struct _Service;

// tag-_Service_Class
// file service.h line 55
struct _Service_Class;

// tag-_StringPair
// file string_util.h line 51
struct _StringPair;

// tag-_StringStream
// file string_util.h line 144
struct _StringStream;

// tag-_VFS
// file vfs.h line 40
struct _VFS;

// tag-_VFS_BrowseStatus
// file vfs_p.h line 53
struct _VFS_BrowseStatus;

// tag-_VFS_Class
// file vfs.h line 40
struct _VFS_Class;

// tag-_VFS_Query
// file vfs.h line 56
struct _VFS_Query;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-fuse_dirhandle
// file /usr/include/fuse/fuse.h line 62
struct fuse_dirhandle;

// tag-hash_entry
// file hash.h line 35
struct hash_entry;

// tag-hash_table
// file hash.h line 55
struct hash_table;

// tag-hash_tuning
// file ../gl/hash.h line 41
struct hash_tuning;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-s_UpnpString
// file /usr/include/upnp/UpnpString.h line 38
struct s_UpnpString;

// tag-sockaddr_storage
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 162
struct sockaddr_storage;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-utsname
// file /usr/include/x86_64-linux-gnu/sys/utsname.h line 48
struct utsname;

#include <stdarg.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// ActionError
// file service.c line 307
static void ActionError(struct _Service *serv, const char *actionName, signed int rc, struct _IXML_Document **response);
// AddDevice
// file device_list.c line 348
static void AddDevice(const char *deviceId, const char *descLocation, signed int expires);
// BrowseChildren
// file djfs.c line 235
static struct _VFS_BrowseStatus BrowseChildren(struct _DJFS * const self, const char * const sub_path, const struct _VFS_Query * const query, void * const tmp_ctx, const char * const devName, const struct _DIDLObject * const parent, const _Bool searchable, const char * const search_criteria, struct _ContentDir_Children * const children);
// BrowseDebug
// file vfs.c line 229
static struct _VFS_BrowseStatus BrowseDebug(struct _VFS * const self, const char * const sub_path, const struct _VFS_Query * const query, void * const tmp_ctx);
// BrowseDebug$link1
// file djfs.c line 431
static struct _VFS_BrowseStatus BrowseDebug$link1(struct _VFS * const vfs, const char * const sub_path$link1, const struct _VFS_Query * const query$link1, void * const tmp_ctx$link1);
// BrowseDebug::1::2::1::func$object
// 
struct _VFS_BrowseStatus func$object(struct _VFS *, const char *, const struct _VFS_Query *, void *);
// BrowseOrSearchAction
// file content_dir.c line 124
static signed int BrowseOrSearchAction(struct _ContentDir *cds, void *result_context, const char *objectId, const char *criteria, unsigned long int starting_index, unsigned long int requested_count, unsigned long int *nb_matched, unsigned long int *nb_returned, struct _PtrArray *objects);
// BrowseOrSearchAll
// file content_dir.c line 255
static struct _ContentDir_Children * BrowseOrSearchAll(struct _ContentDir *cds, void *result_context, const char *objectId, const char * const criteria);
// BrowseOrSearchAll::1::1::_talloc_destructor_fn$object
// 
signed int _talloc_destructor_fn$object(struct _ContentDir_Children *);
// BrowseOrSearchWithCache
// file content_dir.c line 383
static const struct _ContentDir_BrowseResult * BrowseOrSearchWithCache(struct _ContentDir *cds, void *result_context, const char *objectId, const char * const criteria);
// BrowseOrSearchWithCache::1::2::4::1::_talloc_destructor_fn$object
// 
signed int _talloc_destructor_fn$object(struct _ContentDir_BrowseResult *);
// BrowseRoot
// file djfs.c line 350
static struct _VFS_BrowseStatus BrowseRoot(struct _VFS * const vfs, const char * const sub_path, const struct _VFS_Query * const query, void * const tmp_ctx);
// BrowseSearchDir
// file djfs.c line 90
static struct _VFS_BrowseStatus BrowseSearchDir(struct _DJFS * const self, const char * const sub_path, const struct _VFS_Query * const query, void * const tmp_ctx, const char * const devName, const struct _DIDLObject * const parent, const char * const criteria_start);
// Cache_Create
// file cache.h line 66
struct _Cache * Cache_Create(void *talloc_context, unsigned long int size, signed long int max_age, void (*free_expired_data)(const char *, void *));
// Cache_Create::1::3::_talloc_destructor_fn$object
// 
signed int _talloc_destructor_fn$object(struct _Cache *);
// Cache_Create::free_expired_data$object
// 
void free_expired_data$object(const char *, void *);
// Cache_Get
// file cache.h line 79
void ** Cache_Get(struct _Cache *cache, const char *key);
// Cache_GetNrEntries
// file cache.c line 292
inline signed long int Cache_GetNrEntries(const struct _Cache * const cache);
// Cache_GetStatusString
// file cache.h line 119
char * Cache_GetStatusString(const struct _Cache * const cache, void *result_context, const char *spacer);
// Charset_ConvertString
// file charset.c line 303
char * Charset_ConvertString(enum _Charset_Direction dir, const char * const str, char *buffer, unsigned long int bufsize, void * const talloc_context);
// Charset_Finish
// file charset.c line 483
signed int Charset_Finish();
// Charset_Initialize
// file charset.c line 96
signed int Charset_Initialize(const char *charset);
// Charset_IsConverting
// file charset.c line 226
_Bool Charset_IsConverting();
// Charset_PrintString
// file charset.c line 416
signed int Charset_PrintString(enum _Charset_Direction dir, const char * const str, struct _IO_FILE * const stream);
// CheckSubscriptionsLoop
// file device_list.c line 933
static void * CheckSubscriptionsLoop(void *arg);
// CommandLoop
// file test_upnp.c line 459
static void * CommandLoop(void *arg);
// ContentDir_Browse
// file content_dir.c line 453
const struct _ContentDir_BrowseResult * ContentDir_Browse(struct _ContentDir *cds, void *result_context, const char *objectId, enum _ContentDir_BrowseFlag browse_flag);
// ContentDir_Create
// file content_dir.h line 121
struct _ContentDir * ContentDir_Create(void *talloc_context, signed int ctrlpt_handle, struct _IXML_Element *serviceDesc, const char *base_url);
// ContentDir_GetSearchCapabilities
// file content_dir.c line 467
const char * ContentDir_GetSearchCapabilities(struct _ContentDir *self, void *unused);
// ContentDir_Search
// file content_dir.c line 500
const struct _ContentDir_BrowseResult * ContentDir_Search(struct _ContentDir *cds, void *result_context, const char *objectId, const char *criteria);
// ContentDir_ToService
// file content_dir.h line 64
static inline struct _Service * ContentDir_ToService(struct _ContentDir *obj);
// DIDLObject_Create
// file didl_object.c line 56
struct _DIDLObject * DIDLObject_Create(void *talloc_context, struct _IXML_Element *elem, _Bool is_container);
// DIDLObject_Create::1::2::4::_talloc_destructor_fn$object
// 
signed int _talloc_destructor_fn$object(struct _DIDLObject *);
// DIDLObject_GetElementString
// file didl_object.c line 137
char * DIDLObject_GetElementString(const struct _DIDLObject *o, void *result_context);
// DJFS_Create
// file djfs.c line 554
struct _DJFS * DJFS_Create(void *talloc_context, enum _DJFS_Flags flags, unsigned long int search_history_size);
// DJFS_ToVFS
// file djfs.h line 42
static inline struct _VFS * DJFS_ToVFS(struct _DJFS *obj);
// DestroyChildren
// file content_dir.c line 88
static signed int DestroyChildren(struct _ContentDir_Children * const children);
// DestroyObject
// file didl_object.c line 41
static signed int DestroyObject(struct _DIDLObject * const o);
// DestroyResult
// file content_dir.c line 358
static signed int DestroyResult(struct _ContentDir_BrowseResult * const br);
// DeviceList_GetDeviceStatusString
// file device_list.c line 855
char * DeviceList_GetDeviceStatusString(void *context, const char *deviceName, _Bool debug);
// DeviceList_GetDevicesNames
// file device_list.c line 789
struct _PtrArray * DeviceList_GetDevicesNames(void *context);
// DeviceList_GetStatusString
// file device_list.c line 824
char * DeviceList_GetStatusString(void *context);
// DeviceList_RefreshAll
// file device_list.c line 285
signed int DeviceList_RefreshAll(_Bool remove_all);
// DeviceList_RemoveAll
// file device_list.c line 257
static signed int DeviceList_RemoveAll(void);
// DeviceList_RemoveDevice
// file device_list.c line 220
signed int DeviceList_RemoveDevice(const char *deviceId);
// DeviceList_SendAction
// file device_list.c line 773
struct _IXML_Document * DeviceList_SendAction(const char *deviceName, const char *serviceType, const char *actionName, signed int nb_params, const struct _StringPair *params);
// DeviceList_SendActionAsync
// file device_list.c line 756
signed int DeviceList_SendActionAsync(const char *deviceName, const char *serviceType, const char *actionName, signed int nb_params, const struct _StringPair *params);
// DeviceList_Start
// file device_list.c line 946
signed int DeviceList_Start(const char *ssdp_target, void (*eventCallback)(enum DeviceList_EventType, const char *));
// DeviceList_Start::eventCallback$object
// 
void eventCallback$object(enum DeviceList_EventType, const char *);
// DeviceList_Stop
// file device_list.c line 1019
signed int DeviceList_Stop(void);
// Device_Create
// file device.c line 191
struct _Device * Device_Create(void *parent_context, signed int ctrlpt_handle, const char * const descDocURL, const char * const deviceId, const char * const descDocText);
// Device_Create::1::8::_talloc_destructor_fn$object
// 
signed int _talloc_destructor_fn$object(struct _Device *);
// Device_GetDescDocItem
// file device.c line 314
const char * Device_GetDescDocItem(const struct _Device *dev, const char *tagname, _Bool log_error);
// Device_GetDescDocTextCopy
// file device.c line 328
char * Device_GetDescDocTextCopy(const struct _Device *dev, void *result_context);
// Device_GetServiceFrom
// file device.c line 367
struct _Service * Device_GetServiceFrom(const struct _Device *dev, const char *servname, enum GetFrom from, _Bool log_error);
// Device_GetStatusString
// file device.c line 406
char * Device_GetStatusString(const struct _Device *dev, void *result_context, _Bool debug);
// Device_SusbcribeAllEvents
// file device.c line 339
signed int Device_SusbcribeAllEvents(const struct _Device *dev);
// EventHandlerCallback
// file device_list.c line 507
static signed int EventHandlerCallback(enum Upnp_EventType_e event_type, void *event, void *cookie);
// FileBuffer_CreateFromString
// file file_buffer.c line 59
struct _FileBuffer * FileBuffer_CreateFromString(void *talloc_context, const char *content, enum _FileBuffer_StringAlloc alloc);
// FileBuffer_CreateFromURL
// file file_buffer.c line 94
struct _FileBuffer * FileBuffer_CreateFromURL(void *talloc_context, const char *url, signed long int file_size);
// FileBuffer_GetSize
// file file_buffer.c line 117
signed long int FileBuffer_GetSize(const struct _FileBuffer *file);
// FileBuffer_HasExactRead
// file file_buffer.c line 127
_Bool FileBuffer_HasExactRead(const struct _FileBuffer *file);
// FileBuffer_Read
// file file_buffer.c line 138
signed long int FileBuffer_Read(struct _FileBuffer *file, char *buffer, unsigned long int size, const signed long int offset);
// GetDeviceListNodeFromId
// file device_list.c line 145
static struct LISTNODE * GetDeviceListNodeFromId(const char *deviceId);
// GetDeviceNodeFromName
// file device_list.c line 126
static struct _DeviceNode * GetDeviceNodeFromName(const char *name, _Bool log_error);
// GetService
// file device_list.c line 162
static struct _Service * GetService(const char *s, enum GetFrom from);
// GetVariable
// file service.c line 170
static struct LISTNODE * GetVariable(const struct _Service *serv, const char *name);
// HandleEvent
// file device_list.c line 318
static void HandleEvent(char *sid, signed int eventkey, struct _IXML_Document *changes);
// ListAddTail
// file /usr/include/upnp/LinkedList.h line 137
struct LISTNODE * ListAddTail(struct LINKEDLIST *, void *);
// ListDelNode
// file /usr/include/upnp/LinkedList.h line 183
void * ListDelNode(struct LINKEDLIST *, struct LISTNODE *, signed int);
// ListDestroy
// file /usr/include/upnp/LinkedList.h line 200
signed int ListDestroy(struct LINKEDLIST *, signed int);
// ListHead
// file /usr/include/upnp/LinkedList.h line 214
struct LISTNODE * ListHead(struct LINKEDLIST *);
// ListInit
// file /usr/include/upnp/LinkedList.h line 106
signed int ListInit(struct LINKEDLIST *, signed int (*)(void *, void *), void (*)(void *));
// ListNext
// file /usr/include/upnp/LinkedList.h line 236
struct LISTNODE * ListNext(struct LINKEDLIST *, struct LISTNODE *);
// ListSize
// file /usr/include/upnp/LinkedList.h line 280
signed long int ListSize(struct LINKEDLIST *);
// ListTail
// file /usr/include/upnp/LinkedList.h line 225
struct LISTNODE * ListTail(struct LINKEDLIST *);
// Log_BeginColor
// file log.c line 205
void Log_BeginColor(enum Log_Level level, struct _IO_FILE *stream);
// Log_Colorize
// file log.c line 199
void Log_Colorize(_Bool colorize);
// Log_EndColor
// file log.c line 220
void Log_EndColor(enum Log_Level level, struct _IO_FILE *stream);
// Log_Finish
// file log.c line 106
signed int Log_Finish(void);
// Log_Initialize
// file log.c line 85
signed int Log_Initialize(void (*print_function)(enum Log_Level, const char *));
// Log_Initialize::print_function$object
// 
void print_function$object(enum Log_Level, const char *);
// Log_IsActivated
// file log.c line 121
_Bool Log_IsActivated(enum Log_Level level);
// Log_Lock
// file log.c line 183
signed int Log_Lock(void);
// Log_Print
// file log.c line 131
signed int Log_Print(enum Log_Level level, const char *msg);
// Log_Printf
// file log.c line 146
signed int Log_Printf(enum Log_Level level, const char *fmt, ...);
// Log_SetMaxLevel
// file log.c line 172
void Log_SetMaxLevel(enum Log_Level max_level);
// Log_Unlock
// file log.c line 189
signed int Log_Unlock(void);
// MakeAction
// file service.c line 274
static struct _IXML_Document * MakeAction(const char *actionName, const char *serviceType, signed int nb_params, const struct _StringPair *params);
// MediaFile_GetName
// file media_file.c line 206
char * MediaFile_GetName(void *result_context, const struct _DIDLObject *o, const char *extension);
// MediaFile_GetPlaylistContent
// file media_file.c line 232
char * MediaFile_GetPlaylistContent(const struct _MediaFile * const file, void *result_context);
// MediaFile_GetPreferred
// file media_file.c line 140
_Bool MediaFile_GetPreferred(const struct _DIDLObject * const o, struct _MediaFile *file);
// MediaFile_GetResSize
// file media_file.c line 281
signed long int MediaFile_GetResSize(const struct _MediaFile * const file);
// NotifyUpdate
// file device_list.c line 102
static void NotifyUpdate(enum DeviceList_EventType type, const struct _DeviceNode *devnode);
// Object_Create
// file object.c line 230
struct _Object * Object_Create(void *parent_context, void *unused);
// PtrArray_Append
// file ptr_array.h line 123
_Bool PtrArray_Append(struct _PtrArray *self, void *element);
// PtrArray_Create
// file ptr_array.h line 73
struct _PtrArray * PtrArray_Create(void *context);
// PtrArray_CreateWithCapacity
// file ptr_array.h line 87
struct _PtrArray * PtrArray_CreateWithCapacity(void *context, unsigned long int capacity);
// PtrArray_GetElementIndex
// file ptr_array.c line 145
signed long int PtrArray_GetElementIndex(const struct _PtrArray *self, void *element);
// PtrArray_GetHead
// file ptr_array.h line 132
static inline void * PtrArray_GetHead(const struct _PtrArray * const self);
// PtrArray_GetHead$link1
// file ptr_array.h line 132
static inline void * PtrArray_GetHead$link1(const struct _PtrArray * const self$link1);
// PtrArray_GetSize
// file ptr_array.h line 108
static inline unsigned long int PtrArray_GetSize(const struct _PtrArray *self);
// PtrArray_GetSize$link1
// file ptr_array.h line 108
static inline unsigned long int PtrArray_GetSize$link1(const struct _PtrArray *self$link1);
// PtrArray_InsertAt
// file ptr_array.c line 120
_Bool PtrArray_InsertAt(struct _PtrArray *self, void *element, unsigned long int i);
// PtrArray_IsEmpty
// file ptr_array.h line 96
static inline _Bool PtrArray_IsEmpty(const struct _PtrArray *self);
// PtrArray_IteratorGetElement
// file ptr_array.h line 230
static inline void * PtrArray_IteratorGetElement(const struct _PtrArray_Iterator *iter);
// PtrArray_IteratorGetElement$link1
// file ptr_array.h line 230
static inline void * PtrArray_IteratorGetElement$link1(const struct _PtrArray_Iterator *iter$link1);
// PtrArray_IteratorLoop
// file ptr_array.h line 222
static inline _Bool PtrArray_IteratorLoop(struct _PtrArray_Iterator *iter);
// PtrArray_IteratorLoop$link1
// file ptr_array.h line 222
static inline _Bool PtrArray_IteratorLoop$link1(struct _PtrArray_Iterator *iter$link1);
// PtrArray_IteratorStart
// file ptr_array.h line 215
static inline struct _PtrArray_Iterator PtrArray_IteratorStart(const struct _PtrArray *array);
// PtrArray_IteratorStart$link1
// file ptr_array.h line 215
static inline struct _PtrArray_Iterator PtrArray_IteratorStart$link1(const struct _PtrArray *array$link1);
// PtrArray_RemoveAt
// file ptr_array.h line 174
void * PtrArray_RemoveAt(struct _PtrArray *self, unsigned long int i);
// PtrArray_RemoveAtReorder
// file ptr_array.c line 184
void * PtrArray_RemoveAtReorder(struct _PtrArray *self, unsigned long int i);
// PtrArray_ReserveExtraSize
// file ptr_array.c line 76
_Bool PtrArray_ReserveExtraSize(struct _PtrArray *self, unsigned long int extra_size);
// ServiceFactory
// file device.c line 80
static struct _Service * ServiceFactory(struct _Device *dev, signed int ctrlpt_handle, struct _IXML_Element *serviceDesc, const char *base_url);
// Service_Create
// file service.c line 582
struct _Service * Service_Create(void *talloc_context, signed int ctrlpt_handle, struct _IXML_Element *serviceDesc, const char *base_url);
// Service_GetControlURL
// file service.c line 550
const char * Service_GetControlURL(const struct _Service *serv);
// Service_GetEventURL
// file service.c line 544
const char * Service_GetEventURL(const struct _Service *serv);
// Service_GetServiceType
// file service.c line 556
const char * Service_GetServiceType(const struct _Service *serv);
// Service_GetSid
// file service.c line 538
const char * Service_GetSid(const struct _Service *serv);
// Service_GetStatusString
// file service.c line 523
char * Service_GetStatusString(const struct _Service *serv, void *result_context, _Bool debug, const char *spacer);
// Service_GetStatusString::$tmp::tmp_if_expr$2$object
// 
char * tmp_if_expr$2$object(const struct _Service *, void *, _Bool, const char *);
// Service_GetStatusString::$tmp::tmp_if_expr$4$object
// 
char * tmp_if_expr$4$object(const struct _Service *, void *, _Bool, const char *);
// Service_SendAction
// file service.c line 413
signed int Service_SendAction(struct _Service *serv, struct _IXML_Document **response, const char *actionName, signed int nb_params, const struct _StringPair *params);
// Service_SendActionAsync
// file service.c line 353
signed int Service_SendActionAsync(const struct _Service *serv, signed int (*callback)(enum Upnp_EventType_e, void *, void *), const char *actionName, signed int nb_params, const struct _StringPair *params);
// Service_SendActionAsync::callback$object
// 
signed int callback$object(enum Upnp_EventType_e, void *, void *);
// Service_SendActionAsyncVa
// file service.c line 389
signed int Service_SendActionAsyncVa(const struct _Service *serv, signed int (*callback)(enum Upnp_EventType_e, void *, void *), const char *actionName, ...);
// Service_SendActionAsyncVa::callback$object
// 
signed int callback$object(enum Upnp_EventType_e, void *, void *);
// Service_SendActionVa
// file service.c line 452
signed int Service_SendActionVa(struct _Service *serv, struct _IXML_Document **response, const char *actionName, ...);
// Service_SetSid
// file service.c line 151
signed int Service_SetSid(struct _Service *serv, char *sid);
// Service_SubscribeEventURL
// file service.c line 55
signed int Service_SubscribeEventURL(struct _Service *serv);
// Service_UnsubscribeEventURL
// file service.c line 90
signed int Service_UnsubscribeEventURL(struct _Service *serv);
// Service_UpdateState
// file service.c line 191
signed int Service_UpdateState(struct _Service *serv, struct _IXML_Document *changedVariables);
// Service_UpdateState::$tmp::tmp_if_expr$10$object
// 
void tmp_if_expr$10$object(struct _Service *, const char *, const char *);
// Service_UpdateState::$tmp::tmp_if_expr$8$object
// 
void tmp_if_expr$8$object(struct _Service *, const char *, const char *);
// StringStream_Create
// file string_util.h line 155
struct _StringStream * StringStream_Create(void *parent_context);
// StringStream_Create::1::1::2::1::_talloc_destructor_fn$object
// 
signed int _talloc_destructor_fn$object(struct _StringStream *);
// StringStream_GetFile
// file string_util.h line 163
struct _IO_FILE * StringStream_GetFile(const struct _StringStream *ss);
// StringStream_GetSnapshot
// file string_util.h line 177
char * StringStream_GetSnapshot(struct _StringStream *ss, void *result_context, unsigned long int *slen);
// StringStream_destructor
// file string_util.c line 184
static signed int StringStream_destructor(struct _StringStream * const ss);
// String_CleanFileName
// file string_util.h line 77
char * String_CleanFileName(void *talloc_context, const char *s);
// String_Hash
// file string_util.c line 136
unsigned int String_Hash(const char *str);
// String_StripSpaces
// file string_util.h line 66
char * String_StripSpaces(void *talloc_context, const char *s);
// String_ToBoolean
// file string_util.h line 119
_Bool String_ToBoolean(const char *s, _Bool default_value);
// UpnpAddToAction
// file /usr/include/upnp/upnptools.h line 193
signed int UpnpAddToAction(struct _IXML_Document **, const char *, const char *, const char *, const char *);
// UpnpCloseHttpGet
// file /usr/include/upnp/upnp.h line 2499
signed int UpnpCloseHttpGet(void *);
// UpnpDownloadUrlItem
// file /usr/include/upnp/upnp.h line 2285
signed int UpnpDownloadUrlItem(const char *, char **, char *);
// UpnpFinish
// file /usr/include/upnp/upnp.h line 977
signed int UpnpFinish(void);
// UpnpGetErrorMessage
// file /usr/include/upnp/upnptools.h line 72
const char * UpnpGetErrorMessage(signed int);
// UpnpGetServerIpAddress
// file /usr/include/upnp/upnp.h line 1017
char * UpnpGetServerIpAddress(void);
// UpnpGetServerPort
// file /usr/include/upnp/upnp.h line 990
unsigned short int UpnpGetServerPort(void);
// UpnpInit
// file /usr/include/upnp/upnp.h line 907
signed int UpnpInit(const char *, unsigned short int);
// UpnpMakeAction
// file /usr/include/upnp/upnptools.h line 137
struct _IXML_Document * UpnpMakeAction(const char *, const char *, signed int, const char *, ...);
// UpnpOpenHttpGetEx
// file /usr/include/upnp/upnp.h line 2414
signed int UpnpOpenHttpGetEx(const char *, void **, char **, signed int *, signed int *, signed int, signed int, signed int);
// UpnpReadHttpGet
// file /usr/include/upnp/upnp.h line 2451
signed int UpnpReadHttpGet(void *, char *, unsigned long int *, signed int);
// UpnpRegisterClient
// file /usr/include/upnp/upnp.h line 1339
signed int UpnpRegisterClient(signed int (*)(enum Upnp_EventType_e, void *, void *), const void *, signed int *);
// UpnpResolveURL
// file /usr/include/upnp/upnptools.h line 91
signed int UpnpResolveURL(const char *, const char *, char *);
// UpnpSearchAsync
// file /usr/include/upnp/upnp.h line 1440
signed int UpnpSearchAsync(signed int, signed int, const char *, const void *);
// UpnpSendAction
// file /usr/include/upnp/upnp.h line 1611
signed int UpnpSendAction(signed int, const char *, const char *, const char *, struct _IXML_Document *, struct _IXML_Document **);
// UpnpSendActionAsync
// file /usr/include/upnp/upnp.h line 1688
signed int UpnpSendActionAsync(signed int, const char *, const char *, const char *, struct _IXML_Document *, signed int (*)(enum Upnp_EventType_e, void *, void *), const void *);
// UpnpSetMaxContentLength
// file /usr/include/upnp/upnp.h line 1396
signed int UpnpSetMaxContentLength(unsigned long int);
// UpnpSubscribe
// file /usr/include/upnp/upnp.h line 2077
signed int UpnpSubscribe(signed int, const char *, signed int *, char *);
// UpnpUnRegisterClient
// file /usr/include/upnp/upnp.h line 1363
signed int UpnpUnRegisterClient(signed int);
// UpnpUnSubscribe
// file /usr/include/upnp/upnp.h line 2179
signed int UpnpUnSubscribe(signed int, char *);
// UpnpUtil_GetEventString
// file upnp_util.h line 49
char * UpnpUtil_GetEventString(void *talloc_context, enum Upnp_EventType_e eventType, const void *event);
// UpnpUtil_GetEventTypeString
// file upnp_util.c line 43
const char * UpnpUtil_GetEventTypeString(enum Upnp_EventType_e e);
// UpnpUtil_ResolveURL
// file upnp_util.h line 74
char * UpnpUtil_ResolveURL(void *talloc_context, const char *base, const char *rel);
// VFS_Browse
// file vfs.c line 282
signed int VFS_Browse(struct _VFS * const self, const struct _VFS_Query *q);
// VFS_Browse::$tmp::tmp_if_expr$4$object
// 
struct _VFS_BrowseStatus tmp_if_expr$4$object(struct _VFS *, const char *, const struct _VFS_Query *, void *);
// VFS_Browse::$tmp::tmp_if_expr$6$object
// 
struct _VFS_BrowseStatus tmp_if_expr$6$object(struct _VFS *, const char *, const struct _VFS_Query *, void *);
// VFS_Browse::1::2::1::1::2::1::2::func$object
// 
struct _VFS_BrowseStatus func$object(struct _VFS *, const char *, const struct _VFS_Query *, void *);
// VFS_Create
// file vfs.c line 361
struct _VFS * VFS_Create(void *talloc_context, _Bool show_debug_dir);
// VerifyTimeouts
// file device_list.c line 892
static void VerifyTimeouts(signed int incr);
// XMLUtil_FindFirstElement
// file xml_util.h line 108
struct _IXML_Element * XMLUtil_FindFirstElement(const struct _IXML_Node * const node, const char * const tagname, const _Bool deep, const _Bool log_error);
// XMLUtil_FindFirstElementValue
// file xml_util.h line 131
const char * XMLUtil_FindFirstElementValue(const struct _IXML_Node * const node, const char * const tagname, const _Bool deep, const _Bool log_error);
// XMLUtil_GetDocumentString
// file xml_util.h line 141
char * XMLUtil_GetDocumentString(void *context, const struct _IXML_Document *doc);
// XMLUtil_GetElementValue
// file xml_util.h line 88
const char * XMLUtil_GetElementValue(const struct _IXML_Element *element);
// XMLUtil_GetNodeString
// file xml_util.h line 149
char * XMLUtil_GetNodeString(void *context, const struct _IXML_Node *node);
// _Cache_PurgeExpiredEntries
// file cache.c line 309
void _Cache_PurgeExpiredEntries(struct _Cache *cache);
// _ContentDir_GetBaseClass
// file content_dir.c line 582
extern const struct _Object_Class * _ContentDir_GetBaseClass();
// _ContentDir_GetClass
// file content_dir.c line 582
extern const struct _ContentDir_Class * _ContentDir_GetClass();
// _DJFS_GetBaseClass
// file djfs.c line 547
extern const struct _Object_Class * _DJFS_GetBaseClass();
// _DJFS_GetClass
// file djfs.c line 547
extern const struct _DJFS_Class * _DJFS_GetClass();
// _DeviceList_LockDevice
// file device_list.c line 686
struct _Device * _DeviceList_LockDevice(const char *deviceName);
// _DeviceList_LockService
// file device_list.c line 720
struct _Service * _DeviceList_LockService(const char *deviceName, const char *serviceType);
// _DeviceList_UnlockDevice
// file device_list.c line 709
inline void _DeviceList_UnlockDevice(struct _Device *dev);
// _DeviceList_UnlockService
// file device_list.c line 745
inline void _DeviceList_UnlockService(struct _Service *serv);
// _ObjectClass_Lock
// file object.c line 90
signed int _ObjectClass_Lock();
// _ObjectClass_Unlock
// file object.c line 108
inline signed int _ObjectClass_Unlock();
// _Object_GetBaseClass
// file object.c line 174
extern const struct _Object_Class * _Object_GetBaseClass();
// _Object_GetClass
// file object.c line 153
extern const struct _Object_Class * _Object_GetClass();
// _Object_IsA
// file object.c line 118
extern _Bool _Object_IsA(const void * const objptr, const struct _Object_Class *searched_class);
// _Object_check_alloc
// file object.c line 188
struct _Object * _Object_check_alloc(void *talloc_context, const struct _Object_Class *isa);
// _Object_check_alloc::1::4::_talloc_destructor_fn$object
// 
signed int _talloc_destructor_fn$object(struct _Object *);
// _Service_GetBaseClass
// file service.c line 575
extern const struct _Object_Class * _Service_GetBaseClass();
// _Service_GetClass
// file service.c line 575
extern const struct _Service_Class * _Service_GetClass();
// _String_ToInteger
// file string_util.h line 94
signed long int _String_ToInteger(const char *s, signed long int error_value);
// _VFS_GetBaseClass
// file vfs.c line 354
extern const struct _Object_Class * _VFS_GetBaseClass();
// _VFS_GetClass
// file vfs.c line 354
extern const struct _VFS_Class * _VFS_GetClass();
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// _talloc_free
// file /usr/include/talloc.h line 229
signed int _talloc_free(void *, const char *);
// _talloc_realloc
// file /usr/include/talloc.h line 1295
void * _talloc_realloc(const void *, void *, unsigned long int, const char *);
// _talloc_realloc_array
// file /usr/include/talloc.h line 1274
void * _talloc_realloc_array(const void *, void *, unsigned long int, unsigned int, const char *);
// _talloc_set_destructor
// file /usr/include/talloc.h line 359
void _talloc_set_destructor(const void *, signed int (*)(void *));
// _talloc_steal_loc
// file /usr/include/talloc.h line 360
void * _talloc_steal_loc(const void *, const void *, const char *);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// allocate_entry
// file hash.c line 705
static struct hash_entry * allocate_entry(struct hash_table *table);
// cache_comparator
// file cache.c line 125
static _Bool cache_comparator(const void *e1, const void *e2);
// cache_destroy
// file cache.c line 369
static signed int cache_destroy(struct _Cache * const cache);
// cache_expire_entries
// file cache.c line 193
static void cache_expire_entries(struct _Cache *cache, const signed long int now);
// cache_free_expired_data
// file content_dir.c line 341
static void cache_free_expired_data(const char *key, void *data);
// cache_get
// file cache.c line 140
static struct _Entry * cache_get(struct _Cache *cache, const char *key, _Bool *hit);
// cache_hasher
// file cache.c line 111
static unsigned long int cache_hasher(const void *entry, unsigned long int table_size);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// check_tuning
// file hash.c line 484
static _Bool check_tuning(struct hash_table *table);
// convert
// file charset.c line 239
static signed int convert(struct _Converter * const cvt, const char ** const inbuf, unsigned long int * const inbytesleft, char ** const outbuf, unsigned long int * const outbytesleft);
// ctime
// file /usr/include/time.h line 264
extern char * ctime(const signed long int *);
// destroy
// file object.c line 61
static signed int destroy(struct _Object * const obj);
// destroy$link1
// file device.c line 161
static signed int destroy$link1(struct _Device * const dev);
// error
// file error.h line 43
extern void error(signed int, signed int, const char *, ...);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// fileno
// file /usr/include/stdio.h line 858
extern signed int fileno(struct _IO_FILE *);
// finalize
// file service.c line 127
static void finalize(struct _Object *obj);
// finalize$link1
// file content_dir.c line 551
static void finalize$link1(struct _Object *obj$link1);
// finalize$link2
// file djfs.c line 521
static void finalize$link2(struct _Object *obj$link2);
// findDeviceNode
// file device.c line 113
static const struct _IXML_Node * findDeviceNode(const char * const deviceId, struct _IXML_Document * const descDoc);
// findFirstElementRecursive
// file xml_util.c line 65
static struct _IXML_Element * findFirstElementRecursive(const struct _IXML_Node * const node, const char * const tagname, const _Bool deep);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fputs
// file /usr/include/stdio.h line 689
extern signed int fputs(const char *, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_entry
// file hash.c line 730
static void free_entry(struct hash_table *table, struct hash_entry *entry);
// fuse_dirfil_for_ls
// file test_upnp.c line 191
static signed int fuse_dirfil_for_ls(struct fuse_dirhandle *h, const char *name, signed int type, unsigned long int ino);
// fwrite
// file /usr/include/stdio.h line 715
extern unsigned long int fwrite(const void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// gPrintFun$object
// 
void gPrintFun$object(enum Log_Level, const char *);
// gStateUpdateFun$object
// 
void gStateUpdateFun$object(enum DeviceList_EventType, const char *);
// get_status_string
// file service.c line 476
static char * get_status_string(const struct _Service *serv, void *result_context, _Bool debug, const char *spacer);
// get_status_string$link1
// file content_dir.c line 514
static char * get_status_string$link1(const struct _Service *serv$link1, void *result_context$link1, _Bool debug$link1, const char *spacer$link1);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// hash_clear
// file hash.c line 605
void hash_clear(struct hash_table *table);
// hash_delete
// file ../gl/hash.h line 86
void * hash_delete(struct hash_table *table, const void *entry);
// hash_do_for_each
// file hash.c line 358
unsigned long int hash_do_for_each(const struct hash_table *table, _Bool (*processor)(void *, void *), void *processor_data);
// hash_do_for_each::processor$object
// 
_Bool processor$object(void *, void *);
// hash_find_entry
// file hash.c line 744
static void * hash_find_entry(struct hash_table *table, const void *entry, struct hash_entry **bucket_head, _Bool delete);
// hash_free
// file ../gl/hash.h line 81
void hash_free(struct hash_table *table);
// hash_get_entries
// file ../gl/hash.h line 71
unsigned long int hash_get_entries(const struct hash_table *table, void **buffer, unsigned long int buffer_size);
// hash_get_first
// file hash.c line 279
void * hash_get_first(const struct hash_table *table);
// hash_get_max_bucket_length
// file hash.c line 174
unsigned long int hash_get_max_bucket_length(const struct hash_table *table);
// hash_get_n_buckets
// file hash.c line 150
unsigned long int hash_get_n_buckets(const struct hash_table *table);
// hash_get_n_buckets_used
// file hash.c line 158
unsigned long int hash_get_n_buckets_used(const struct hash_table *table);
// hash_get_n_entries
// file ../gl/hash.h line 62
unsigned long int hash_get_n_entries(const struct hash_table *table);
// hash_get_next
// file hash.c line 298
void * hash_get_next(const struct hash_table *table, const void *entry);
// hash_initialize
// file ../gl/hash.h line 77
struct hash_table * hash_initialize(unsigned long int candidate, const struct hash_tuning *tuning, unsigned long int (*hasher)(const void *, unsigned long int), _Bool (*comparator)(const void *, const void *), void (*data_freer)(void *));
// hash_initialize::comparator$object
// 
_Bool comparator$object(const void *, const void *);
// hash_initialize::data_freer$object
// 
void data_freer$object(void *);
// hash_initialize::hasher$object
// 
unsigned long int hasher$object(const void *, unsigned long int);
// hash_insert
// file ../gl/hash.h line 85
void * hash_insert(struct hash_table *table, const void *entry);
// hash_lookup
// file ../gl/hash.h line 66
void * hash_lookup(const struct hash_table *table, const void *entry);
// hash_print_statistics
// file hash.c line 230
void hash_print_statistics(const struct hash_table *table, struct _IO_FILE *stream);
// hash_rehash
// file hash.c line 819
_Bool hash_rehash(struct hash_table *table, unsigned long int candidate);
// hash_reset_tuning
// file hash.c line 472
void hash_reset_tuning(struct hash_tuning *tuning);
// hash_string
// file hash.c line 421
unsigned long int hash_string(const char *string, unsigned long int n_buckets);
// hash_table_ok
// file hash.c line 201
_Bool hash_table_ok(const struct hash_table *table);
// iconv
// file /usr/include/iconv.h line 42
extern unsigned long int iconv(void *, char ** restrict , unsigned long int *, char ** restrict , unsigned long int *);
// iconv_close
// file /usr/include/iconv.h line 51
extern signed int iconv_close(void *);
// iconv_open
// file /usr/include/iconv.h line 37
extern void * iconv_open(const char *, const char *);
// init_class
// file service.c line 568
static void init_class(struct _Service_Class * const isa);
// init_class$link1
// file content_dir.c line 570
static void init_class$link1(struct _ContentDir_Class * const isa$link1);
// init_class$link2
// file vfs.c line 348
static void init_class$link2(struct _VFS_Class * const isa$link2);
// init_class$link3
// file djfs.c line 540
static void init_class$link3(struct _DJFS_Class * const isa$link3);
// int_to_string
// file content_dir.c line 109
static const char * int_to_string(void *result_context, signed long int val);
// is_browse
// file content_dir.c line 73
static inline _Bool is_browse(const char * const criteria);
// is_prime
// file hash.c line 437
static _Bool is_prime(unsigned long int candidate);
// isatty
// file /usr/include/unistd.h line 779
extern signed int isatty(signed int);
// ixmlDocument_free
// file /usr/include/upnp/ixml.h line 1047
void ixmlDocument_free(struct _IXML_Document *);
// ixmlDocument_getElementsByTagName
// file /usr/include/upnp/ixml.h line 908
struct _IXML_NodeList * ixmlDocument_getElementsByTagName(struct _IXML_Document *, const char *);
// ixmlDocumenttoString
// file /usr/include/upnp/ixml.h line 1702
char * ixmlDocumenttoString(struct _IXML_Document *);
// ixmlElement_free
// file /usr/include/upnp/ixml.h line 1427
void ixmlElement_free(struct _IXML_Element *);
// ixmlElement_getAttribute
// file /usr/include/upnp/ixml.h line 1136
const char * ixmlElement_getAttribute(struct _IXML_Element *, const char *);
// ixmlElement_getElementsByTagName
// file /usr/include/upnp/ixml.h line 1252
struct _IXML_NodeList * ixmlElement_getElementsByTagName(struct _IXML_Element *, const char *);
// ixmlElement_getTagName
// file /usr/include/upnp/ixml.h line 1125
const char * ixmlElement_getTagName(struct _IXML_Element *);
// ixmlFreeDOMString
// file /usr/include/upnp/ixml.h line 1818
void ixmlFreeDOMString(char *);
// ixmlNodeList_free
// file /usr/include/upnp/ixml.h line 1614
void ixmlNodeList_free(struct _IXML_NodeList *);
// ixmlNodeList_item
// file /usr/include/upnp/ixml.h line 1591
struct _IXML_Node * ixmlNodeList_item(struct _IXML_NodeList *, unsigned long int);
// ixmlNodeList_length
// file /usr/include/upnp/ixml.h line 1603
unsigned long int ixmlNodeList_length(struct _IXML_NodeList *);
// ixmlNode_getFirstChild
// file /usr/include/upnp/ixml.h line 357
struct _IXML_Node * ixmlNode_getFirstChild(struct _IXML_Node *);
// ixmlNode_getNextSibling
// file /usr/include/upnp/ixml.h line 390
struct _IXML_Node * ixmlNode_getNextSibling(struct _IXML_Node *);
// ixmlNode_getNodeName
// file /usr/include/upnp/ixml.h line 279
const char * ixmlNode_getNodeName(struct _IXML_Node *);
// ixmlNode_getNodeType
// file /usr/include/upnp/ixml.h line 321
unsigned short int ixmlNode_getNodeType(struct _IXML_Node *);
// ixmlNode_getNodeValue
// file /usr/include/upnp/ixml.h line 292
const char * ixmlNode_getNodeValue(struct _IXML_Node *);
// ixmlNode_getParentNode
// file /usr/include/upnp/ixml.h line 332
struct _IXML_Node * ixmlNode_getParentNode(struct _IXML_Node *);
// ixmlNode_removeChild
// file /usr/include/upnp/ixml.h line 550
signed int ixmlNode_removeChild(struct _IXML_Node *, struct _IXML_Node *, struct _IXML_Node **);
// ixmlParseBuffer
// file /usr/include/upnp/ixml.h line 1746
struct _IXML_Document * ixmlParseBuffer(const char *);
// ixmlParseBufferEx
// file /usr/include/upnp/ixml.h line 1765
signed int ixmlParseBufferEx(const char *, struct _IXML_Document **);
// ixmlPrintDocument
// file /usr/include/upnp/ixml.h line 1656
char * ixmlPrintDocument(struct _IXML_Document *);
// ixmlPrintNode
// file /usr/include/upnp/ixml.h line 1678
char * ixmlPrintNode(struct _IXML_Node *);
// ixmlRelaxParser
// file /usr/include/upnp/ixml.h line 1729
void ixmlRelaxParser(char);
// make_device_name
// file device_list.c line 189
static char * make_device_name(void *talloc_context, const char *base);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memmove
// file /usr/include/string.h line 50
extern void * memmove(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// next_prime
// file hash.c line 456
static unsigned long int next_prime(unsigned long int candidate);
// nl_langinfo
// file /usr/include/langinfo.h line 583
extern char * nl_langinfo(signed int);
// open_memstream
// file /usr/include/stdio.h line 325
extern struct _IO_FILE * open_memstream(char **, unsigned long int *);
// print_commands
// file test_upnp.c line 170
static void print_commands();
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// process_command
// file test_upnp.c line 200
static signed int process_command(const char *cmdline);
// pthread_cancel
// file /usr/include/pthread.h line 515
extern signed int pthread_cancel(unsigned long int);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous$3 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$3 *, const union anonymous$5 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$3 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$3 *);
// pthread_mutexattr_destroy
// file /usr/include/pthread.h line 812
extern signed int pthread_mutexattr_destroy(union anonymous$5 *);
// pthread_mutexattr_init
// file /usr/include/pthread.h line 808
extern signed int pthread_mutexattr_init(union anonymous$5 *);
// pthread_mutexattr_setkind_np
// file /usr/include/upnp/ithread.h line 938
signed int pthread_mutexattr_setkind_np(union anonymous$5 *, signed int);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// setlocale
// file /usr/include/locale.h line 124
extern char * setlocale(signed int, const char *);
// sigaddset
// file /usr/include/signal.h line 221
extern signed int sigaddset(struct anonymous$10 *, signed int);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous$10 *);
// sigwait
// file /usr/include/signal.h line 270
extern signed int sigwait(const struct anonymous$10 *, signed int *);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// stdout_print
// file test_upnp.c line 135
static void stdout_print(enum Log_Level level, const char * const msg);
// strcasecmp
// file /usr/include/string.h line 533
extern signed int strcasecmp(const char *, const char *);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strcspn
// file /usr/include/string.h line 284
extern unsigned long int strcspn(const char *, const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strlen
// file upnp_util.c line 283 function UpnpUtil_ResolveURL
unsigned long int strlen(const char *);
// strncasecmp
// file /usr/include/string.h line 537
extern signed int strncasecmp(const char *, const char *, unsigned long int);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// strtoimax
// file /usr/include/inttypes.h line 297
extern signed long int strtoimax(const char *, char ** restrict , signed int);
// talloc_asprintf
// file /usr/include/talloc.h line 1579
char * talloc_asprintf(const void *, const char *, ...);
// talloc_asprintf_append
// file /usr/include/talloc.h line 1605
char * talloc_asprintf_append(char *, const char *, ...);
// talloc_enable_leak_report
// file /usr/include/talloc.h line 1814
void talloc_enable_leak_report(void);
// talloc_get_name
// file /usr/include/talloc.h line 612
const char * talloc_get_name(const void *);
// talloc_increase_ref_count
// file /usr/include/talloc.h line 931
signed int talloc_increase_ref_count(const void *);
// talloc_named_const
// file /usr/include/talloc.h line 483
void * talloc_named_const(const void *, unsigned long int, const char *);
// talloc_report
// file /usr/include/talloc.h line 1761
void talloc_report(const void *, struct _IO_FILE *);
// talloc_report_full
// file /usr/include/talloc.h line 1733
void talloc_report_full(const void *, struct _IO_FILE *);
// talloc_set_name
// file /usr/include/talloc.h line 393
const char * talloc_set_name(const void *, const char *, ...);
// talloc_set_name_const
// file /usr/include/talloc.h line 437
void talloc_set_name_const(const void *, const char *);
// talloc_strdup
// file /usr/include/talloc.h line 1350
char * talloc_strdup(const void *, const char *);
// talloc_total_blocks
// file /usr/include/talloc.h line 677
unsigned long int talloc_total_blocks(const void *);
// talloc_total_size
// file /usr/include/talloc.h line 660
unsigned long int talloc_total_size(const void *);
// talloc_vasprintf_append
// file /usr/include/talloc.h line 1541
char * talloc_vasprintf_append(char *, const char *, void **);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// tolower
// file /usr/include/ctype.h line 124
extern signed int tolower(signed int);
// tpr
// file talloc_util.h line 57
_Bool tpr(char **s, const char *fmt, ...);
// uname
// file /usr/include/x86_64-linux-gnu/sys/utsname.h line 81
extern signed int uname(struct utsname *);
// vfs_dir_add_entry
// file vfs_p.h line 107
static inline signed int vfs_dir_add_entry(const char * const name, const signed int d_type, const struct _VFS_Query * const q);
// vfs_dir_add_entry$link1
// file vfs_p.h line 107
static inline signed int vfs_dir_add_entry$link1(const char * const name$link1, const signed int d_type$link1, const struct _VFS_Query * const q$link1);
// vfs_dir_begin
// file vfs.c line 77
extern signed int vfs_dir_begin(const struct _VFS_Query * const q);
// vfs_file_begin
// file vfs.c line 106
extern signed int vfs_file_begin(const signed int d_type, const struct _VFS_Query * const q);
// vfs_file_set_string
// file vfs.c line 147
extern void vfs_file_set_string(const char * const str, enum _FileBuffer_StringAlloc alloc, const char * const location, const struct _VFS_Query * const q);
// vfs_file_set_url
// file vfs.c line 170
extern void vfs_file_set_url(const char * const url, signed long int size, const char * const location, const struct _VFS_Query * const q);
// vfs_match_start_of_path
// file vfs.c line 57
const char * vfs_match_start_of_path(const char *path, const char *name);
// vfs_set_time
// file vfs.c line 213
extern void vfs_set_time(const signed long int t, const struct _VFS_Query * const q);
// vfs_symlink_set_path
// file vfs.c line 195
extern void vfs_symlink_set_path(const char * const p, const struct _VFS_Query * const q);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);
// x2nrealloc
// file xmalloc.c line 181
void * x2nrealloc(void *p, unsigned long int *pn, unsigned long int s);
// x2nrealloc_inline
// file xmalloc.c line 151
static inline void * x2nrealloc_inline(void *p, unsigned long int *pn, unsigned long int s);
// x2realloc
// file xmalloc.c line 193
void * x2realloc(void *p, unsigned long int *pn);
// xalloc_die
// file xalloc-die.c line 36
extern void xalloc_die(void);
// xcalloc
// file xmalloc.c line 212
void * xcalloc(unsigned long int n, unsigned long int s);
// xmalloc
// file xmalloc.c line 63
void * xmalloc(unsigned long int n);
// xmemdup
// file xmalloc.c line 230
void * xmemdup(const void *p, unsigned long int s);
// xnmalloc
// file xmalloc.c line 55
void * xnmalloc(unsigned long int n, unsigned long int s);
// xnmalloc_inline
// file xmalloc.c line 46
static inline void * xnmalloc_inline(unsigned long int n, unsigned long int s);
// xnrealloc
// file xmalloc.c line 80
void * xnrealloc(void *p, unsigned long int n, unsigned long int s);
// xnrealloc_inline
// file xmalloc.c line 72
static inline void * xnrealloc_inline(void *p, unsigned long int n, unsigned long int s);
// xrealloc
// file xmalloc.c line 89
void * xrealloc(void *p, unsigned long int n);
// xstrdup
// file xmalloc.c line 238
char * xstrdup(const char *string);
// xzalloc
// file xmalloc.c line 203
void * xzalloc(unsigned long int s);

struct anonymous$10
{
  // __val
  unsigned long int __val[16l];
};

union anonymous$8
{
  // baseclass
  const struct _Object_Class *baseclass;
  // isa
  const struct _Object_Class *isa;
};

struct _Object
{
  // _
  union anonymous$8 _;
};

union anonymous$12
{
  // baseclass
  struct _Object_Class *baseclass;
  // isa
  struct _Service_Class *isa;
  // super
  struct _Object super;
};

struct LISTNODE
{
  // prev
  struct LISTNODE *prev;
  // next
  struct LISTNODE *next;
  // item
  void *item;
};

struct FREELIST
{
  // head
  struct FREELISTNODE *head;
  // element_size
  unsigned long int element_size;
  // maxFreeListLength
  signed int maxFreeListLength;
  // freeListLength
  signed int freeListLength;
};

struct LINKEDLIST
{
  // head
  struct LISTNODE head;
  // tail
  struct LISTNODE tail;
  // size
  signed long int size;
  // freeNodeList
  struct FREELIST freeNodeList;
  // free_func
  void (*free_func)(void *);
  // cmp_func
  signed int (*cmp_func)(void *, void *);
};

struct _Service
{
  // _
  union anonymous$12 _;
  // serviceId
  char *serviceId;
  // serviceType
  char *serviceType;
  // eventURL
  char *eventURL;
  // controlURL
  char *controlURL;
  // sid
  char *sid;
  // variables
  struct LINKEDLIST variables;
  // ctrlpt_handle
  signed int ctrlpt_handle;
  // la_name
  char *la_name;
  // la_result
  signed int la_result;
  // la_error_code
  char *la_error_code;
  // la_error_desc
  char *la_error_desc;
};

union anonymous
{
  // baseclass
  struct _Object_Class *baseclass;
  // isa
  struct _ContentDir_Class *isa;
  // super
  struct _Service super;
};

union anonymous$4
{
  // baseclass
  struct _Object_Class *baseclass;
  // isa
  struct _VFS_Class *isa;
  // super
  struct _Object super;
};

struct _VFS
{
  // _
  union anonymous$4 _;
  // show_debug_dir
  _Bool show_debug_dir;
};

union anonymous$2
{
  // baseclass
  struct _Object_Class *baseclass;
  // isa
  struct _DJFS_Class *isa;
  // super
  struct _VFS super;
};

union anonymous$5
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

struct _Object_Class
{
  // magic
  unsigned int magic;
  // name
  const char *name;
  // super
  struct _Object_Class *super;
  // size
  unsigned long int size;
  // initializer
  const void *initializer;
  // finalize
  void (*finalize)(struct _Object *);
};

union anonymous$11
{
  // base
  struct _Object_Class base;
  // super
  struct _Object_Class super;
};

struct _Service_Class
{
  // _
  union anonymous$11 _;
  // update_variable
  void (*update_variable)(struct _Service *, const char *, const char *);
  // get_status_string
  char * (*get_status_string)(const struct _Service *, void *, _Bool, const char *);
};

union anonymous$0
{
  // base
  struct _Object_Class base;
  // super
  struct _Service_Class super;
};

struct _VFS_Class
{
  // _
  union anonymous$11 _;
  // browse_root
  struct _VFS_BrowseStatus (*browse_root)(struct _VFS *, const char *, const struct _VFS_Query *, void *);
  // browse_debug
  struct _VFS_BrowseStatus (*browse_debug)(struct _VFS *, const char *, const struct _VFS_Query *, void *);
};

union anonymous$1
{
  // base
  struct _Object_Class base;
  // super
  struct _VFS_Class super;
};

struct __pthread_internal_list
{
  // __prev
  struct __pthread_internal_list *__prev;
  // __next
  struct __pthread_internal_list *__next;
};

struct __pthread_mutex_s
{
  // __lock
  signed int __lock;
  // __count
  unsigned int __count;
  // __owner
  signed int __owner;
  // __nusers
  unsigned int __nusers;
  // __kind
  signed int __kind;
  // __spins
  signed short int __spins;
  // __elision
  signed short int __elision;
  // __list
  struct __pthread_internal_list __list;
};

union anonymous$3
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct CommandStruct
{
  // str
  const char *str;
  // cmdnum
  enum CommandType cmdnum;
  // numargs
  signed int numargs;
  // args
  const char *args;
};

struct FREELISTNODE
{
  // next
  struct FREELISTNODE *next;
};

struct Upnp_Action_Complete
{
  // ErrCode
  signed int ErrCode;
  // CtrlUrl
  struct s_UpnpString *CtrlUrl;
  // ActionRequest
  struct _IXML_Document *ActionRequest;
  // ActionResult
  struct _IXML_Document *ActionResult;
};

struct sockaddr_storage
{
  // ss_family
  unsigned short int ss_family;
  // __ss_align
  unsigned long int __ss_align;
  // __ss_padding
  char __ss_padding[112l];
};

struct Upnp_Action_Request
{
  // ErrCode
  signed int ErrCode;
  // Socket
  signed int Socket;
  // ErrStr
  char ErrStr[180l];
  // ActionName
  char ActionName[256l];
  // DevUDN
  char DevUDN[256l];
  // ServiceID
  char ServiceID[256l];
  // ActionRequest
  struct _IXML_Document *ActionRequest;
  // ActionResult
  struct _IXML_Document *ActionResult;
  // CtrlPtIPAddr
  struct sockaddr_storage CtrlPtIPAddr;
  // SoapHeader
  struct _IXML_Document *SoapHeader;
};

struct Upnp_Discovery
{
  // ErrCode
  signed int ErrCode;
  // Expires
  signed int Expires;
  // DeviceId
  char DeviceId[180l];
  // DeviceType
  char DeviceType[180l];
  // ServiceType
  char ServiceType[180l];
  // ServiceVer
  char ServiceVer[180l];
  // Location
  char Location[180l];
  // Os
  char Os[180l];
  // Date
  char Date[180l];
  // Ext
  char Ext[180l];
  // DestAddr
  struct sockaddr_storage DestAddr;
};

struct Upnp_Event
{
  // Sid
  char Sid[44l];
  // EventKey
  signed int EventKey;
  // ChangedVariables
  struct _IXML_Document *ChangedVariables;
};

struct Upnp_Event_Subscribe
{
  // Sid
  char Sid[44l];
  // ErrCode
  signed int ErrCode;
  // PublisherUrl
  struct s_UpnpString *PublisherUrl;
  // TimeOut
  signed int TimeOut;
};

struct Upnp_State_Var_Complete
{
  // ErrCode
  signed int ErrCode;
  // CtrlUrl
  struct s_UpnpString *CtrlUrl;
  // StateVarName
  char StateVarName[256l];
  // CurrentVal
  char *CurrentVal;
};

struct Upnp_State_Var_Request
{
  // ErrCode
  signed int ErrCode;
  // Socket
  signed int Socket;
  // ErrStr
  char ErrStr[180l];
  // DevUDN
  char DevUDN[256l];
  // ServiceID
  char ServiceID[256l];
  // StateVarName
  char StateVarName[256l];
  // CtrlPtIPAddr
  struct sockaddr_storage CtrlPtIPAddr;
  // CurrentVal
  char *CurrentVal;
};

struct Upnp_Subscription_Request
{
  // ServiceId
  char *ServiceId;
  // UDN
  char *UDN;
  // Sid
  char Sid[44l];
};

struct _Cache
{
  // size
  unsigned long int size;
  // max_age
  signed long int max_age;
  // next_clean
  signed long int next_clean;
  // table
  struct hash_table *table;
  // free_expired_data
  void (*free_expired_data)(const char *, void *);
  // nr_access
  signed int nr_access;
  // nr_hit
  signed int nr_hit;
  // nr_expired
  signed int nr_expired;
};

struct _ContentDir
{
  // _
  union anonymous _;
  // search_caps
  const char *search_caps;
  // cache
  struct _Cache *cache;
  // cache_mutex
  union anonymous$3 cache_mutex;
};

struct _ContentDir_BrowseResult
{
  // cds
  struct _ContentDir *cds;
  // children
  struct _ContentDir_Children *children;
};

struct _ContentDir_Children
{
  // objects
  struct _PtrArray *objects;
};

struct _ContentDir_Class
{
  // _
  union anonymous$0 _;
};

struct _Converter
{
  // cd
  void *cd;
  // mutex
  union anonymous$3 mutex;
  // to_utf8
  const _Bool to_utf8;
};

struct _DIDLObject
{
  // is_container
  _Bool is_container;
  // id
  char *id;
  // title
  const char *title;
  // cds_class
  char *cds_class;
  // searchable
  _Bool searchable;
  // element
  struct _IXML_Element *element;
  // basename
  char *basename;
};

struct _DJFS
{
  // _
  union anonymous$2 _;
  // flags
  enum _DJFS_Flags flags;
  // search_hist_size
  unsigned long int search_hist_size;
  // search_hist_serial
  unsigned int search_hist_serial;
  // search_hist
  struct _PtrArray *search_hist;
  // search_hist_mutex
  union anonymous$3 search_hist_mutex;
};

struct _DJFS_Class
{
  // _
  union anonymous$1 _;
};

struct _Device
{
  // creation_time
  signed long int creation_time;
  // descDoc
  struct _IXML_Document *descDoc;
  // descDocURL
  const char *descDocURL;
  // descDocText
  const char *descDocText;
  // baseURL
  const char *baseURL;
  // descDocNode
  const struct _IXML_Node *descDocNode;
  // udn
  const char *udn;
  // deviceType
  const char *deviceType;
  // friendlyName
  const char *friendlyName;
  // presURL
  const char *presURL;
  // services
  struct LINKEDLIST services;
};

struct _DeviceNode
{
  // deviceId
  char *deviceId;
  // d
  struct _Device *d;
  // expires
  signed int expires;
};

struct _Entry
{
  // key
  const char *key;
  // rip
  signed long int rip;
  // data
  void *data;
};

struct _FileBuffer
{
  // exact_read
  _Bool exact_read;
  // file_size
  signed long int file_size;
  // url
  const char *url;
  // content
  const char *content;
};

struct _IO_FILE
{
  // _flags
  signed int _flags;
  // _IO_read_ptr
  char *_IO_read_ptr;
  // _IO_read_end
  char *_IO_read_end;
  // _IO_read_base
  char *_IO_read_base;
  // _IO_write_base
  char *_IO_write_base;
  // _IO_write_ptr
  char *_IO_write_ptr;
  // _IO_write_end
  char *_IO_write_end;
  // _IO_buf_base
  char *_IO_buf_base;
  // _IO_buf_end
  char *_IO_buf_end;
  // _IO_save_base
  char *_IO_save_base;
  // _IO_backup_base
  char *_IO_backup_base;
  // _IO_save_end
  char *_IO_save_end;
  // _markers
  struct _IO_marker *_markers;
  // _chain
  struct _IO_FILE *_chain;
  // _fileno
  signed int _fileno;
  // _flags2
  signed int _flags2;
  // _old_offset
  signed long int _old_offset;
  // _cur_column
  unsigned short int _cur_column;
  // _vtable_offset
  signed char _vtable_offset;
  // _shortbuf
  char _shortbuf[1l];
  // _lock
  void *_lock;
  // _offset
  signed long int _offset;
  // __pad1
  void *__pad1;
  // __pad2
  void *__pad2;
  // __pad3
  void *__pad3;
  // __pad4
  void *__pad4;
  // __pad5
  unsigned long int __pad5;
  // _mode
  signed int _mode;
  // _unused2
  char _unused2[(signed long int)(sizeof(signed int) * 5) /*20l*/ ];
};

struct _IO_marker
{
  // _next
  struct _IO_marker *_next;
  // _sbuf
  struct _IO_FILE *_sbuf;
  // _pos
  signed int _pos;
};

struct _IXML_Node
{
  // nodeName
  char *nodeName;
  // nodeValue
  char *nodeValue;
  // nodeType
  enum anonymous$9 nodeType;
  // namespaceURI
  char *namespaceURI;
  // prefix
  char *prefix;
  // localName
  char *localName;
  // readOnly
  signed int readOnly;
  // parentNode
  struct _IXML_Node *parentNode;
  // firstChild
  struct _IXML_Node *firstChild;
  // prevSibling
  struct _IXML_Node *prevSibling;
  // nextSibling
  struct _IXML_Node *nextSibling;
  // firstAttr
  struct _IXML_Node *firstAttr;
  // ownerDocument
  struct _IXML_Document *ownerDocument;
};

struct _IXML_Document
{
  // n
  struct _IXML_Node n;
};

struct _IXML_Element
{
  // n
  struct _IXML_Node n;
  // tagName
  char *tagName;
};

struct _IXML_NodeList
{
  // nodeItem
  struct _IXML_Node *nodeItem;
  // next
  struct _IXML_NodeList *next;
};

struct _MediaFile
{
  // o
  const struct _DIDLObject *o;
  // extension
  char extension[10l];
  // playlist
  const char *playlist;
  // uri
  const char *uri;
  // res
  struct _IXML_Element *res;
};

struct _MimeType
{
  // mimetype
  const char *mimetype;
  // playlist
  const char *playlist;
  // extension
  const char *extension;
};

struct _PtrArray
{
  // _array
  void **_array;
  // _capacity
  unsigned long int _capacity;
  // _size
  unsigned long int _size;
};

struct _PtrArray_Iterator
{
  // _array
  const struct _PtrArray *_array;
  // _index
  signed long int _index;
};

struct _SearchHistory
{
  // serial
  unsigned int serial;
  // time
  signed long int time;
  // parent_path
  const char *parent_path;
  // basename
  const char *basename;
  // criteria
  const char *criteria;
};

struct _StringPair
{
  // name
  char *name;
  // value
  char *value;
};

struct _StringStream
{
  // file
  struct _IO_FILE *file;
  // ptr
  char *ptr;
  // size
  unsigned long int size;
};

struct _VFS_BrowseStatus
{
  // rc
  signed int rc;
  // ptr
  const char *ptr;
};

struct _VFS_Query
{
  // path
  const char *path;
  // stbuf
  struct stat *stbuf;
  // h
  void *h;
  // filler
  signed int (*filler)(struct fuse_dirhandle *, const char *, signed int, unsigned long int);
  // talloc_context
  void *talloc_context;
  // file
  struct _FileBuffer **file;
  // lnk_buf
  char *lnk_buf;
  // lnk_bufsiz
  unsigned long int lnk_bufsiz;
};

struct hash_entry
{
  // data
  void *data;
  // next
  struct hash_entry *next;
};

struct hash_table
{
  // bucket
  struct hash_entry *bucket;
  // bucket_limit
  struct hash_entry *bucket_limit;
  // n_buckets
  unsigned long int n_buckets;
  // n_buckets_used
  unsigned long int n_buckets_used;
  // n_entries
  unsigned long int n_entries;
  // tuning
  const struct hash_tuning *tuning;
  // hasher
  unsigned long int (*hasher)(const void *, unsigned long int);
  // comparator
  _Bool (*comparator)(const void *, const void *);
  // data_freer
  void (*data_freer)(void *);
  // free_entry_list
  struct hash_entry *free_entry_list;
};

struct hash_tuning
{
  // shrink_threshold
  float shrink_threshold;
  // shrink_factor
  float shrink_factor;
  // growth_threshold
  float growth_threshold;
  // growth_factor
  float growth_factor;
  // is_n_buckets
  _Bool is_n_buckets;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct timespec
{
  // tv_sec
  signed long int tv_sec;
  // tv_nsec
  signed long int tv_nsec;
};

struct stat
{
  // st_dev
  unsigned long int st_dev;
  // st_ino
  unsigned long int st_ino;
  // st_nlink
  unsigned long int st_nlink;
  // st_mode
  unsigned int st_mode;
  // st_uid
  unsigned int st_uid;
  // st_gid
  unsigned int st_gid;
  // __pad0
  signed int __pad0;
  // st_rdev
  unsigned long int st_rdev;
  // st_size
  signed long int st_size;
  // st_blksize
  signed long int st_blksize;
  // st_blocks
  signed long int st_blocks;
  // st_atim
  struct timespec st_atim;
  // st_mtim
  struct timespec st_mtim;
  // st_ctim
  struct timespec st_ctim;
  // __glibc_reserved
  signed long int __glibc_reserved[3l];
};

struct utsname
{
  // sysname
  char sysname[65l];
  // nodename
  char nodename[65l];
  // release
  char release[65l];
  // version
  char version[65l];
  // machine
  char machine[65l];
  // domainname
  char domainname[65l];
};


// CACHE_CLEAN_PERIOD
// file cache.c line 49
static const signed long int CACHE_CLEAN_PERIOD = (const signed long int)10;
// CHECK_SUBSCRIPTIONS_TIMEOUT
// file device_list.c line 47
static const unsigned int CHECK_SUBSCRIPTIONS_TIMEOUT = (const unsigned int)30;
// CMDLIST
// file test_upnp.c line 101
static struct CommandStruct CMDLIST[15l] = { { .str="help", .cmdnum=(enum CommandType)0, .numargs=1,
    .args="" }, 
    { .str="loglevel", .cmdnum=(enum CommandType)1, .numargs=2,
    .args="<max log level: 0 (error) to 3 (debug))>" }, 
    { .str="leak", .cmdnum=(enum CommandType)2, .numargs=1,
    .args="" }, 
    { .str="leakfull", .cmdnum=(enum CommandType)3, .numargs=1,
    .args="" }, 
    { .str="listdev", .cmdnum=(enum CommandType)11, .numargs=1,
    .args="" }, 
    { .str="refresh", .cmdnum=(enum CommandType)12, .numargs=1,
    .args="" }, 
    { .str="printdev", .cmdnum=(enum CommandType)10, .numargs=2,
    .args="<devname>" }, 
    { .str="browse", .cmdnum=(enum CommandType)4, .numargs=3,
    .args="<devname> <objectId>" }, 
    { .str="metadata", .cmdnum=(enum CommandType)5, .numargs=3,
    .args="<devname> <objectId>" }, 
    { .str="ls", .cmdnum=(enum CommandType)6, .numargs=2,
    .args="<path>" }, 
    { .str="searchcap", .cmdnum=(enum CommandType)7, .numargs=2,
    .args="<devname>" }, 
    { .str="search", .cmdnum=(enum CommandType)8, .numargs=4,
    .args="<devname> <objectId> <criteria>" }, 
    { .str="action", .cmdnum=(enum CommandType)9, .numargs=4,
    .args="<devname> <serviceType> <actionName>" }, 
    { .str="wcat", .cmdnum=(enum CommandType)13, .numargs=2,
    .args="<URL>" }, 
    { .str="exit", .cmdnum=(enum CommandType)14, .numargs=1,
    .args="" } };
// CMDNUM
// file test_upnp.c line 119
static const signed int CMDNUM = (const signed int)(sizeof(struct CommandStruct [15l]) /*360ul*/  / sizeof(struct CommandStruct) /*24ul*/ );
// COLORS
// file log.c line 68
static const char * const COLORS[4l] = { "\033[31;1m", "\033[35;1m", "\033[34m", "\033[2m" };
// COLOR_UNKNOWN_LEVEL
// file log.c line 76
static const char * const COLOR_UNKNOWN_LEVEL = "\033[31;1m";
// CRITERIA_BROWSE_CHILDREN
// file content_dir.c line 71
static const char * const CRITERIA_BROWSE_CHILDREN = "BrowseDirectChildren";
// CRITERIA_BROWSE_METADATA
// file content_dir.c line 70
static const char * const CRITERIA_BROWSE_METADATA = "BrowseMetadata";
// DEFAULT_SIZE
// file vfs.c line 44
static const signed long int DEFAULT_SIZE = (const signed long int)0;
// DEFAULT_TIME
// file vfs.c line 48
static const signed long int DEFAULT_TIME = (const signed long int)946724400;
// DeviceListMutex
// file device_list.c line 65
static union anonymous$3 DeviceListMutex;
// GlobalDeviceList
// file device_list.c line 85
static struct LINKEDLIST GlobalDeviceList;
// MIMES
// file media_file.c line 68
static const struct _MimeType MIMES[39l] = { { .mimetype="audio/mpeg", .playlist="m3u", .extension="mp3" }, 
    { .mimetype="audio/vnd.rn-realaudio", .playlist="ram", .extension="ram" }, 
    { .mimetype="audio/x-pn-realaudio", .playlist="ram", .extension="ram" }, 
    { .mimetype="audio/x-realaudio", .playlist="ram", .extension="ram" }, 
    { .mimetype="audio/basic", .playlist="m3u", .extension="au" }, 
    { .mimetype="audio/prs.sid", .playlist="m3u", .extension="sid" }, 
    { .mimetype="audio/x-scpls", .playlist=(const char *)(void *)0, .extension="pls" }, 
    { .mimetype="audio/x-mpegurl", .playlist=(const char *)(void *)0, .extension="m3u" }, 
    { .mimetype="audio/x-matroska", .playlist="m3u", .extension="mka" }, 
    { .mimetype="audio/", .playlist="m3u", .extension=(const char *)(void *)0 }, 
    { .mimetype="video/vnd.rn-realvideo", .playlist="ram", .extension="ram" }, 
    { .mimetype="video/x-msvideo", .playlist="m3u", .extension="avi" }, 
    { .mimetype="video/x-motion-jpeg", .playlist="m3u", .extension="mjpg" }, 
    { .mimetype="video/quicktime", .playlist="m3u", .extension="mov" }, 
    { .mimetype="video/x-matroska", .playlist="m3u", .extension="mkv" }, 
    { .mimetype="video/mpeg", .playlist="m3u", .extension="mpg" }, 
    { .mimetype="video/mp2p", .playlist="m3u", .extension="vob" }, 
    { .mimetype="video/", .playlist="m3u", .extension=(const char *)(void *)0 }, 
    { .mimetype="image/jpeg", .playlist=(const char *)(void *)0, .extension="jpg" }, 
    { .mimetype="image/svg+xml", .playlist=(const char *)(void *)0, .extension="svg" }, 
    { .mimetype="image/x-xwindowdump", .playlist=(const char *)(void *)0, .extension="xwd" }, 
    { .mimetype="image/x-win-bitmap", .playlist=(const char *)(void *)0, .extension="cur" }, 
    { .mimetype="image/x-portable-anymap", .playlist=(const char *)(void *)0, .extension="pnm" }, 
    { .mimetype="image/x-portable-bitmap", .playlist=(const char *)(void *)0, .extension="pbm" }, 
    { .mimetype="image/x-portable-pixmap", .playlist=(const char *)(void *)0, .extension="ppm" }, 
    { .mimetype="image/x-portable-graymap", .playlist=(const char *)(void *)0, .extension="pgm" }, 
    { .mimetype="image/x-xpixmap", .playlist=(const char *)(void *)0, .extension="xpm" }, 
    { .mimetype="image/x-xbitmap", .playlist=(const char *)(void *)0, .extension="xbm" }, 
    { .mimetype="image/x-photo-cd", .playlist=(const char *)(void *)0, .extension="pcd" }, 
    { .mimetype="image/x-quicktime", .playlist=(const char *)(void *)0, .extension="qti" }, 
    { .mimetype="image/x-icon", .playlist=(const char *)(void *)0, .extension="ico" }, 
    { .mimetype="image/tiff", .playlist=(const char *)(void *)0, .extension="tif" }, 
    { .mimetype="image/", .playlist=(const char *)(void *)0, .extension=(const char *)(void *)0 }, 
    { .mimetype="application/ogg", .playlist="m3u", .extension="ogg" }, 
    { .mimetype="application/vnd.rn-realmedia", .playlist="ram",
    .extension="ram" }, 
    { .mimetype="application/x-matroska", .playlist="m3u", .extension="mkv" }, 
    { .mimetype="text/plain", .playlist=(const char *)(void *)0, .extension="txt" }, 
    { .mimetype="text/", .playlist=(const char *)(void *)0, .extension=(const char *)(void *)0 }, 
    { .mimetype=(const char *)(void *)0, .playlist=(const char *)(void *)0, .extension=(const char *)(void *)0 } };
// NAME_UNDER_CONSTRUCTION
// file object.c line 185
static const char * const NAME_UNDER_CONSTRUCTION = "under construction";
// NB_COLORS
// file log.c line 74
static const signed int NB_COLORS = (const signed int)(sizeof(const char * const [4l]) /*32ul*/  / sizeof(const char *) /*8ul*/ );
// NB_CONVERTERS
// file charset.c line 87
static const signed int NB_CONVERTERS = (const signed int)(sizeof(struct _Converter [2l]) /*112ul*/  / sizeof(struct _Converter) /*56ul*/ );
// default_tuning
// file hash.c line 130
static const struct hash_tuning default_tuning = { .shrink_threshold=(float)0.0, .shrink_factor=(float)1.0, .growth_threshold=(float)0.8,
    .growth_factor=(float)1.414, .is_n_buckets=(_Bool)0 };
// exit_failure
// file exitfail.c line 27
volatile signed int exit_failure = 1;
// gPrintFun
// file log.c line 36
static void (*gPrintFun)(enum Log_Level, const char *) = (void (*)(enum Log_Level, const char *))(void *)0;
// gStateUpdateFun
// file device_list.c line 99
static void (*gStateUpdateFun)(enum DeviceList_EventType, const char *) = ((void (*)(enum DeviceList_EventType, const char *))NULL);
// g_class_mutex
// file object.c line 46
static union anonymous$3 g_class_mutex;
// g_colorize
// file log.c line 55
static _Bool g_colorize = (_Bool)0;
// g_converters
// file charset.c line 68
static struct _Converter g_converters[2l] = { { .cd=(void *)-1, .mutex={ .__data={ .__lock=0, .__count=0u, .__owner=0, .__nusers=0u, .__kind=0,
    .__spins=0, .__elision=0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .to_utf8=(const _Bool)1 }, 
    { .cd=(void *)-1, .mutex={ .__data={ .__lock=0, .__count=0u, .__owner=0, .__nusers=0u, .__kind=0,
    .__spins=0, .__elision=0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .to_utf8=(const _Bool)0 } };
// g_ctrlpt_handle
// file device_list.c line 51
static signed int g_ctrlpt_handle = -1;
// g_initialized
// file log.c line 42
static _Bool g_initialized = (_Bool)0;
// g_log_mutex
// file log.c line 43
static union anonymous$3 g_log_mutex;
// g_max_level
// file log.c line 49
static enum Log_Level g_max_level = (enum Log_Level)2;
// g_mutex_initialized
// file object.c line 45
static _Bool g_mutex_initialized = (_Bool)0;
// g_ssdp_target
// file device_list.c line 56
static char *g_ssdp_target = (char *)(void *)0;
// g_state
// file charset.c line 58
static enum anonymous$6 g_state = (enum anonymous$6)NOT_INITIALIZED;
// g_timer_thread
// file device_list.c line 54
static unsigned long int g_timer_thread;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;

// ActionError
// file service.c line 307
static void ActionError(struct _Service *serv, const char *actionName, signed int rc, struct _IXML_Document **response)
{
  _talloc_free((void *)serv->la_name, "service.c:310");
  serv->la_name=talloc_strdup((const void *)serv, actionName);
  serv->la_result = rc;
  _talloc_free((void *)serv->la_error_code, "service.c:314");
  _talloc_free((void *)serv->la_error_desc, "service.c:315");
  serv->la_error_desc = (char *)(void *)0;
  serv->la_error_code = serv->la_error_desc;
  if(!(rc == 0))
  {
    const char *return_value_UpnpGetErrorMessage$1;
    return_value_UpnpGetErrorMessage$1=UpnpGetErrorMessage(rc);
    Log_Printf((enum Log_Level)LOG_ERROR, "Error in UpnpSendAction '%s' -- %d (%s)", actionName, rc, return_value_UpnpGetErrorMessage$1);
    if(!(response == ((struct _IXML_Document **)NULL)))
    {
      if(!(*response == ((struct _IXML_Document *)NULL)))
      {
        char *s;
        s=ixmlDocumenttoString(*response);
        Log_Printf((enum Log_Level)LOG_DEBUG, "Error in UpnpSendAction, response = %s", s);
        ixmlFreeDOMString(s);
        const char *return_value_XMLUtil_FindFirstElementValue$2;
        return_value_XMLUtil_FindFirstElementValue$2=XMLUtil_FindFirstElementValue(&(*response)->n, "errorCode", (const _Bool)1, (const _Bool)1);
        serv->la_error_code=talloc_strdup((const void *)serv, return_value_XMLUtil_FindFirstElementValue$2);
        const char *return_value_XMLUtil_FindFirstElementValue$3;
        return_value_XMLUtil_FindFirstElementValue$3=XMLUtil_FindFirstElementValue(&(*response)->n, "errorDescription", (const _Bool)1, (const _Bool)1);
        serv->la_error_desc=talloc_strdup((const void *)serv, return_value_XMLUtil_FindFirstElementValue$3);
        Log_Printf((enum Log_Level)LOG_ERROR, "Error SOAP in UpnpSendAction -- %s (%s)", serv->la_error_code, serv->la_error_desc);
        ixmlDocument_free(*response);
        *response = (struct _IXML_Document *)(void *)0;
      }

    }

  }

}

// AddDevice
// file device_list.c line 348
static void AddDevice(const char *deviceId, const char *descLocation, signed int expires)
{
  pthread_mutex_lock(&DeviceListMutex);
  struct _DeviceNode *devnode = (struct _DeviceNode *)(void *)0;
  struct LISTNODE *node;
  node=GetDeviceListNodeFromId(deviceId);
  if(!(node == ((struct LISTNODE *)NULL)))
    devnode = (struct _DeviceNode *)node->item;

  const char *tmp_if_expr$7;
  const char *return_value_talloc_get_name$6;
  if(!(devnode == ((struct _DeviceNode *)NULL)))
  {
    Log_Printf((enum Log_Level)LOG_DEBUG, "AddDevice Id=%s already exists, update only", deviceId != ((const char *)NULL) ? deviceId : "(null)");
    devnode->expires = expires;
  }

  else
  {
    Log_Printf((enum Log_Level)LOG_DEBUG, "AddDevice try new device Id=%s", deviceId != ((const char *)NULL) ? deviceId : "(null)");
    pthread_mutex_unlock(&DeviceListMutex);
    if(descLocation == ((const char *)NULL))
    {
      Log_Printf((enum Log_Level)LOG_ERROR, "NULL description doc. URL device Id=%s", deviceId != ((const char *)NULL) ? deviceId : "(null)");
      goto __CPROVER_DUMP_L16;
    }

    char *descDocText = (char *)(void *)0;
    char content_type[180l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    signed int rc;
    rc=UpnpDownloadUrlItem(descLocation, &descDocText, content_type);
    if(!(rc == 0))
    {
      const char *return_value_UpnpGetErrorMessage$1;
      return_value_UpnpGetErrorMessage$1=UpnpGetErrorMessage(rc);
      Log_Printf((enum Log_Level)LOG_ERROR, "Error obtaining device description from url '%s' : %d (%s)", descLocation, rc, return_value_UpnpGetErrorMessage$1);
      if(rc / 100 == -2)
        Log_Printf((enum Log_Level)LOG_ERROR, "Check device network configuration (firewall ?)");

      goto __CPROVER_DUMP_L16;
    }

    signed int return_value_strncasecmp$2;
    return_value_strncasecmp$2=strncasecmp(content_type, "text/xml", (unsigned long int)8);
    if(!(return_value_strncasecmp$2 == 0))
      Log_Printf((enum Log_Level)LOG_ERROR, "Device description at url '%s' has MIME '%s' instead of XML ! Trying to parse anyway ...", descLocation, (const void *)content_type);

    void *context = (void *)0;
    void *return_value_talloc_named_const$3;
    return_value_talloc_named_const$3=talloc_named_const(context, sizeof(struct _DeviceNode) /*24ul*/ , "DeviceNode");
    devnode = (struct _DeviceNode *)return_value_talloc_named_const$3;
    *devnode = (struct _DeviceNode){ .deviceId=((char *)NULL), .d=((struct _Device *)NULL), .expires=0 };
    devnode->d=Device_Create((void *)devnode, g_ctrlpt_handle, descLocation, deviceId, descDocText);
    free((void *)descDocText);
    descDocText = (char *)(void *)0;
    if(devnode->d == ((struct _Device *)NULL))
    {
      Log_Printf((enum Log_Level)LOG_ERROR, "Can't create Device Id=%s", deviceId != ((const char *)NULL) ? deviceId : "(null)");
      _talloc_free((void *)devnode, "device_list.c:424");
      goto __CPROVER_DUMP_L16;
    }

    else
    {
      char *return_value_strstr$4;
      return_value_strstr$4=strstr(g_ssdp_target, ":service:");
      if(!(return_value_strstr$4 == ((char *)NULL)))
      {
        const struct _Service *serv;
        serv=Device_GetServiceFrom(devnode->d, g_ssdp_target, (enum GetFrom)FROM_SERVICE_TYPE, (_Bool)0);
        if(serv == ((const struct _Service *)NULL))
        {
          Log_Printf((enum Log_Level)LOG_DEBUG, "Discovered device Id=%s has no '%s' service : forgetting", deviceId != ((const char *)NULL) ? deviceId : "(null)", g_ssdp_target);
          _talloc_free((void *)devnode, "device_list.c:439");
          goto __CPROVER_DUMP_L16;
        }

      }

      pthread_mutex_lock(&DeviceListMutex);
      node=GetDeviceListNodeFromId(deviceId);
      if(!(node == ((struct LISTNODE *)NULL)))
      {
        Log_Printf((enum Log_Level)LOG_WARNING, "Device Id=%s already added", deviceId != ((const char *)NULL) ? deviceId : "(null)");
        _talloc_free((void *)devnode, "device_list.c:456");
      }

      else
      {
        devnode->deviceId=talloc_strdup((const void *)devnode, deviceId);
        devnode->expires = expires;
        const char *base;
        base=Device_GetDescDocItem(devnode->d, "friendlyName", (_Bool)1);
        char *name;
        name=make_device_name((void *)0, base);
        talloc_set_name((const void *)devnode->d, "%s", name);
        _talloc_free((void *)name, "device_list.c:468");
        const char *return_value_talloc_get_name$5;
        return_value_talloc_get_name$5=talloc_get_name((const void *)devnode->d);
        if(!(return_value_talloc_get_name$5 == ((const char *)NULL)))
        {
          return_value_talloc_get_name$6=talloc_get_name((const void *)devnode->d);
          tmp_if_expr$7 = return_value_talloc_get_name$6;
        }

        else
          tmp_if_expr$7 = "(null)";
        Log_Printf((enum Log_Level)LOG_INFO, "Add new device : Name='%s' Id='%s' descURL='%s'", tmp_if_expr$7, deviceId != ((const char *)NULL) ? deviceId : "(null)", descLocation);
        ListAddTail(&GlobalDeviceList, (void *)devnode);
        Device_SusbcribeAllEvents(devnode->d);
        NotifyUpdate((enum DeviceList_EventType)E_DEVICE_ADDED, devnode);
      }
    }
  }
  pthread_mutex_unlock(&DeviceListMutex);

__CPROVER_DUMP_L16:
  ;
}

// BrowseChildren
// file djfs.c line 235
static struct _VFS_BrowseStatus BrowseChildren(struct _DJFS * const self, const char * const sub_path, const struct _VFS_Query * const query, void * const tmp_ctx, const char * const devName, const struct _DIDLObject * const parent, const _Bool searchable, const char * const search_criteria, struct _ContentDir_Children * const children)
{
  union anonymous$3 *lock = (union anonymous$3 *)(void *)0;
  struct _VFS_BrowseStatus _s = { .rc=0, .ptr=sub_path };
  const struct _VFS_Query * const _q = query;
  _Bool return_value_PtrArray_IteratorLoop$1;
  _Bool tmp_if_expr$5;
  _Bool return_value_PtrArray_IsEmpty$10;
  _Bool return_value_PtrArray_IteratorLoop$7;
  if(_s.ptr == ((const char *)NULL) || _q == ((const struct _VFS_Query *)NULL))
    _s.rc = -14;

  else
  {
    const char *_p;
    if(!(children == ((struct _ContentDir_Children *)NULL)))
    {
      struct _DIDLObject *o = (struct _DIDLObject *)(void *)0;
      do
        if(!(children->objects == ((struct _PtrArray *)NULL)))
        {
          struct _PtrArray_Iterator __itero;
          __itero=PtrArray_IteratorStart(children->objects);
          do
          {
            return_value_PtrArray_IteratorLoop$1=PtrArray_IteratorLoop(&__itero);
            if(return_value_PtrArray_IteratorLoop$1 == (_Bool)0)
              break;

            void *return_value_PtrArray_IteratorGetElement$2;
            return_value_PtrArray_IteratorGetElement$2=PtrArray_IteratorGetElement(&__itero);
            o = (struct _DIDLObject *)return_value_PtrArray_IteratorGetElement$2;
            if(!(o->is_container == (_Bool)0))
            {
              _p = o->basename;
              if(!(_p == ((const char *)NULL)))
              {
                if(!(*_p == 0))
                {
                  if((signed int)*_s.ptr == 0)
                  {
                    _s.rc=vfs_dir_add_entry$link1(_p, 4, _q);
                    if(!(_s.rc == 0))
                      goto cleanup;

                  }

                  else
                  {
                    _p=vfs_match_start_of_path(_s.ptr, _p);
                    if(!(_p == ((const char *)NULL)))
                    {
                      _s.ptr = _p;
                      if((signed int)*_s.ptr == 0)
                      {
                        _s.rc=vfs_dir_begin(_q);
                        if(!(_s.rc == 0))
                          goto cleanup;

                      }

                      const struct _ContentDir_BrowseResult *res;
                      do
                      {
                        struct _Service *__serv;
                        __serv=_DeviceList_LockService(devName, "urn:schemas-upnp-org:service:ContentDirectory:1");
                        const struct _Object_Class *return_value__ContentDir_GetBaseClass$3;
                        return_value__ContentDir_GetBaseClass$3=_ContentDir_GetBaseClass();
                        _Bool return_value__Object_IsA$4;
                        return_value__Object_IsA$4=_Object_IsA((const void *)__serv, return_value__ContentDir_GetBaseClass$3);
                        res=ContentDir_Browse(return_value__Object_IsA$4 != (_Bool)0 ? (struct _ContentDir *)__serv : (struct _ContentDir *)(void *)0, tmp_ctx, o->id, (enum _ContentDir_BrowseFlag)CONTENT_DIR_BROWSE_DIRECT_CHILDREN);
                        _DeviceList_UnlockService(__serv);
                      }
                      while((_Bool)0);
                      if(!(res == ((const struct _ContentDir_BrowseResult *)NULL)))
                      {
                        if(!(res->children == ((struct _ContentDir_Children *)NULL)))
                        {
                          if((signed int)*_s.ptr == 0)
                          {
                            _s=BrowseChildren(self, _s.ptr, query, tmp_ctx, devName, o, searchable != (_Bool)0 && search_criteria == (const char *)(void *)0, (const char *)(void *)0, res->children);
                            if(!(_s.rc == 0))
                              goto cleanup;

                          }

                          else
                          {
                            _s=BrowseChildren(self, _s.ptr, query, tmp_ctx, devName, o, searchable != (_Bool)0 && search_criteria == (const char *)(void *)0, (const char *)(void *)0, res->children);
                            if((signed int)*_s.ptr == 0 || !(_s.rc == 0))
                              goto cleanup;

                          }
                        }

                      }

                      if(!((signed int)*_s.ptr == 0))
                      {
                        _s.rc = -2;
                        goto cleanup;
                      }

                    }

                    if((signed int)*_s.ptr == 0)
                      goto cleanup;

                  }
                }

              }

            }

            else
            {
              struct _MediaFile file = { .o=(const struct _DIDLObject *)(void *)0, .extension={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    .playlist=((const char *)NULL),
    .uri=((const char *)NULL), .res=((struct _IXML_Element *)NULL) };
              _Bool return_value_MediaFile_GetPreferred$6;
              return_value_MediaFile_GetPreferred$6=MediaFile_GetPreferred(o, &file);
              if(!(return_value_MediaFile_GetPreferred$6 == (_Bool)0))
              {
                signed long int res_size;
                res_size=MediaFile_GetResSize(&file);
                if(!(file.playlist == ((const char *)NULL)))
                  tmp_if_expr$5 = ((((signed int)self->flags & DJFS_USE_PLAYLISTS) != 0 ? (_Bool)1 : (res_size < (signed long int)0 ? (_Bool)1 : (_Bool)0)) ? (_Bool)1 : ((unsigned long int)res_size > (unsigned long int)0x7fffffff ? (_Bool)1 : (_Bool)0)) ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr$5 = (_Bool)0;
                if(tmp_if_expr$5)
                {
                  char *name;
                  name=MediaFile_GetName(tmp_ctx, o, file.playlist);
                  _p = name;
                  if(!(_p == ((const char *)NULL)))
                  {
                    if(!(*_p == 0))
                    {
                      if((signed int)*_s.ptr == 0)
                        _s.rc=vfs_dir_add_entry$link1(_p, 8, _q);

                      else
                      {
                        _p=vfs_match_start_of_path(_s.ptr, _p);
                        if(!(_p == ((const char *)NULL)))
                        {
                          _s.ptr = _p;
                          if(!((signed int)*_s.ptr == 0))
                            _s.rc = -20;

                          else
                            _s.rc=vfs_file_begin(8, _q);
                          if(!(_s.rc == 0))
                            goto cleanup;

                          const char *str;
                          str=MediaFile_GetPlaylistContent(&file, tmp_ctx);
                          vfs_file_set_string(str, (enum _FileBuffer_StringAlloc)FILE_BUFFER_STRING_STEAL, "djfs.c:284", _q);
                        }

                        if((signed int)*_s.ptr == 0)
                          goto cleanup;

                      }
                    }

                  }

                }

                else
                {
                  char *BrowseChildren$$1$$2$$1$$1$$1$$1$$1$$1$$2$$1$$2$$name;
                  BrowseChildren$$1$$2$$1$$1$$1$$1$$1$$1$$2$$1$$2$$name=MediaFile_GetName(tmp_ctx, o, file.extension);
                  _p = BrowseChildren$$1$$2$$1$$1$$1$$1$$1$$1$$2$$1$$2$$name;
                  if(!(_p == ((const char *)NULL)))
                  {
                    if(!(*_p == 0))
                    {
                      if((signed int)*_s.ptr == 0)
                        _s.rc=vfs_dir_add_entry$link1(_p, 8, _q);

                      else
                      {
                        _p=vfs_match_start_of_path(_s.ptr, _p);
                        if(!(_p == ((const char *)NULL)))
                        {
                          _s.ptr = _p;
                          if(!((signed int)*_s.ptr == 0))
                            _s.rc = -20;

                          else
                            _s.rc=vfs_file_begin(8, _q);
                          if(!(_s.rc == 0))
                            goto cleanup;

                          vfs_file_set_url(file.uri, res_size, "djfs.c:289", _q);
                        }

                        if((signed int)*_s.ptr == 0)
                          goto cleanup;

                      }
                    }

                  }

                }
              }

            }
          }
          while((_Bool)1);
        }

      while((_Bool)0);
      if(!((DJFS_SHOW_METADATA & (signed int)self->flags) == 0))
      {
        return_value_PtrArray_IsEmpty$10=PtrArray_IsEmpty(children->objects);
        if(return_value_PtrArray_IsEmpty$10 == (_Bool)0)
        {
          _p = ".metadata";
          if(!(_p == ((const char *)NULL)))
          {
            if(!(*_p == 0))
            {
              if((signed int)*_s.ptr == 0)
              {
                _s.rc=vfs_dir_add_entry$link1(_p, 4, _q);
                if(!(_s.rc == 0))
                  goto cleanup;

              }

              else
              {
                _p=vfs_match_start_of_path(_s.ptr, _p);
                if(!(_p == ((const char *)NULL)))
                {
                  _s.ptr = _p;
                  if((signed int)*_s.ptr == 0)
                  {
                    _s.rc=vfs_dir_begin(_q);
                    if(!(_s.rc == 0))
                      goto cleanup;

                  }

                  do
                    if(!(children->objects == ((struct _PtrArray *)NULL)))
                    {
                      struct _PtrArray_Iterator BrowseChildren$$1$$2$$1$$1$$2$$1$$2$$1$$2$$1$$1$$__itero;
                      BrowseChildren$$1$$2$$1$$1$$2$$1$$2$$1$$2$$1$$1$$__itero=PtrArray_IteratorStart(children->objects);
                      do
                      {
                        return_value_PtrArray_IteratorLoop$7=PtrArray_IteratorLoop(&BrowseChildren$$1$$2$$1$$1$$2$$1$$2$$1$$2$$1$$1$$__itero);
                        if(return_value_PtrArray_IteratorLoop$7 == (_Bool)0)
                          break;

                        void *return_value_PtrArray_IteratorGetElement$8;
                        return_value_PtrArray_IteratorGetElement$8=PtrArray_IteratorGetElement(&BrowseChildren$$1$$2$$1$$1$$2$$1$$2$$1$$2$$1$$1$$__itero);
                        o = (struct _DIDLObject *)return_value_PtrArray_IteratorGetElement$8;
                        char *BrowseChildren$$1$$2$$1$$1$$2$$1$$2$$1$$2$$1$$1$$1$$1$$name;
                        BrowseChildren$$1$$2$$1$$1$$2$$1$$2$$1$$2$$1$$1$$1$$1$$name=MediaFile_GetName(tmp_ctx, o, "xml");
                        _p = BrowseChildren$$1$$2$$1$$1$$2$$1$$2$$1$$2$$1$$1$$1$$1$$name;
                        if(!(_p == ((const char *)NULL)))
                        {
                          if(!(*_p == 0))
                          {
                            if((signed int)*_s.ptr == 0)
                              _s.rc=vfs_dir_add_entry$link1(_p, 8, _q);

                            else
                            {
                              _p=vfs_match_start_of_path(_s.ptr, _p);
                              if(!(_p == ((const char *)NULL)))
                              {
                                _s.ptr = _p;
                                if(!((signed int)*_s.ptr == 0))
                                  _s.rc = -20;

                                else
                                  _s.rc=vfs_file_begin(8, _q);
                                if(!(_s.rc == 0))
                                  goto cleanup;

                                const char *BrowseChildren$$1$$2$$1$$1$$2$$1$$2$$1$$2$$1$$1$$1$$1$$1$$2$$1$$1$$str;
                                char *return_value_DIDLObject_GetElementString$9;
                                return_value_DIDLObject_GetElementString$9=DIDLObject_GetElementString(o, tmp_ctx);
                                BrowseChildren$$1$$2$$1$$1$$2$$1$$2$$1$$2$$1$$1$$1$$1$$1$$2$$1$$1$$str=talloc_asprintf(tmp_ctx, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n%s", return_value_DIDLObject_GetElementString$9);
                                vfs_file_set_string(BrowseChildren$$1$$2$$1$$1$$2$$1$$2$$1$$2$$1$$1$$1$$1$$1$$2$$1$$1$$str, (enum _FileBuffer_StringAlloc)FILE_BUFFER_STRING_STEAL, "djfs.c:305", _q);
                              }

                              if((signed int)*_s.ptr == 0)
                                goto cleanup;

                            }
                          }

                        }

                      }
                      while((_Bool)1);
                    }

                  while((_Bool)0);
                  if(!((signed int)*_s.ptr == 0))
                  {
                    _s.rc = -2;
                    goto cleanup;
                  }

                }

                if((signed int)*_s.ptr == 0)
                  goto cleanup;

              }
            }

          }

        }

      }

    }

    if(!(searchable == (_Bool)0))
    {
      if(!(parent->searchable == (_Bool)0))
      {
        if(search_criteria == ((const char *)NULL))
        {
          _p = "_search";
          if(!(_p == ((const char *)NULL)))
          {
            if(!(*_p == 0))
            {
              if((signed int)*_s.ptr == 0)
              {
                _s.rc=vfs_dir_add_entry$link1(_p, 4, _q);
                if(!(_s.rc == 0))
                  goto cleanup;

              }

              else
              {
                _p=vfs_match_start_of_path(_s.ptr, _p);
                if(!(_p == ((const char *)NULL)))
                {
                  _s.ptr = _p;
                  if((signed int)*_s.ptr == 0)
                  {
                    _s.rc=vfs_dir_begin(_q);
                    if(!(_s.rc == 0))
                      goto cleanup;

                  }

                  if((signed int)*_s.ptr == 0)
                  {
                    _s=BrowseSearchDir(self, _s.ptr, query, tmp_ctx, devName, parent, (const char *)(void *)0);
                    if(!(_s.rc == 0))
                      goto cleanup;

                  }

                  else
                  {
                    _s=BrowseSearchDir(self, _s.ptr, query, tmp_ctx, devName, parent, (const char *)(void *)0);
                    if((signed int)*_s.ptr == 0 || !(_s.rc == 0))
                      goto cleanup;

                  }
                  if(!((signed int)*_s.ptr == 0))
                  {
                    _s.rc = -2;
                    goto cleanup;
                  }

                }

                if((signed int)*_s.ptr == 0)
                  goto cleanup;

              }
            }

          }

        }

        else
        {
          signed long int str$array_size0;
          unsigned long int return_value_strlen$11;
          return_value_strlen$11=strlen(search_criteria);
          str$array_size0 = (signed long int)(return_value_strlen$11 + (unsigned long int)9);
          char criteria_start[str$array_size0];
          _p = "_and";
          if(!(_p == ((const char *)NULL)))
          {
            if(!(*_p == 0))
            {
              if((signed int)*_s.ptr == 0)
              {
                _s.rc=vfs_dir_add_entry$link1(_p, 4, _q);
                if(!(_s.rc == 0))
                  goto cleanup;

              }

              else
              {
                _p=vfs_match_start_of_path(_s.ptr, _p);
                if(!(_p == ((const char *)NULL)))
                {
                  _s.ptr = _p;
                  if((signed int)*_s.ptr == 0)
                  {
                    _s.rc=vfs_dir_begin(_q);
                    if(!(_s.rc == 0))
                      goto cleanup;

                  }

                  sprintf(criteria_start, "(%s) and (", search_criteria);
                  if((signed int)*_s.ptr == 0)
                  {
                    _s=BrowseSearchDir(self, _s.ptr, query, tmp_ctx, devName, parent, criteria_start);
                    if(!(_s.rc == 0))
                      goto cleanup;

                  }

                  else
                  {
                    _s=BrowseSearchDir(self, _s.ptr, query, tmp_ctx, devName, parent, criteria_start);
                    if((signed int)*_s.ptr == 0 || !(_s.rc == 0))
                      goto cleanup;

                  }
                  if(!((signed int)*_s.ptr == 0))
                  {
                    _s.rc = -2;
                    goto cleanup;
                  }

                }

                if((signed int)*_s.ptr == 0)
                  goto cleanup;

              }
            }

          }

          _p = "_or";
          if(!(_p == ((const char *)NULL)))
          {
            if(!(*_p == 0))
            {
              if((signed int)*_s.ptr == 0)
              {
                _s.rc=vfs_dir_add_entry$link1(_p, 4, _q);
                if(!(_s.rc == 0))
                  goto cleanup;

              }

              else
              {
                _p=vfs_match_start_of_path(_s.ptr, _p);
                if(!(_p == ((const char *)NULL)))
                {
                  _s.ptr = _p;
                  if((signed int)*_s.ptr == 0)
                  {
                    _s.rc=vfs_dir_begin(_q);
                    if(!(_s.rc == 0))
                      goto cleanup;

                  }

                  sprintf(criteria_start, "(%s) or (", search_criteria);
                  if((signed int)*_s.ptr == 0)
                  {
                    _s=BrowseSearchDir(self, _s.ptr, query, tmp_ctx, devName, parent, criteria_start);
                    if(!(_s.rc == 0))
                      goto cleanup;

                  }

                  else
                  {
                    _s=BrowseSearchDir(self, _s.ptr, query, tmp_ctx, devName, parent, criteria_start);
                    if((signed int)*_s.ptr == 0 || !(_s.rc == 0))
                      goto cleanup;

                  }
                  if(!((signed int)*_s.ptr == 0))
                  {
                    _s.rc = -2;
                    goto cleanup;
                  }

                }

                if((signed int)*_s.ptr == 0)
                  goto cleanup;

              }
            }

          }

        }
      }

    }

  }

cleanup:
  ;
  if(!(lock == ((union anonymous$3 *)NULL)))
    pthread_mutex_unlock(lock);

  return _s;
}

// BrowseDebug
// file vfs.c line 229
static struct _VFS_BrowseStatus BrowseDebug(struct _VFS * const self, const char * const sub_path, const struct _VFS_Query * const query, void * const tmp_ctx)
{
  struct _VFS_BrowseStatus _s = { .rc=0, .ptr=sub_path };
  const struct _VFS_Query * const _q = query;
  char *tmp_if_expr$1;
  char *tmp_if_expr$2;
  char *tmp_if_expr$3;
  if(_s.ptr == ((const char *)NULL) || _q == ((const struct _VFS_Query *)NULL))
    _s.rc = -14;

  else
  {
    const char *_p = "uname";
    if(!(_p == ((const char *)NULL)))
    {
      if(!(*_p == 0))
      {
        if((signed int)*_s.ptr == 0)
          _s.rc=vfs_dir_add_entry(_p, 8, _q);

        else
        {
          _p=vfs_match_start_of_path(_s.ptr, _p);
          if(!(_p == ((const char *)NULL)))
          {
            _s.ptr = _p;
            if(!((signed int)*_s.ptr == 0))
              _s.rc = -20;

            else
              _s.rc=vfs_file_begin(8, _q);
            if(!(_s.rc == 0))
              goto cleanup;

            struct utsname ubuf;
            signed int rc;
            rc=uname(&ubuf);
            const char *BrowseDebug$$1$$2$$1$$1$$2$$1$$1$$str;
            if(!(rc == 0))
              tmp_if_expr$1 = "*unknown kernel*";

            else
              tmp_if_expr$1 = ubuf.sysname;
            if(!(rc == 0))
              tmp_if_expr$2 = "*unknown release*";

            else
              tmp_if_expr$2 = ubuf.release;
            if(!(rc == 0))
              tmp_if_expr$3 = "*unknown machine*";

            else
              tmp_if_expr$3 = ubuf.machine;
            BrowseDebug$$1$$2$$1$$1$$2$$1$$1$$str=talloc_asprintf(tmp_ctx, "%s %s\nhardware type %s\n", tmp_if_expr$1, tmp_if_expr$2, tmp_if_expr$3);
            vfs_file_set_string(BrowseDebug$$1$$2$$1$$1$$2$$1$$1$$str, (enum _FileBuffer_StringAlloc)FILE_BUFFER_STRING_STEAL, "vfs.c:242", _q);
          }

          if((signed int)*_s.ptr == 0)
            goto cleanup;

        }
      }

    }

    _p = "talloc_total";
    if(!(_p == ((const char *)NULL)))
    {
      if(!(*_p == 0))
      {
        if((signed int)*_s.ptr == 0)
          _s.rc=vfs_dir_add_entry(_p, 8, _q);

        else
        {
          _p=vfs_match_start_of_path(_s.ptr, _p);
          if(!(_p == ((const char *)NULL)))
          {
            _s.ptr = _p;
            if(!((signed int)*_s.ptr == 0))
              _s.rc = -20;

            else
              _s.rc=vfs_file_begin(8, _q);
            if(!(_s.rc == 0))
              goto cleanup;

            const char *str;
            unsigned long int return_value_talloc_total_size$4;
            return_value_talloc_total_size$4=talloc_total_size((void *)0);
            str=talloc_asprintf(tmp_ctx, "%ld bytes\n", (signed long int)return_value_talloc_total_size$4);
            vfs_file_set_string(str, (enum _FileBuffer_StringAlloc)FILE_BUFFER_STRING_STEAL, "vfs.c:251", _q);
          }

          if((signed int)*_s.ptr == 0)
            goto cleanup;

        }
      }

    }

    _p = "talloc_report";
    if(!(_p == ((const char *)NULL)))
    {
      if(!(*_p == 0))
      {
        if((signed int)*_s.ptr == 0)
          _s.rc=vfs_dir_add_entry(_p, 8, _q);

        else
        {
          _p=vfs_match_start_of_path(_s.ptr, _p);
          if(!(_p == ((const char *)NULL)))
          {
            _s.ptr = _p;
            if(!((signed int)*_s.ptr == 0))
              _s.rc = -20;

            else
              _s.rc=vfs_file_begin(8, _q);
            if(!(_s.rc == 0))
              goto cleanup;

            struct _StringStream *ss;
            ss=StringStream_Create(tmp_ctx);
            struct _IO_FILE *file;
            file=StringStream_GetFile(ss);
            talloc_report((void *)0, file);
            const char *BrowseDebug$$1$$2$$1$$3$$2$$1$$1$$str;
            BrowseDebug$$1$$2$$1$$3$$2$$1$$1$$str=StringStream_GetSnapshot(ss, tmp_ctx, (unsigned long int *)(void *)0);
            vfs_file_set_string(BrowseDebug$$1$$2$$1$$3$$2$$1$$1$$str, (enum _FileBuffer_StringAlloc)FILE_BUFFER_STRING_STEAL, "vfs.c:260", _q);
          }

          if((signed int)*_s.ptr == 0)
            goto cleanup;

        }
      }

    }

    _p = "talloc_report_full";
    if(!(_p == ((const char *)NULL)))
    {
      if(!(*_p == 0))
      {
        if((signed int)*_s.ptr == 0)
          _s.rc=vfs_dir_add_entry(_p, 8, _q);

        else
        {
          _p=vfs_match_start_of_path(_s.ptr, _p);
          if(!(_p == ((const char *)NULL)))
          {
            _s.ptr = _p;
            if(!((signed int)*_s.ptr == 0))
              _s.rc = -20;

            else
              _s.rc=vfs_file_begin(8, _q);
            if(!(_s.rc == 0))
              goto cleanup;

            struct _StringStream *BrowseDebug$$1$$2$$1$$4$$2$$1$$1$$ss;
            BrowseDebug$$1$$2$$1$$4$$2$$1$$1$$ss=StringStream_Create(tmp_ctx);
            struct _IO_FILE *BrowseDebug$$1$$2$$1$$4$$2$$1$$1$$file;
            BrowseDebug$$1$$2$$1$$4$$2$$1$$1$$file=StringStream_GetFile(BrowseDebug$$1$$2$$1$$4$$2$$1$$1$$ss);
            talloc_report_full((void *)0, BrowseDebug$$1$$2$$1$$4$$2$$1$$1$$file);
            const char *BrowseDebug$$1$$2$$1$$4$$2$$1$$1$$str;
            BrowseDebug$$1$$2$$1$$4$$2$$1$$1$$str=StringStream_GetSnapshot(BrowseDebug$$1$$2$$1$$4$$2$$1$$1$$ss, tmp_ctx, (unsigned long int *)(void *)0);
            vfs_file_set_string(BrowseDebug$$1$$2$$1$$4$$2$$1$$1$$str, (enum _FileBuffer_StringAlloc)FILE_BUFFER_STRING_STEAL, "vfs.c:269", _q);
          }

          if((signed int)*_s.ptr == 0)
            goto cleanup;

        }
      }

    }

  }

cleanup:
  ;
  return _s;
}

// BrowseDebug$link1
// file djfs.c line 431
static struct _VFS_BrowseStatus BrowseDebug$link1(struct _VFS * const vfs, const char * const sub_path$link1, const struct _VFS_Query * const query$link1, void * const tmp_ctx$link1)
{
  struct _DJFS * const self = (struct _DJFS *)vfs;
  union anonymous$3 *lock = (union anonymous$3 *)(void *)0;
  struct _VFS_BrowseStatus _s$link1 = { .rc=0, .ptr=sub_path$link1 };
  const struct _VFS_Query * const _q$link1 = query$link1;
  _Bool return_value_PtrArray_IteratorLoop$1;
  _Bool return_value_PtrArray_IteratorLoop$3;
  if(_s$link1.ptr == ((const char *)NULL) || _q$link1 == ((const struct _VFS_Query *)NULL))
    _s$link1.rc = -14;

  else
  {
    const char *_p$link1 = "versions";
    if(!(_p$link1 == ((const char *)NULL)))
    {
      if(!(*_p$link1 == 0))
      {
        if((signed int)*_s$link1.ptr == 0)
          _s$link1.rc=vfs_dir_add_entry$link1(_p$link1, 8, _q$link1);

        else
        {
          _p$link1=vfs_match_start_of_path(_s$link1.ptr, _p$link1);
          if(!(_p$link1 == ((const char *)NULL)))
          {
            _s$link1.ptr = _p$link1;
            if(!((signed int)*_s$link1.ptr == 0))
              _s$link1.rc = -20;

            else
              _s$link1.rc=vfs_file_begin(8, _q$link1);
            if(!(_s$link1.rc == 0))
              goto cleanup;

            static const char * const str$link1 = "djmount 0.71\nlibupnp 1.6.19+git20160116\nFUSE 2.4\n";
            vfs_file_set_string(str$link1, (enum _FileBuffer_StringAlloc)FILE_BUFFER_STRING_EXTERN, "djfs.c:450", _q$link1);
          }

          if((signed int)*_s$link1.ptr == 0)
            goto cleanup;

        }
      }

    }

    const struct _PtrArray *names;
    names=DeviceList_GetDevicesNames(tmp_ctx$link1);
    const char *devName;
    do
      if(!(names == ((const struct _PtrArray *)NULL)))
      {
        struct _PtrArray_Iterator __iterdevName;
        __iterdevName=PtrArray_IteratorStart(names);
        do
        {
          return_value_PtrArray_IteratorLoop$1=PtrArray_IteratorLoop(&__iterdevName);
          if(return_value_PtrArray_IteratorLoop$1 == (_Bool)0)
            break;

          void *return_value_PtrArray_IteratorGetElement$2;
          return_value_PtrArray_IteratorGetElement$2=PtrArray_IteratorGetElement(&__iterdevName);
          devName = (const char *)return_value_PtrArray_IteratorGetElement$2;
          _p$link1 = devName;
          if(!(_p$link1 == ((const char *)NULL)))
          {
            if(!(*_p$link1 == 0))
            {
              if((signed int)*_s$link1.ptr == 0)
              {
                _s$link1.rc=vfs_dir_add_entry$link1(_p$link1, 4, _q$link1);
                if(!(_s$link1.rc == 0))
                  goto cleanup;

              }

              else
              {
                _p$link1=vfs_match_start_of_path(_s$link1.ptr, _p$link1);
                if(!(_p$link1 == ((const char *)NULL)))
                {
                  _s$link1.ptr = _p$link1;
                  if((signed int)*_s$link1.ptr == 0)
                  {
                    _s$link1.rc=vfs_dir_begin(_q$link1);
                    if(!(_s$link1.rc == 0))
                      goto cleanup;

                  }

                  _p$link1 = "status";
                  if(!(_p$link1 == ((const char *)NULL)))
                  {
                    if(!(*_p$link1 == 0))
                    {
                      if((signed int)*_s$link1.ptr == 0)
                        _s$link1.rc=vfs_dir_add_entry$link1(_p$link1, 8, _q$link1);

                      else
                      {
                        _p$link1=vfs_match_start_of_path(_s$link1.ptr, _p$link1);
                        if(!(_p$link1 == ((const char *)NULL)))
                        {
                          _s$link1.ptr = _p$link1;
                          if(!((signed int)*_s$link1.ptr == 0))
                            _s$link1.rc = -20;

                          else
                            _s$link1.rc=vfs_file_begin(8, _q$link1);
                          if(!(_s$link1.rc == 0))
                            goto cleanup;

                          const char *BrowseDebug$$1$$2$$1$$2$$1$$1$$1$$1$$2$$1$$2$$1$$2$$1$$1$$str;
                          BrowseDebug$$1$$2$$1$$2$$1$$1$$1$$1$$2$$1$$2$$1$$2$$1$$1$$str=DeviceList_GetDeviceStatusString(tmp_ctx$link1, devName, (_Bool)1);
                          vfs_file_set_string(BrowseDebug$$1$$2$$1$$2$$1$$1$$1$$1$$2$$1$$2$$1$$2$$1$$1$$str, (enum _FileBuffer_StringAlloc)FILE_BUFFER_STRING_STEAL, "djfs.c:461", _q$link1);
                        }

                        if((signed int)*_s$link1.ptr == 0)
                          goto cleanup;

                      }
                    }

                  }

                  _p$link1 = "device_description.xml";
                  if(!(_p$link1 == ((const char *)NULL)))
                  {
                    if(!(*_p$link1 == 0))
                    {
                      if((signed int)*_s$link1.ptr == 0)
                        _s$link1.rc=vfs_dir_add_entry$link1(_p$link1, 8, _q$link1);

                      else
                      {
                        _p$link1=vfs_match_start_of_path(_s$link1.ptr, _p$link1);
                        if(!(_p$link1 == ((const char *)NULL)))
                        {
                          _s$link1.ptr = _p$link1;
                          if(!((signed int)*_s$link1.ptr == 0))
                            _s$link1.rc = -20;

                          else
                            _s$link1.rc=vfs_file_begin(8, _q$link1);
                          if(!(_s$link1.rc == 0))
                            goto cleanup;

                          const char *BrowseDebug$$1$$2$$1$$2$$1$$1$$1$$1$$2$$1$$2$$2$$2$$1$$1$$str;
                          do
                          {
                            struct _Device *__dev;
                            __dev=_DeviceList_LockDevice(devName);
                            BrowseDebug$$1$$2$$1$$2$$1$$1$$1$$1$$2$$1$$2$$2$$2$$1$$1$$str=Device_GetDescDocTextCopy(__dev, tmp_ctx$link1);
                            _DeviceList_UnlockDevice(__dev);
                          }
                          while((_Bool)0);
                          vfs_file_set_string(BrowseDebug$$1$$2$$1$$2$$1$$1$$1$$1$$2$$1$$2$$2$$2$$1$$1$$str, (enum _FileBuffer_StringAlloc)FILE_BUFFER_STRING_STEAL, "djfs.c:472", _q$link1);
                        }

                        if((signed int)*_s$link1.ptr == 0)
                          goto cleanup;

                      }
                    }

                  }

                  if(!((signed int)*_s$link1.ptr == 0))
                  {
                    _s$link1.rc = -2;
                    goto cleanup;
                  }

                }

                if((signed int)*_s$link1.ptr == 0)
                  goto cleanup;

              }
            }

          }

        }
        while((_Bool)1);
      }

    while((_Bool)0);
    if(!(self->search_hist == ((struct _PtrArray *)NULL)))
    {
      _p$link1 = "search_history";
      if(!(_p$link1 == ((const char *)NULL)))
      {
        if(!(*_p$link1 == 0))
        {
          if((signed int)*_s$link1.ptr == 0)
          {
            _s$link1.rc=vfs_dir_add_entry$link1(_p$link1, 4, _q$link1);
            if(!(_s$link1.rc == 0))
              goto cleanup;

          }

          else
          {
            _p$link1=vfs_match_start_of_path(_s$link1.ptr, _p$link1);
            if(!(_p$link1 == ((const char *)NULL)))
            {
              _s$link1.ptr = _p$link1;
              if((signed int)*_s$link1.ptr == 0)
              {
                _s$link1.rc=vfs_dir_begin(_q$link1);
                if(!(_s$link1.rc == 0))
                  goto cleanup;

              }

              struct _SearchHistory *h;
              pthread_mutex_lock(&self->search_hist_mutex);
              lock = &self->search_hist_mutex;
              do
                if(!(self->search_hist == ((struct _PtrArray *)NULL)))
                {
                  struct _PtrArray_Iterator __iterh;
                  __iterh=PtrArray_IteratorStart(self->search_hist);
                  do
                  {
                    return_value_PtrArray_IteratorLoop$3=PtrArray_IteratorLoop(&__iterh);
                    if(return_value_PtrArray_IteratorLoop$3 == (_Bool)0)
                      break;

                    void *return_value_PtrArray_IteratorGetElement$4;
                    return_value_PtrArray_IteratorGetElement$4=PtrArray_IteratorGetElement(&__iterh);
                    h = (struct _SearchHistory *)return_value_PtrArray_IteratorGetElement$4;
                    char link_name[33l];
                    sprintf(link_name, "%d", h->serial);
                    _p$link1 = link_name;
                    if(!(_p$link1 == ((const char *)NULL)))
                    {
                      if(!(*_p$link1 == 0))
                      {
                        if((signed int)*_s$link1.ptr == 0)
                          _s$link1.rc=vfs_dir_add_entry$link1(_p$link1, 10, _q$link1);

                        else
                        {
                          _p$link1=vfs_match_start_of_path(_s$link1.ptr, _p$link1);
                          if(!(_p$link1 == ((const char *)NULL)))
                          {
                            _s$link1.ptr = _p$link1;
                            if(!((signed int)*_s$link1.ptr == 0))
                              _s$link1.rc = -20;

                            else
                              _s$link1.rc=vfs_file_begin(10, _q$link1);
                            if(!(_s$link1.rc == 0))
                              goto cleanup;

                            const char *str;
                            str=talloc_asprintf(tmp_ctx$link1, "../..%s/%s", h->parent_path, h->basename);
                            vfs_symlink_set_path(str, _q$link1);
                            vfs_set_time(h->time, _q$link1);
                          }

                          if((signed int)*_s$link1.ptr == 0)
                            goto cleanup;

                        }
                      }

                    }

                  }
                  while((_Bool)1);
                }

              while((_Bool)0);
              if(!((signed int)*_s$link1.ptr == 0))
              {
                _s$link1.rc = -2;
                goto cleanup;
              }

            }

            if((signed int)*_s$link1.ptr == 0)
              goto cleanup;

          }
        }

      }

    }

    struct _VFS_BrowseStatus (*func)(struct _VFS *, const char *, const struct _VFS_Query *, void *);
    const struct _VFS_Class *return_value__VFS_GetClass$5;
    return_value__VFS_GetClass$5=_VFS_GetClass();
    func = return_value__VFS_GetClass$5->browse_debug;
    if(!(func == ((struct _VFS_BrowseStatus (*)(struct _VFS *, const char *, const struct _VFS_Query *, void *))NULL)))
    {
      if((signed int)*_s$link1.ptr == 0)
        _s$link1=func(vfs, _s$link1.ptr, query$link1, tmp_ctx$link1);

      else
        _s$link1=func(vfs, _s$link1.ptr, query$link1, tmp_ctx$link1);
    }

  }

cleanup:
  ;
  if(!(lock == ((union anonymous$3 *)NULL)))
    pthread_mutex_unlock(lock);

  return _s$link1;
}

// BrowseOrSearchAction
// file content_dir.c line 124
static signed int BrowseOrSearchAction(struct _ContentDir *cds, void *result_context, const char *objectId, const char *criteria, unsigned long int starting_index, unsigned long int requested_count, unsigned long int *nb_matched, unsigned long int *nb_returned, struct _PtrArray *objects)
{
  struct _Service *tmp_if_expr$1;
  const char *s;
  char *return_value_XMLUtil_GetDocumentString$4;
  const char *resstr;
  struct _IXML_Document *subdoc;
  if(criteria == ((const char *)NULL) || objectId == ((const char *)NULL) || cds == ((struct _ContentDir *)NULL))
  {
    Log_Printf((enum Log_Level)LOG_ERROR, "BrowseOrSearchAction NULL parameter");
    return -101;
  }

  else
  {
    void *tmp_ctx;
    tmp_ctx=talloc_named_const((void *)0, (unsigned long int)0, "talloc_new: content_dir.c:141");
    _Bool browse;
    browse=is_browse(criteria);
    struct _IXML_Document *doc = (struct _IXML_Document *)(void *)0;
    signed int rc;
    if(!(cds == ((struct _ContentDir *)NULL)))
      tmp_if_expr$1 = &cds->_.super;

    else
      tmp_if_expr$1 = (struct _Service *)(void *)0;
    const char *return_value_int_to_string$2;
    return_value_int_to_string$2=int_to_string(tmp_ctx, (signed long int)starting_index);
    const char *return_value_int_to_string$3;
    return_value_int_to_string$3=int_to_string(tmp_ctx, (signed long int)requested_count);
    rc=Service_SendActionVa(tmp_if_expr$1, &doc, browse != (_Bool)0 ? "Browse" : "Search", browse != (_Bool)0 ? "ObjectID" : "ContainerID", objectId, browse != (_Bool)0 ? "BrowseFlag" : "SearchCriteria", criteria, (const void *)"Filter", (const void *)"*", (const void *)"StartingIndex", return_value_int_to_string$2, (const void *)"RequestedCount", return_value_int_to_string$3, (const void *)"SortCriteria", (const void *)"", (void *)0, (void *)0);
    if(doc == ((struct _IXML_Document *)NULL) && rc == 0)
      rc = -113;

    if(!(rc == 0))
      Log_Printf((enum Log_Level)LOG_ERROR, "BrowseOrSearchAction ObjectId='%s'", objectId != ((const char *)NULL) ? objectId : "(null)");

    else
    {
      s=XMLUtil_FindFirstElementValue(&doc->n, "TotalMatches", (const _Bool)1, (const _Bool)1);
      do
      {
        signed long int __temp_s2i_var;
        __temp_s2i_var=_String_ToInteger(s, (signed long int)0);
        *nb_matched = (unsigned long int)__temp_s2i_var;
        if(!(*nb_matched == (unsigned long int)__temp_s2i_var))
          *nb_matched = (unsigned long int)0;

      }
      while((_Bool)0);
      s=XMLUtil_FindFirstElementValue(&doc->n, "NumberReturned", (const _Bool)1, (const _Bool)1);
      do
      {
        signed long int BrowseOrSearchAction$$1$$4$$__temp_s2i_var;
        BrowseOrSearchAction$$1$$4$$__temp_s2i_var=_String_ToInteger(s, (signed long int)0);
        *nb_returned = (unsigned long int)BrowseOrSearchAction$$1$$4$$__temp_s2i_var;
        if(!(*nb_returned == (unsigned long int)BrowseOrSearchAction$$1$$4$$__temp_s2i_var))
          *nb_returned = (unsigned long int)0;

      }
      while((_Bool)0);
      return_value_XMLUtil_GetDocumentString$4=XMLUtil_GetDocumentString(tmp_ctx, doc);
      Log_Printf((enum Log_Level)LOG_DEBUG, "+++BROWSE RESULT+++\n%s\n", return_value_XMLUtil_GetDocumentString$4);
      resstr=XMLUtil_FindFirstElementValue(&doc->n, "Result", (const _Bool)1, (const _Bool)1);
      if(resstr == ((const char *)NULL))
      {
        char *return_value_XMLUtil_GetDocumentString$5;
        return_value_XMLUtil_GetDocumentString$5=XMLUtil_GetDocumentString(tmp_ctx, doc);
        Log_Printf((enum Log_Level)LOG_ERROR, "BrowseOrSearchAction ObjectId=%s : can't get 'Result' in doc=%s", objectId, return_value_XMLUtil_GetDocumentString$5);
        rc = -113;
        goto cleanup;
      }

      subdoc=ixmlParseBuffer((char *)resstr);
      if(subdoc == ((struct _IXML_Document *)NULL))
      {
        Log_Printf((enum Log_Level)LOG_ERROR, "BrowseOrSearchAction ObjectId=%s : can't parse 'Result'=%s", objectId, resstr);
        rc = -113;
      }

      else
      {
        struct _IXML_NodeList *containers;
        containers=ixmlDocument_getElementsByTagName(subdoc, "container");
        unsigned long int nb_containers;
        nb_containers=ixmlNodeList_length(containers);
        struct _IXML_NodeList *items;
        items=ixmlDocument_getElementsByTagName(subdoc, "item");
        unsigned long int nb_items;
        nb_items=ixmlNodeList_length(items);
        if(!(nb_containers + nb_items == *nb_returned))
        {
          Log_Printf((enum Log_Level)LOG_ERROR, "BrowseOrSearchAction ObjectId=%s got %d containers + %d items, expected %d", objectId, (signed int)nb_containers, (signed int)nb_items, (signed int)*nb_returned);
          *nb_returned = nb_containers + nb_items;
        }

        if(criteria == CRITERIA_BROWSE_METADATA)
        {
          if(!(*nb_returned == 1ul))
            Log_Printf((enum Log_Level)LOG_ERROR, "ContentDir_Browse Metadata : not 1 result exactly ! Id=%s", objectId != ((const char *)NULL) ? objectId : "(null)");

        }

        unsigned long int i = (unsigned long int)0;
        for( ; !(i >= *nb_returned); i = i + 1ul)
        {
          const _Bool is_container = i < nb_containers;
          struct _IXML_Element *elem;
          struct _IXML_Node *return_value_ixmlNodeList_item$6;
          return_value_ixmlNodeList_item$6=ixmlNodeList_item(is_container != (_Bool)0 ? containers : items, is_container != (_Bool)0 ? i : i - nb_containers);
          elem = (struct _IXML_Element *)return_value_ixmlNodeList_item$6;
          struct _DIDLObject *o;
          o=DIDLObject_Create(result_context, elem, is_container);
          if(!(o == ((struct _DIDLObject *)NULL)))
            PtrArray_Append(objects, (void *)o);

        }
        if(!(containers == ((struct _IXML_NodeList *)NULL)))
          ixmlNodeList_free(containers);

        if(!(items == ((struct _IXML_NodeList *)NULL)))
          ixmlNodeList_free(items);

        ixmlDocument_free(subdoc);
      }
    }

  cleanup:
    ;
    ixmlDocument_free(doc);
    doc = (struct _IXML_Document *)(void *)0;
    _talloc_free(tmp_ctx, "content_dir.c:241");
    tmp_ctx = (void *)0;
    if(!(rc == 0))
    {
      *nb_matched = (unsigned long int)0;
      *nb_returned = *nb_matched;
    }

    return rc;
  }
}

// BrowseOrSearchAll
// file content_dir.c line 255
static struct _ContentDir_Children * BrowseOrSearchAll(struct _ContentDir *cds, void *result_context, const char *objectId, const char * const criteria)
{
  struct _ContentDir_Children *result;
  void *return_value_talloc_named_const$1;
  return_value_talloc_named_const$1=talloc_named_const(result_context, sizeof(struct _ContentDir_Children) /*8ul*/ , "ContentDir_Children");
  result = (struct _ContentDir_Children *)return_value_talloc_named_const$1;
  unsigned long int nb_matched;
  unsigned long int nb_returned;
  signed int rc;
  signed int nb_retry;
  unsigned long int return_value_PtrArray_GetSize$2;
  signed int tmp_post$3;
  if(result == ((struct _ContentDir_Children *)NULL))
    return (struct _ContentDir_Children *)(void *)0;

  else
  {
    struct _PtrArray *objects;
    objects=PtrArray_Create((void *)result);
    if(!(objects == ((struct _PtrArray *)NULL)))
    {
      *result = (struct _ContentDir_Children){ .objects=objects };
      do
      {
        signed int (*_talloc_destructor_fn)(struct _ContentDir_Children *) = DestroyChildren;
        _talloc_set_destructor((const void *)result, (signed int (*)(void *))_talloc_destructor_fn);
      }
      while((_Bool)0);
      nb_matched = (unsigned long int)0;
      nb_returned = (unsigned long int)0;
      rc=BrowseOrSearchAction(cds, (void *)objects, objectId, criteria, (unsigned long int)0, (unsigned long int)0, &nb_matched, &nb_returned, objects);
      if(!(rc == 0))
        goto FAIL;

      nb_retry = 0;
      do
      {
        return_value_PtrArray_GetSize$2=PtrArray_GetSize(objects);
        if(return_value_PtrArray_GetSize$2 >= nb_matched)
          break;

        tmp_post$3 = nb_retry;
        nb_retry = nb_retry + 1;
        if(tmp_post$3 >= 2)
          break;

        unsigned long int return_value_PtrArray_GetSize$4;
        return_value_PtrArray_GetSize$4=PtrArray_GetSize(objects);
        Log_Printf((enum Log_Level)LOG_WARNING, "ContentDir_BrowseId ObjectId=%s : got %d results, expected %d. Retry %d ...", objectId, (signed int)return_value_PtrArray_GetSize$4, (signed int)nb_matched, nb_retry);
        unsigned long int return_value_PtrArray_GetSize$5;
        return_value_PtrArray_GetSize$5=PtrArray_GetSize(objects);
        unsigned long int return_value_PtrArray_GetSize$6;
        return_value_PtrArray_GetSize$6=PtrArray_GetSize(objects);
        rc=BrowseOrSearchAction(cds, (void *)objects, objectId, criteria, return_value_PtrArray_GetSize$5, nb_matched - return_value_PtrArray_GetSize$6, &nb_matched, &nb_returned, objects);
        if(nb_returned == 0ul || !(rc == 0))
          break;

      }
      while((_Bool)1);
      return result;
    }

    else
    {

    FAIL:
      ;
      _talloc_free((void *)result, "content_dir.c:332");
      return (struct _ContentDir_Children *)(void *)0;
    }
  }
}

// BrowseOrSearchWithCache
// file content_dir.c line 383
static const struct _ContentDir_BrowseResult * BrowseOrSearchWithCache(struct _ContentDir *cds, void *result_context, const char *objectId, const char * const criteria)
{
  if(criteria == ((const char *)NULL) || objectId == ((const char *)NULL) || cds == ((struct _ContentDir *)NULL))
    return (const struct _ContentDir_BrowseResult *)(void *)0;

  else
  {
    struct _ContentDir_BrowseResult *br;
    void *return_value_talloc_named_const$1;
    return_value_talloc_named_const$1=talloc_named_const(result_context, sizeof(struct _ContentDir_BrowseResult) /*16ul*/ , "BrowseResult");
    br = (struct _ContentDir_BrowseResult *)return_value_talloc_named_const$1;
    if(br == ((struct _ContentDir_BrowseResult *)NULL))
      return (const struct _ContentDir_BrowseResult *)(void *)0;

    else
    {
      *br = (struct _ContentDir_BrowseResult){ .cds=cds, .children=((struct _ContentDir_Children *)NULL) };
      if(cds->cache == ((struct _Cache *)NULL))
        br->children=BrowseOrSearchAll(cds, (void *)br, objectId, criteria);

      else
      {
        pthread_mutex_lock(&cds->cache_mutex);
        signed long int br$array_size0;
        unsigned long int return_value_strlen$2;
        return_value_strlen$2=strlen(objectId);
        unsigned long int return_value_strlen$3;
        return_value_strlen$3=strlen(criteria);
        br$array_size0 = (signed long int)(return_value_strlen$2 + return_value_strlen$3 + (unsigned long int)2);
        char key_buffer[br$array_size0];
        const char *key;
        if(criteria == CRITERIA_BROWSE_CHILDREN)
          key = objectId;

        else
        {
          sprintf(key_buffer, "%s\t%s", objectId, criteria);
          key = key_buffer;
        }
        struct _ContentDir_Children **cp;
        void **return_value_Cache_Get$4;
        return_value_Cache_Get$4=Cache_Get(cds->cache, key);
        cp = (struct _ContentDir_Children **)return_value_Cache_Get$4;
        if(!(cp == ((struct _ContentDir_Children **)NULL)))
        {
          if(!(*cp == ((struct _ContentDir_Children *)NULL)))
            br->children = *cp;

          else
          {
            br->children=BrowseOrSearchAll(cds, (void *)cds->cache, objectId, criteria);
            *cp = br->children;
          }
        }

        if(!(br->children == ((struct _ContentDir_Children *)NULL)))
        {
          talloc_increase_ref_count((const void *)br->children);
          do
          {
            signed int (*_talloc_destructor_fn)(struct _ContentDir_BrowseResult *) = DestroyResult;
            _talloc_set_destructor((const void *)br, (signed int (*)(void *))_talloc_destructor_fn);
          }
          while((_Bool)0);
        }

        pthread_mutex_unlock(&cds->cache_mutex);
      }
      if(br->children == ((struct _ContentDir_Children *)NULL))
      {
        _talloc_free((void *)br, "content_dir.c:441");
        br = (struct _ContentDir_BrowseResult *)(void *)0;
      }

      return br;
    }
  }
}

// BrowseRoot
// file djfs.c line 350
static struct _VFS_BrowseStatus BrowseRoot(struct _VFS * const vfs, const char * const sub_path, const struct _VFS_Query * const query, void * const tmp_ctx)
{
  struct _DJFS * const self = (struct _DJFS *)vfs;
  struct _VFS_BrowseStatus _s = { .rc=0, .ptr=sub_path };
  const struct _VFS_Query * const _q = query;
  _Bool return_value_PtrArray_IteratorLoop$1;
  _Bool return_value_PtrArray_IteratorLoop$3;
  _Bool tmp_if_expr$12;
  if(_s.ptr == ((const char *)NULL) || _q == ((const struct _VFS_Query *)NULL))
    _s.rc = -14;

  else
  {
    const char *_p;
    const struct _PtrArray *names;
    names=DeviceList_GetDevicesNames(tmp_ctx);
    _p = "devices";
    if(!(_p == ((const char *)NULL)))
    {
      if(!(*_p == 0))
      {
        if((signed int)*_s.ptr == 0)
          _s.rc=vfs_dir_add_entry$link1(_p, 8, _q);

        else
        {
          _p=vfs_match_start_of_path(_s.ptr, _p);
          if(!(_p == ((const char *)NULL)))
          {
            _s.ptr = _p;
            if(!((signed int)*_s.ptr == 0))
              _s.rc = -20;

            else
              _s.rc=vfs_file_begin(8, _q);
            if(!(_s.rc == 0))
              goto cleanup;

            if(!(names == ((const struct _PtrArray *)NULL)))
            {
              char *str;
              str=talloc_strdup(tmp_ctx, "");
              const char *devName;
              do
                if(!(names == ((const struct _PtrArray *)NULL)))
                {
                  struct _PtrArray_Iterator __iterdevName;
                  __iterdevName=PtrArray_IteratorStart(names);
                  do
                  {
                    return_value_PtrArray_IteratorLoop$1=PtrArray_IteratorLoop(&__iterdevName);
                    if(return_value_PtrArray_IteratorLoop$1 == (_Bool)0)
                      break;

                    void *return_value_PtrArray_IteratorGetElement$2;
                    return_value_PtrArray_IteratorGetElement$2=PtrArray_IteratorGetElement(&__iterdevName);
                    devName = (const char *)return_value_PtrArray_IteratorGetElement$2;
                    str=talloc_asprintf_append(str, "%s\n", devName);
                  }
                  while((_Bool)1);
                }

              while((_Bool)0);
              vfs_file_set_string(str, (enum _FileBuffer_StringAlloc)FILE_BUFFER_STRING_STEAL, "djfs.c:366", _q);
            }

          }

          if((signed int)*_s.ptr == 0)
            goto cleanup;

        }
      }

    }

    const char *BrowseRoot$$1$$2$$1$$devName;
    do
      if(!(names == ((const struct _PtrArray *)NULL)))
      {
        struct _PtrArray_Iterator BrowseRoot$$1$$2$$1$$2$$1$$__iterdevName;
        BrowseRoot$$1$$2$$1$$2$$1$$__iterdevName=PtrArray_IteratorStart(names);
        do
        {
          return_value_PtrArray_IteratorLoop$3=PtrArray_IteratorLoop(&BrowseRoot$$1$$2$$1$$2$$1$$__iterdevName);
          if(return_value_PtrArray_IteratorLoop$3 == (_Bool)0)
            break;

          void *return_value_PtrArray_IteratorGetElement$4;
          return_value_PtrArray_IteratorGetElement$4=PtrArray_IteratorGetElement(&BrowseRoot$$1$$2$$1$$2$$1$$__iterdevName);
          BrowseRoot$$1$$2$$1$$devName = (const char *)return_value_PtrArray_IteratorGetElement$4;
          _p = BrowseRoot$$1$$2$$1$$devName;
          if(!(_p == ((const char *)NULL)))
          {
            if(!(*_p == 0))
            {
              if((signed int)*_s.ptr == 0)
              {
                _s.rc=vfs_dir_add_entry$link1(_p, 4, _q);
                if(!(_s.rc == 0))
                  goto cleanup;

              }

              else
              {
                _p=vfs_match_start_of_path(_s.ptr, _p);
                if(!(_p == ((const char *)NULL)))
                {
                  _s.ptr = _p;
                  if((signed int)*_s.ptr == 0)
                  {
                    _s.rc=vfs_dir_begin(_q);
                    if(!(_s.rc == 0))
                      goto cleanup;

                  }

                  if(!((DJFS_SHOW_DEBUG & (signed int)self->flags) == 0))
                  {
                    _p = ".status";
                    if(!(_p == ((const char *)NULL)))
                    {
                      if(!(*_p == 0))
                      {
                        if((signed int)*_s.ptr == 0)
                          _s.rc=vfs_dir_add_entry$link1(_p, 10, _q);

                        else
                        {
                          _p=vfs_match_start_of_path(_s.ptr, _p);
                          if(!(_p == ((const char *)NULL)))
                          {
                            _s.ptr = _p;
                            if(!((signed int)*_s.ptr == 0))
                              _s.rc = -20;

                            else
                              _s.rc=vfs_file_begin(10, _q);
                            if(!(_s.rc == 0))
                              goto cleanup;

                            const char *BrowseRoot$$1$$2$$1$$2$$1$$1$$1$$1$$2$$1$$2$$1$$1$$2$$1$$1$$str;
                            BrowseRoot$$1$$2$$1$$2$$1$$1$$1$$1$$2$$1$$2$$1$$1$$2$$1$$1$$str=talloc_asprintf(tmp_ctx, "../%s/%s/status", (const void *)".debug", BrowseRoot$$1$$2$$1$$devName);
                            vfs_symlink_set_path(BrowseRoot$$1$$2$$1$$2$$1$$1$$1$$1$$2$$1$$2$$1$$1$$2$$1$$1$$str, _q);
                          }

                          if((signed int)*_s.ptr == 0)
                            goto cleanup;

                        }
                      }

                    }

                  }

                  const struct _ContentDir_BrowseResult *current = (const struct _ContentDir_BrowseResult *)(void *)0;
                  do
                  {
                    struct _Service *__serv;
                    __serv=_DeviceList_LockService(BrowseRoot$$1$$2$$1$$devName, "urn:schemas-upnp-org:service:ContentDirectory:1");
                    const struct _Object_Class *return_value__ContentDir_GetBaseClass$5;
                    return_value__ContentDir_GetBaseClass$5=_ContentDir_GetBaseClass();
                    _Bool return_value__Object_IsA$6;
                    return_value__Object_IsA$6=_Object_IsA((const void *)__serv, return_value__ContentDir_GetBaseClass$5);
                    current=ContentDir_Browse(return_value__Object_IsA$6 != (_Bool)0 ? (struct _ContentDir *)__serv : (struct _ContentDir *)(void *)0, tmp_ctx, "0", (enum _ContentDir_BrowseFlag)CONTENT_DIR_BROWSE_METADATA);
                    _DeviceList_UnlockService(__serv);
                  }
                  while((_Bool)0);
                  if(!(current == ((const struct _ContentDir_BrowseResult *)NULL)))
                  {
                    if(!(current->children == ((struct _ContentDir_Children *)NULL)))
                    {
                      const struct _DIDLObject *root;
                      void *return_value_PtrArray_GetHead$7;
                      return_value_PtrArray_GetHead$7=PtrArray_GetHead(current->children->objects);
                      root = (const struct _DIDLObject *)return_value_PtrArray_GetHead$7;
                      if(!(root == ((const struct _DIDLObject *)NULL)))
                      {
                        do
                        {
                          struct _Service *BrowseRoot$$1$$2$$1$$2$$1$$1$$1$$1$$2$$1$$2$$3$$1$$1$$__serv;
                          BrowseRoot$$1$$2$$1$$2$$1$$1$$1$$1$$2$$1$$2$$3$$1$$1$$__serv=_DeviceList_LockService(BrowseRoot$$1$$2$$1$$devName, "urn:schemas-upnp-org:service:ContentDirectory:1");
                          const struct _Object_Class *return_value__ContentDir_GetBaseClass$8;
                          return_value__ContentDir_GetBaseClass$8=_ContentDir_GetBaseClass();
                          _Bool return_value__Object_IsA$9;
                          return_value__Object_IsA$9=_Object_IsA((const void *)BrowseRoot$$1$$2$$1$$2$$1$$1$$1$$1$$2$$1$$2$$3$$1$$1$$__serv, return_value__ContentDir_GetBaseClass$8);
                          current=ContentDir_Browse(return_value__Object_IsA$9 != (_Bool)0 ? (struct _ContentDir *)BrowseRoot$$1$$2$$1$$2$$1$$1$$1$$1$$2$$1$$2$$3$$1$$1$$__serv : (struct _ContentDir *)(void *)0, tmp_ctx, "0", (enum _ContentDir_BrowseFlag)CONTENT_DIR_BROWSE_DIRECT_CHILDREN);
                          _DeviceList_UnlockService(BrowseRoot$$1$$2$$1$$2$$1$$1$$1$$1$$2$$1$$2$$3$$1$$1$$__serv);
                        }
                        while((_Bool)0);
                        _Bool searchable = self->search_hist != (struct _PtrArray *)(void *)0;
                        if(!(searchable == (_Bool)0))
                        {
                          if(!(root->searchable == (_Bool)0))
                          {
                            const char *caps = (const char *)(void *)0;
                            do
                            {
                              struct _Service *BrowseRoot$$1$$2$$1$$2$$1$$1$$1$$1$$2$$1$$2$$3$$1$$2$$1$$__serv;
                              BrowseRoot$$1$$2$$1$$2$$1$$1$$1$$1$$2$$1$$2$$3$$1$$2$$1$$__serv=_DeviceList_LockService(BrowseRoot$$1$$2$$1$$devName, "urn:schemas-upnp-org:service:ContentDirectory:1");
                              const struct _Object_Class *return_value__ContentDir_GetBaseClass$10;
                              return_value__ContentDir_GetBaseClass$10=_ContentDir_GetBaseClass();
                              _Bool return_value__Object_IsA$11;
                              return_value__Object_IsA$11=_Object_IsA((const void *)BrowseRoot$$1$$2$$1$$2$$1$$1$$1$$1$$2$$1$$2$$3$$1$$2$$1$$__serv, return_value__ContentDir_GetBaseClass$10);
                              caps=ContentDir_GetSearchCapabilities(return_value__Object_IsA$11 != (_Bool)0 ? (struct _ContentDir *)BrowseRoot$$1$$2$$1$$2$$1$$1$$1$$1$$2$$1$$2$$3$$1$$2$$1$$__serv : (struct _ContentDir *)(void *)0, (void *)0);
                              _DeviceList_UnlockService(BrowseRoot$$1$$2$$1$$2$$1$$1$$1$$1$$2$$1$$2$$3$$1$$2$$1$$__serv);
                            }
                            while((_Bool)0);
                            if(!(caps == ((const char *)NULL)) && !(searchable == (_Bool)0))
                              tmp_if_expr$12 = *caps != 0 ? (_Bool)1 : (_Bool)0;

                            else
                              tmp_if_expr$12 = (_Bool)0;
                            searchable = tmp_if_expr$12;
                          }

                        }

                        if(!(current == ((const struct _ContentDir_BrowseResult *)NULL)))
                        {
                          if(!(current->children == ((struct _ContentDir_Children *)NULL)))
                          {
                            if((signed int)*_s.ptr == 0)
                            {
                              _s=BrowseChildren(self, _s.ptr, query, tmp_ctx, BrowseRoot$$1$$2$$1$$devName, root, searchable, (const char *)(void *)0, current->children);
                              if(!(_s.rc == 0))
                                goto cleanup;

                            }

                            else
                            {
                              _s=BrowseChildren(self, _s.ptr, query, tmp_ctx, BrowseRoot$$1$$2$$1$$devName, root, searchable, (const char *)(void *)0, current->children);
                              if((signed int)*_s.ptr == 0 || !(_s.rc == 0))
                                goto cleanup;

                            }
                          }

                        }

                      }

                    }

                  }

                  if(!((signed int)*_s.ptr == 0))
                  {
                    _s.rc = -2;
                    goto cleanup;
                  }

                }

                if((signed int)*_s.ptr == 0)
                  goto cleanup;

              }
            }

          }

        }
        while((_Bool)1);
      }

    while((_Bool)0);
  }

cleanup:
  ;
  return _s;
}

// BrowseSearchDir
// file djfs.c line 90
static struct _VFS_BrowseStatus BrowseSearchDir(struct _DJFS * const self, const char * const sub_path, const struct _VFS_Query * const query, void * const tmp_ctx, const char * const devName, const struct _DIDLObject * const parent, const char * const criteria_start)
{
  union anonymous$3 *lock = (union anonymous$3 *)(void *)0;
  struct _VFS_BrowseStatus _s = { .rc=0, .ptr=sub_path };
  const struct _VFS_Query * const _q = query;
  char *tmp_post$3;
  _Bool return_value_PtrArray_IteratorLoop$4;
  char *tmp_if_expr$7;
  char *return_value_talloc_asprintf$6;
  _Bool tmp_if_expr$11;
  _Bool tmp_if_expr$13;
  _Bool tmp_if_expr$14;
  char *tmp_if_expr$16;
  char *return_value_talloc_asprintf$15;
  char *tmp_if_expr$18;
  char *return_value_talloc_asprintf$17;
  unsigned long int return_value_PtrArray_GetSize$32;
  char *tmp_statement_expression$23;
  char *tmp_statement_expression$25;
  const char *tmp_if_expr$29;
  char *tmp_statement_expression$27;
  if(_s.ptr == ((const char *)NULL) || _q == ((const struct _VFS_Query *)NULL))
    _s.rc = -14;

  else
  {
    const char *_p = "search_help.txt";
    if(!(_p == ((const char *)NULL)))
    {
      if(!(*_p == 0))
      {
        if((signed int)*_s.ptr == 0)
          _s.rc=vfs_dir_add_entry$link1(_p, 8, _q);

        else
        {
          _p=vfs_match_start_of_path(_s.ptr, _p);
          if(!(_p == ((const char *)NULL)))
          {
            _s.ptr = _p;
            if(!((signed int)*_s.ptr == 0))
              _s.rc = -20;

            else
              _s.rc=vfs_file_begin(8, _q);
            if(!(_s.rc == 0))
              goto cleanup;

            static const char * const str = "\nSearching\n+++++++++\n\nWhen a \"_search\" directory is present, it indicates that the UPnP device \nsupports some kind of searching.\n\nSearching is done in \"_search\" by entering a sub-directory name with\na specific search syntax : see \"Basic search\" and \"Advanced search\" below.\n\nEach search (basic or advanced) can be refined using the sub-directories \n\"_and\" and \"_or\" found in results. These are equivalent to a single search \ngrouping the previous search and the new search using the 'and' and 'or' \nlogical operators.\nFor example:\n\t$ cd 's1'\n\t$ cd _and\n\t$ cd 's2'\nis equivalent to searching for both criteria 's1' and 's2'.\n\nWhen a search returns no result, no sub-directory is created :\n   $ cd _search/non_existant_criteria\ncd: _search/non_existant_criteria: No such file or directory\n\n\n\nA) Basic search\n===============\n\nSearching is done in \"_search\" by entering a sub-directory name with only\n*one* word. This word is searched in common properties for the objects \n(title, creator name, artists names, album name). It is ok to match only \na part of these strings, and the match is case-insensitive.\n\nFor example, to search for all objects where the title, creator, artist or\nalbum names contain the string \"head\" :\n   $ cd _search\n   $ cd head\n\nThis would match for example any track by group \"Motorhead\", or a track named \n\"Can't Get You Out Of My Head\", or any track from album \"Head First\".\n\nTo further refine the search, it is possible to use the \"_and\" and \"_or\"\nsub-directories, as explained above.\n\nStarting from the preceding example, to keep only only the \"Motorhead\" tracks,\none could do :\n   $ cd _and\n   $ cd mot\n\n\n\nB) Advanced search\n==================\n\nSearching is done in \"_search\" by entering a sub-directory name with\na specific search syntax : see \"Search criteria\" below.\n\nFor example, to search for all objects where the title contains the string \"by\"\n(note the single-quote around the criteria necessary for the shell) :\n   $ cd _search\n   $ ls 'dc:title contains \"by\"'\n\nSee more examples at the end of this document.\n\n\nAdvanced search criteria syntax \n-------------------------------\n\nSearchCriteria directory names shall follow the following pseudo-grammar\n(this grammar follows the SearchCriteria defined in the UPnP AV standard, \nas defined in the \"ContentDirectory:1 Service Template Version 1.01\" document).\n\nCharacters between 'single quote' must appear literally.\n\n\nsearchCriteria\t::= searchExp | '*'\nsearchExp    \t::= relExp | \n\t\t    searchExp space+ logicalOp space+ searchExp | \n\t\t    '(' space* searchExp space* ')' \nlogicalOp\t::= 'and' | 'or' \nrelExp\t     \t::= property space+ binOp space+ quotedString | \n\t\t    property space+ existsOp space+ boolean \nbinOp\t    \t::= relOp | stringOp \nrelOp\t\t::= '=' | '!=' | '<' | '<=' | '>' | '>=' \nstringOp\t::= 'contains' | 'doesNotContain' | 'derivedfrom' \nexistsOp\t::= 'exists' \nboolean\t\t::= 'true' | 'false' \nspace\t\t::= ' '\nquotedString\t::= (1)\nproperty\t::= (2)\n\n\n(1) a \"quotedString\" is a string enclosed within double-quotes '\"'. Inside such\n    strings, double-quote themselves shall be escaped e.g. represented as \\\" .\n\n(2) a \"property\" represents a characteristic of an UPnP object. \n    Standard property names are normally defined, but are not necessarily \n    implemented by all devices (also, non-standard properties can be added) :\n    see \"Search capabilities\" below for examples of standard properties.\n\n\nNotes on search criteria\n------------------------\n\n- Search criteria expressions contain special characters that shall be quoted\n  when used on the shell command line (e.g. '*', '<', '(', '\"', ...). The\n  easiest method is to enclose the whole criteria within 'single quote',\n  as in the example in this document.\n\n- double-quote (\") shall be escaped within quotedString e.g. represented as \\\"\n\n- Operator precedence, highest to lowest, is: \n\tdouble quoting \n\t( ) \n\tbinOp, existsOp \n\t'and' \n\t'or' \n  For example,\n\t$ cd 's1 and s2 or s3 or s4 and s5' \n  is equivalent to\n\t$ cd '((s1 and s2) or s3) or (s4 and s5)'\n\n- Return all : the special criteria '*' means \"find everything\", or \n  \"return all objects that exist beneath the selected starting directory\"\n  (beware of performances on large collections). \n\n- Property existence is queried for by using the 'exists' binary operator. \n  The criteria \"actor exists true\" is true for every object that has at least \n  one occurrence of the actor property. It is false for any object that has no\n  actor property. Similarly, the criteria \"actor exists false\" is false for \n  every object that has at least one occurrence of the actor property. It is \n  true for any object that has no actor property. \n\n- Property omission : any property value query (as distinct from an existence \n  query) applied to an object that does not have that property, evaluates \n  to false. \n\n- Class derivation (see \"Class hierarchy\" below) : the 'derivedfrom' operator\n  allows to query the existence of objects whose class is derived from some \n  base class specification. For example 'upnp:class derivedfrom \"object.item\"'\n  is true for all objects whose class is, or begins with, \"object.item\".\n\n- Numeric comparisons : when an operator in a criteria is a relOp ('=', '<',\n  '<=', ...), the quotedString can be a decimal integer (sequence of decimal\n  digits with an optional leading sign '+' or '-'). The comparison will be\n  done numerically if the actual property is also a decimal integer. In all \n  other cases, the comparison is done by treating both values as strings.\n\n- String comparisons : all operators when applied to strings use \n  case-insensitive comparisons. \n\n\nAdvanced search capabilities\n----------------------------\n\nThe \"search_capabilities\" file is a list of property names that can be used \nin search criteria. A wild-card ('*') indicates that the device supports \nsearch queries using all tags present in the device.\n\nSome common properties are (not necessarily supported by all UPnP devices) :\n\ndc:title \tName of the object\ndc:creator\tPrimary content creator or owner of the object \nupnp:artist\tName of an artist\nupnp:genre\tName of the genre to which an object belongs \nupnp:album\tTitle of the album to which the object belongs\ndc:date\t\tDate of the object, of the form \"YYYY-MM-DD\" (ISO 8601 format) \nupnp:class\tClass of the object\n@id\t\tAn identifier for the object, unique within the UPnP device.\n\n\nAdvanced class hierarchy\n------------------------\n\nA class is used to assign a type to an object in an UPnP device, and identifies\nthe set of properties present on that object. Classes are organized in a \nhierarchy with certain classes being derived from others as in a typical object\noriented system. At the root of the class hierarchy is the 'object' base class.\n\nEach class is named using a string in \"dotted\" notation:\n     derivedName ::= ( 'object' | derivedName ) '.' shortName \nSome example are 'object', 'object.item', 'object.container', \n'object.item.audioItem.musicTrack' and 'object.container.album.musicAlbum'.\n\nThe UPnP AV standard defines a number of class descriptions that are derived \nfrom either the 'item' or 'container' classes : see figure below (only \nshortNames are displayed in the tree).\nDevice vendors are free to extend this list with other classes or properties.\n \n \n  object\n    |___ item\n    |     |___ audioItem\n    |     |      |___ musicTrack\n    |     |      |___ audioBroadcast\n    |     |      \\___ audioBook\n    |     |\n    |     |___ videoItem\n    |     |      |___ movie\n    |     |      |___ videoBroadcast\n    |     |      \\___ musicVideoClip\n    |     |\n    |     |___ imageItem\n    |     |      \\___ photo\n    |     |\n    |     |___ playlistItem\n    |     |\n    |     \\___ textItem\n    |\n    \\___ container\n          |___ album\n          |      |___ musicAlbum\n          |      \\___ photoAlbum\n          |\n          |___ genre\n          |      |___ musicGenre\n          |      \\___ movieGenre\n          |\n          |___ playlistContainer\n          |\n          |___ person\n          |      \\___ musicArtist\n          |\n          |___ storageSystem\n          |___ storageVolume\n          \\___ storageFolder\n \n\n\nNotes on these standard classes :\n\n- 'item' : a derived class of 'object' used to represent \"atomic\" \n  content objects, i.e. object that don't contain other objects, for example, \n  a music track on an audio CD\n\n- 'container' : a derived class of 'object' used to represent \n  containers e.g. a music album. In djmount, each container is mapped to a \n  directory.\n  \n- 'audioItem' : a piece of content that, when rendered, generates some audio. \n  Note that movies, TV broadcasts, etc., that also contain an audio track \n  are excluded from this definition : those objects should be classified \n  under 'videoItem' (see below).\n  Standard derived classes are 'musicTrack' (audio that should be interpreted  \n  as music e.g. a song), 'audioBroadcast' (a continuous stream of audio that \n  should be interpreted as an audio broadcast) and 'audioBook' (audio that\n  should be interpreted as a book).\n\n- 'videoItem' : a piece of content that, when rendered, generates some video. \n  Standard derived classes are 'movie' (video that should be interpreted \n  as a movie), 'videoBroadcast' (a continuous stream of video that should be \n  interpreted as a broadcast e.g. a conventional TV channel or a Webcast),\n  and 'musicVideoClip' (video that should be interpreted as a clip supporting \n  a song).\n\n- 'imageItem' : a piece of content that, when rendered, generates some still \n  image. A standard derived class is 'photo' (image that should be interpreted \n  as a photo, as opposed to, for example, an icon).\n\n- 'playlistItem' : a playable sequence of resources. It is different from \n  'musicAlbum' in the sense that a 'playlistItem' may contain a mix \n  of audio, video and images and is typically created by a user, while an \n  'album' is typically a fixed published sequence of songs (e.g. an audio CD).\n  A 'playlistItem' item is typically a reference to a playlist file \n  (e.g. an external M3U file). \n\n- 'textItem' : a piece of content that, when rendered, is readable as text.\n\n- 'album' : an ordered collection of 'objects'. \n  Standard derived classes are 'musicAlbum' (which contains items of class \n  'musicTrack', or 'sub'-albums of class 'musicAlbum', e.g. an audio-CD) \n  and 'photoAlbum' (which contains items of class 'photo', or 'sub'-albums \n  of class 'photoAlbum').\n\n- 'genre' : an unordered collection of 'objects' that \"belong\" to the genre,\n  in a loose sense. \n  Standard derived classes are 'musicGenre' (genre which should be interpreted\n  as a \"style of music\" e.g. \"Rock\") and 'movieGenre' (genre which should be \n  interpreted as a \"style of movies\" e.g. \"Western\").\n\n- 'playlistContainer' : a collection of 'objects'. It is different from \n  'musicAlbum' in the sense that a 'playlistContainer' may contain a mix \n  of audio, video and images and is typically created by a user, while an\n  'album' is typically a fixed published sequence of songs (e.g. an audio CD).\n  \n- 'person' : an unordered collection of 'objects' that \"belong\" to some people,\n  in a loose sense. A standard derived class is 'musicArtist' (a music artist).\n\n- 'storageSystem' : a potentially heterogeneous collection of storage media. \n  An example is a CD Jukebox.\n\n- 'storageVolume' : some physical storage unit of a single type. Examples are \n  a Hard Disk Drive, a CD-Audio disc, or a Flash memory card.\n\n- 'storageFolder' : a collection of objects stored on some storage medium. \n  Examples are a directory on a Hard Disk Drive, or a directory on CD-Rom.\n\n\n\nAdvanced search examples \n------------------------\n\na) Search for all content by singer Renaud\n   i.e. search for all objects where 'dc:creator' is Renaud\n\n   $ cd _search\n   $ ls 'dc:creator = \"Renaud\"'\n\n   Note that this is equivalent to 'dc:creator = \"renaud\"' because comparisons\n   are case-insensitive.\n\n \nb) Search for all photos taken during October 2005\n   i.e. search for all photo objects whose 'dc:date' is in October 2005\n\n   $ cd _search\n   $ ls 'upnp:class = \"object.item.imageItem.photo\" and ( dc:date >= \"2005-10-01\" and dc:date <= \"2005-10-31\" )'\n\n   Note that this is equivalent to the following breakdown, using \"_and\"\n   sub-directories :\n\n   $ cd _search\n   $ cd 'upnp:class = \"object.item.imageItem.photo\"'\n   $ cd _and\n   $ ls 'dc:date >= \"2005-10-01\"/_and/dc:date <= \"2005-10-31\"'\n\n\nc) Search for all objects in the My Photos folder containing the word Paris\n   i.e. search for all objects where the 'dc:title' contains Paris under the \n   \"My Photos\" directory.\n\n   $ cd \"My Photos/_search\"\n   $ ls 'dc:title contains \"Paris\"'\n\n\nd) Search for all album objects in the device\n   i.e. search for all objects that are derived from object.container.album. \n\n   $ cd _search\n   $ ls 'upnp:class derivedfrom \"object.container.album\"'\n\n\n\n";
            vfs_file_set_string(str, (enum _FileBuffer_StringAlloc)FILE_BUFFER_STRING_EXTERN, "djfs.c:102", _q);
          }

          if((signed int)*_s.ptr == 0)
            goto cleanup;

        }
      }

    }

    _p = "search_capabilities";
    if(!(_p == ((const char *)NULL)))
    {
      if(!(*_p == 0))
      {
        if((signed int)*_s.ptr == 0)
          _s.rc=vfs_dir_add_entry$link1(_p, 8, _q);

        else
        {
          _p=vfs_match_start_of_path(_s.ptr, _p);
          if(!(_p == ((const char *)NULL)))
          {
            _s.ptr = _p;
            if(!((signed int)*_s.ptr == 0))
              _s.rc = -20;

            else
              _s.rc=vfs_file_begin(8, _q);
            if(!(_s.rc == 0))
              goto cleanup;

            const char *caps = (const char *)(void *)0;
            do
            {
              struct _Service *BrowseSearchDir$$1$$2$$1$$2$$2$$1$$1$$1$$__serv;
              BrowseSearchDir$$1$$2$$1$$2$$2$$1$$1$$1$$__serv=_DeviceList_LockService(devName, "urn:schemas-upnp-org:service:ContentDirectory:1");
              const struct _Object_Class *return_value__ContentDir_GetBaseClass$1;
              return_value__ContentDir_GetBaseClass$1=_ContentDir_GetBaseClass();
              _Bool return_value__Object_IsA$2;
              return_value__Object_IsA$2=_Object_IsA((const void *)BrowseSearchDir$$1$$2$$1$$2$$2$$1$$1$$1$$__serv, return_value__ContentDir_GetBaseClass$1);
              caps=ContentDir_GetSearchCapabilities(return_value__Object_IsA$2 != (_Bool)0 ? (struct _ContentDir *)BrowseSearchDir$$1$$2$$1$$2$$2$$1$$1$$1$$__serv : (struct _ContentDir *)(void *)0, (void *)0);
              _DeviceList_UnlockService(BrowseSearchDir$$1$$2$$1$$2$$2$$1$$1$$1$$__serv);
            }
            while((_Bool)0);
            if(!(caps == ((const char *)NULL)))
            {
              if(!(*caps == 0))
              {
                char *BrowseSearchDir$$1$$2$$1$$2$$2$$1$$1$$2$$str;
                BrowseSearchDir$$1$$2$$1$$2$$2$$1$$1$$2$$str=talloc_asprintf(tmp_ctx, "%s\n", caps);
                char *s = BrowseSearchDir$$1$$2$$1$$2$$2$$1$$1$$2$$str;
                for( ; !((signed int)*s == 0); s = s + 1l)
                  if((signed int)*s == 44)
                    *s = (char)10;

                vfs_file_set_string(BrowseSearchDir$$1$$2$$1$$2$$2$$1$$1$$2$$str, (enum _FileBuffer_StringAlloc)FILE_BUFFER_STRING_STEAL, "djfs.c:117", _q);
              }

            }

          }

          if((signed int)*_s.ptr == 0)
            goto cleanup;

        }
      }

    }

    char *parent_path;
    parent_path=talloc_strdup(tmp_ctx, query->path);
    char *pp = parent_path + (_s.ptr - query->path);
    do
    {
      tmp_post$3 = pp;
      pp = pp - 1l;
      *tmp_post$3 = (char)0;
    }
    while((signed int)*pp == 47);
    struct _SearchHistory *BrowseSearchDir$$1$$2$$1$$h;
    pthread_mutex_lock(&self->search_hist_mutex);
    lock = &self->search_hist_mutex;
    do
      if(!(self->search_hist == ((struct _PtrArray *)NULL)))
      {
        struct _PtrArray_Iterator __iterh;
        __iterh=PtrArray_IteratorStart(self->search_hist);
        do
        {
          return_value_PtrArray_IteratorLoop$4=PtrArray_IteratorLoop(&__iterh);
          if(return_value_PtrArray_IteratorLoop$4 == (_Bool)0)
            break;

          void *return_value_PtrArray_IteratorGetElement$5;
          return_value_PtrArray_IteratorGetElement$5=PtrArray_IteratorGetElement(&__iterh);
          BrowseSearchDir$$1$$2$$1$$h = (struct _SearchHistory *)return_value_PtrArray_IteratorGetElement$5;
          signed int return_value_strcmp$10;
          return_value_strcmp$10=strcmp(parent_path, BrowseSearchDir$$1$$2$$1$$h->parent_path);
          if(return_value_strcmp$10 == 0)
          {
            _p = BrowseSearchDir$$1$$2$$1$$h->basename;
            if(!(_p == ((const char *)NULL)))
            {
              if(!(*_p == 0))
              {
                if((signed int)*_s.ptr == 0)
                {
                  _s.rc=vfs_dir_add_entry$link1(_p, 4, _q);
                  if(!(_s.rc == 0))
                    goto cleanup;

                }

                else
                {
                  _p=vfs_match_start_of_path(_s.ptr, _p);
                  if(!(_p == ((const char *)NULL)))
                  {
                    _s.ptr = _p;
                    if((signed int)*_s.ptr == 0)
                    {
                      _s.rc=vfs_dir_begin(_q);
                      if(!(_s.rc == 0))
                        goto cleanup;

                    }

                    vfs_set_time(BrowseSearchDir$$1$$2$$1$$h->time, _q);
                    const char *BrowseSearchDir$$1$$2$$1$$4$$1$$1$$1$$1$$1$$2$$1$$2$$full_criteria;
                    if(!(criteria_start == ((const char *)NULL)))
                    {
                      return_value_talloc_asprintf$6=talloc_asprintf(tmp_ctx, "%s%s)", criteria_start, BrowseSearchDir$$1$$2$$1$$h->criteria);
                      tmp_if_expr$7 = return_value_talloc_asprintf$6;
                    }

                    else
                      tmp_if_expr$7 = BrowseSearchDir$$1$$2$$1$$h->criteria;
                    BrowseSearchDir$$1$$2$$1$$4$$1$$1$$1$$1$$1$$2$$1$$2$$full_criteria = tmp_if_expr$7;
                    const struct _ContentDir_BrowseResult *res;
                    do
                    {
                      struct _Service *__serv;
                      __serv=_DeviceList_LockService(devName, "urn:schemas-upnp-org:service:ContentDirectory:1");
                      const struct _Object_Class *return_value__ContentDir_GetBaseClass$8;
                      return_value__ContentDir_GetBaseClass$8=_ContentDir_GetBaseClass();
                      _Bool return_value__Object_IsA$9;
                      return_value__Object_IsA$9=_Object_IsA((const void *)__serv, return_value__ContentDir_GetBaseClass$8);
                      res=ContentDir_Search(return_value__Object_IsA$9 != (_Bool)0 ? (struct _ContentDir *)__serv : (struct _ContentDir *)(void *)0, tmp_ctx, parent->id, BrowseSearchDir$$1$$2$$1$$4$$1$$1$$1$$1$$1$$2$$1$$2$$full_criteria);
                      _DeviceList_UnlockService(__serv);
                    }
                    while((_Bool)0);
                    if(!(res == ((const struct _ContentDir_BrowseResult *)NULL)))
                    {
                      if((signed int)*_s.ptr == 0)
                      {
                        _s=BrowseChildren(self, _s.ptr, query, tmp_ctx, devName, parent, (const _Bool)1, BrowseSearchDir$$1$$2$$1$$4$$1$$1$$1$$1$$1$$2$$1$$2$$full_criteria, res->children);
                        if(!(_s.rc == 0))
                          goto cleanup;

                      }

                      else
                      {
                        _s=BrowseChildren(self, _s.ptr, query, tmp_ctx, devName, parent, (const _Bool)1, BrowseSearchDir$$1$$2$$1$$4$$1$$1$$1$$1$$1$$2$$1$$2$$full_criteria, res->children);
                        if((signed int)*_s.ptr == 0 || !(_s.rc == 0))
                          goto cleanup;

                      }
                    }

                    if(!((signed int)*_s.ptr == 0))
                    {
                      _s.rc = -2;
                      goto cleanup;
                    }

                  }

                  if((signed int)*_s.ptr == 0)
                    goto cleanup;

                }
              }

            }

          }

        }
        while((_Bool)1);
      }

    while((_Bool)0);
    char *new_basename;
    new_basename=talloc_strdup(tmp_ctx, _s.ptr);
    if(!(new_basename == ((char *)NULL)))
    {
      if(!(*new_basename == 0))
      {
        _Bool simplified = (_Bool)1;
        char *t = new_basename;
        do
        {
          if(!((signed int)*t == 0))
            tmp_if_expr$11 = (signed int)*t != 47 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$11 = (_Bool)0;
          if(!tmp_if_expr$11)
            break;

          const unsigned short int **return_value___ctype_b_loc$12;
          return_value___ctype_b_loc$12=__ctype_b_loc();
          if(!((8192 & (signed int)(*return_value___ctype_b_loc$12)[(signed long int)(signed int)*t]) == 0))
            tmp_if_expr$13 = (_Bool)1;

          else
            tmp_if_expr$13 = (signed int)*t == 42 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$13)
            tmp_if_expr$14 = (_Bool)1;

          else
            tmp_if_expr$14 = (signed int)*t == 34 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$14)
            simplified = (_Bool)0;

          t = t + 1l;
        }
        while((_Bool)1);
        *t = (char)0;
        char *new_criteria;
        if(!(simplified == (_Bool)0))
        {
          return_value_talloc_asprintf$15=talloc_asprintf(tmp_ctx, "(dc:title contains \"%s\") or (dc:creator contains \"%s\") or (upnp:artist contains \"%s\") or (upnp:album contains \"%s\")", new_basename, new_basename, new_basename, new_basename);
          tmp_if_expr$16 = return_value_talloc_asprintf$15;
        }

        else
          tmp_if_expr$16 = new_basename;
        new_criteria = tmp_if_expr$16;
        Log_Printf((enum Log_Level)LOG_DEBUG, "new search criteria '%s' (inside '%s')", new_criteria, criteria_start != ((const char *)NULL) ? criteria_start : "(null)");
        const char *full_criteria;
        if(!(criteria_start == ((const char *)NULL)))
        {
          return_value_talloc_asprintf$17=talloc_asprintf(tmp_ctx, "%s%s)", criteria_start, new_criteria);
          tmp_if_expr$18 = return_value_talloc_asprintf$17;
        }

        else
          tmp_if_expr$18 = new_criteria;
        full_criteria = tmp_if_expr$18;
        const struct _ContentDir_BrowseResult *BrowseSearchDir$$1$$2$$1$$5$$res;
        do
        {
          struct _Service *BrowseSearchDir$$1$$2$$1$$5$$2$$__serv;
          BrowseSearchDir$$1$$2$$1$$5$$2$$__serv=_DeviceList_LockService(devName, "urn:schemas-upnp-org:service:ContentDirectory:1");
          const struct _Object_Class *return_value__ContentDir_GetBaseClass$19;
          return_value__ContentDir_GetBaseClass$19=_ContentDir_GetBaseClass();
          _Bool return_value__Object_IsA$20;
          return_value__Object_IsA$20=_Object_IsA((const void *)BrowseSearchDir$$1$$2$$1$$5$$2$$__serv, return_value__ContentDir_GetBaseClass$19);
          BrowseSearchDir$$1$$2$$1$$5$$res=ContentDir_Search(return_value__Object_IsA$20 != (_Bool)0 ? (struct _ContentDir *)BrowseSearchDir$$1$$2$$1$$5$$2$$__serv : (struct _ContentDir *)(void *)0, tmp_ctx, parent->id, full_criteria);
          _DeviceList_UnlockService(BrowseSearchDir$$1$$2$$1$$5$$2$$__serv);
        }
        while((_Bool)0);
        if(!(BrowseSearchDir$$1$$2$$1$$5$$res == ((const struct _ContentDir_BrowseResult *)NULL)))
        {
          if(!(BrowseSearchDir$$1$$2$$1$$5$$res->children == ((struct _ContentDir_Children *)NULL)))
          {
            return_value_PtrArray_GetSize$32=PtrArray_GetSize$link1(BrowseSearchDir$$1$$2$$1$$5$$res->children->objects);
            if(return_value_PtrArray_GetSize$32 >= 1ul)
            {
              struct _SearchHistory *h;
              void *return_value_talloc_named_const$21;
              return_value_talloc_named_const$21=talloc_named_const((const void *)self->search_hist, sizeof(struct _SearchHistory) /*40ul*/ , "SearchHistory");
              h = (struct _SearchHistory *)return_value_talloc_named_const$21;
              if(!(h == ((struct _SearchHistory *)NULL)))
              {
                self->search_hist_serial = self->search_hist_serial + 1u;
                signed long int return_value_time$22;
                return_value_time$22=time((signed long int *)(void *)0);
                char *__talloc_steal_ret;
                void *return_value__talloc_steal_loc$24;
                return_value__talloc_steal_loc$24=_talloc_steal_loc((const void *)h, (const void *)parent_path, "djfs.c:197");
                __talloc_steal_ret = (char *)return_value__talloc_steal_loc$24;
                tmp_statement_expression$23 = __talloc_steal_ret;
                char *BrowseSearchDir$$1$$2$$1$$5$$3$$1$$2$$__talloc_steal_ret;
                void *return_value__talloc_steal_loc$26;
                return_value__talloc_steal_loc$26=_talloc_steal_loc((const void *)h, (const void *)new_basename, "djfs.c:198");
                BrowseSearchDir$$1$$2$$1$$5$$3$$1$$2$$__talloc_steal_ret = (char *)return_value__talloc_steal_loc$26;
                tmp_statement_expression$25 = BrowseSearchDir$$1$$2$$1$$5$$3$$1$$2$$__talloc_steal_ret;
                *h = (struct _SearchHistory){ .serial=self->search_hist_serial, .time=return_value_time$22, .parent_path=tmp_statement_expression$23,
    .basename=tmp_statement_expression$25,
    .criteria=((const char *)NULL) };
                if(new_criteria == new_basename)
                  tmp_if_expr$29 = h->basename;

                else
                {
                  char *BrowseSearchDir$$1$$2$$1$$5$$3$$1$$3$$__talloc_steal_ret;
                  void *return_value__talloc_steal_loc$28;
                  return_value__talloc_steal_loc$28=_talloc_steal_loc((const void *)h, (const void *)new_criteria, "djfs.c:201");
                  BrowseSearchDir$$1$$2$$1$$5$$3$$1$$3$$__talloc_steal_ret = (char *)return_value__talloc_steal_loc$28;
                  tmp_statement_expression$27 = BrowseSearchDir$$1$$2$$1$$5$$3$$1$$3$$__talloc_steal_ret;
                  tmp_if_expr$29 = tmp_statement_expression$27;
                }
                h->criteria = tmp_if_expr$29;
                PtrArray_Append(self->search_hist, (void *)h);
                unsigned long int return_value_PtrArray_GetSize$31;
                return_value_PtrArray_GetSize$31=PtrArray_GetSize$link1(self->search_hist);
                if(!(self->search_hist_size >= return_value_PtrArray_GetSize$31))
                {
                  struct _SearchHistory *oldest;
                  void *return_value_PtrArray_RemoveAt$30;
                  return_value_PtrArray_RemoveAt$30=PtrArray_RemoveAt(self->search_hist, (unsigned long int)0);
                  oldest = (struct _SearchHistory *)return_value_PtrArray_RemoveAt$30;
                  _talloc_free((void *)oldest, "djfs.c:207");
                }

                _p = new_basename;
                if(!(_p == ((const char *)NULL)))
                {
                  if(!(*_p == 0))
                  {
                    if((signed int)*_s.ptr == 0)
                    {
                      _s.rc=vfs_dir_add_entry$link1(_p, 4, _q);
                      if(!(_s.rc == 0))
                        goto cleanup;

                    }

                    else
                    {
                      _p=vfs_match_start_of_path(_s.ptr, _p);
                      if(!(_p == ((const char *)NULL)))
                      {
                        _s.ptr = _p;
                        if((signed int)*_s.ptr == 0)
                        {
                          _s.rc=vfs_dir_begin(_q);
                          if(!(_s.rc == 0))
                            goto cleanup;

                        }

                        vfs_set_time(h->time, _q);
                        if((signed int)*_s.ptr == 0)
                        {
                          _s=BrowseChildren(self, _s.ptr, query, tmp_ctx, devName, parent, (const _Bool)1, full_criteria, BrowseSearchDir$$1$$2$$1$$5$$res->children);
                          if(!(_s.rc == 0))
                            goto cleanup;

                        }

                        else
                        {
                          _s=BrowseChildren(self, _s.ptr, query, tmp_ctx, devName, parent, (const _Bool)1, full_criteria, BrowseSearchDir$$1$$2$$1$$5$$res->children);
                          if((signed int)*_s.ptr == 0 || !(_s.rc == 0))
                            goto cleanup;

                        }
                        if(!((signed int)*_s.ptr == 0))
                        {
                          _s.rc = -2;
                          goto cleanup;
                        }

                      }

                      if((signed int)*_s.ptr == 0)
                        goto cleanup;

                    }
                  }

                }

              }

            }

          }

        }

      }

    }

  }

cleanup:
  ;
  if(!(lock == ((union anonymous$3 *)NULL)))
    pthread_mutex_unlock(lock);

  return _s;
}

// Cache_Create
// file cache.h line 66
struct _Cache * Cache_Create(void *talloc_context, unsigned long int size, signed long int max_age, void (*free_expired_data)(const char *, void *))
{
  if(!(size >= 1ul))
  {
    Log_Printf((enum Log_Level)LOG_ERROR, "Cache: invalid size : %ld\n", (signed long int)size);
    return (struct _Cache *)(void *)0;
  }

  else
  {
    struct _Cache *cache;
    void *return_value_talloc_named_const$1;
    return_value_talloc_named_const$1=talloc_named_const(talloc_context, sizeof(struct _Cache) /*56ul*/ , "Cache");
    cache = (struct _Cache *)return_value_talloc_named_const$1;
    if(cache == ((struct _Cache *)NULL))
      return (struct _Cache *)(void *)0;

    else
    {
      *cache = (struct _Cache){ .size=size, .max_age=max_age, .next_clean=(signed long int)0, .table=((struct hash_table *)NULL),
    .free_expired_data=free_expired_data, .nr_access=0,
    .nr_hit=0, .nr_expired=0 };
      cache->table=hash_initialize(size, (const struct hash_tuning *)(void *)0, cache_hasher, cache_comparator, (void (*)(void *))(void *)0);
      if(cache->table == ((struct hash_table *)NULL))
      {
        Log_Printf((enum Log_Level)LOG_ERROR, "Cache: can't create table");
        _talloc_free((void *)cache, "cache.c:424");
        return (struct _Cache *)(void *)0;
      }

      else
      {
        do
        {
          signed int (*_talloc_destructor_fn)(struct _Cache *) = cache_destroy;
          _talloc_set_destructor((const void *)cache, (signed int (*)(void *))_talloc_destructor_fn);
        }
        while((_Bool)0);
        return cache;
      }
    }
  }
}

// Cache_Get
// file cache.h line 79
void ** Cache_Get(struct _Cache *cache, const char *key)
{
  _Bool tmp_if_expr$1;
  if(key == ((const char *)NULL) || cache == ((struct _Cache *)NULL))
  {
    Log_Printf((enum Log_Level)LOG_ERROR, "Cache_Get NULL key or cache");
    return (void **)(void *)0;
  }

  else
  {
    cache->nr_access = cache->nr_access + 1;
    signed long int now;
    now=time((signed long int *)(void *)0);
    _Bool hit;
    struct _Entry *ce;
    ce=cache_get(cache, key, &hit);
    if(ce == ((struct _Entry *)NULL))
    {
      Log_Printf((enum Log_Level)LOG_ERROR, "Cache_Get error, key='%s'", key != ((const char *)NULL) ? key : "(null)");
      return (void **)(void *)0;
    }

    else
    {
      if(!(hit == (_Bool)0))
      {
        if(cache->max_age == 0l)
          tmp_if_expr$1 = (_Bool)1;

        else
          tmp_if_expr$1 = now <= ce->rip ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$1)
        {
          Log_Printf((enum Log_Level)LOG_DEBUG, "CACHE_HIT (key='%s')", key);
          cache->nr_hit = cache->nr_hit + 1;
        }

        else
        {
          Log_Printf((enum Log_Level)LOG_DEBUG, "CACHE_EXPIRED (key='%s')", key);
          cache->nr_expired = cache->nr_expired + 1;
          if(!(cache->free_expired_data == ((void (*)(const char *, void *))NULL)))
            cache->free_expired_data(ce->key, ce->data);

          ce->rip = now + cache->max_age;
          ce->data = (void *)0;
        }
      }

      else
      {
        Log_Printf((enum Log_Level)LOG_DEBUG, "CACHE_NEW (key='%s')", key);
        ce->rip = now + cache->max_age;
        ce->data = (void *)0;
        cache_expire_entries(cache, now);
      }
      return &ce->data;
    }
  }
}

// Cache_GetNrEntries
// file cache.c line 292
inline signed long int Cache_GetNrEntries(const struct _Cache * const cache)
{
  if(cache == ((const struct _Cache *)NULL))
    return (signed long int)-1;

  else
  {
    unsigned long int return_value_hash_get_n_entries$1;
    return_value_hash_get_n_entries$1=hash_get_n_entries(cache->table);
    return (signed long int)return_value_hash_get_n_entries$1;
  }
}

// Cache_GetStatusString
// file cache.h line 119
char * Cache_GetStatusString(const struct _Cache * const cache, void *result_context, const char *spacer)
{
  if(cache == ((const struct _Cache *)NULL))
    return (char *)(void *)0;

  else
  {
    char *p;
    p=talloc_strdup(result_context, "");
    if(spacer == ((const char *)NULL))
      spacer = "";

    tpr(&p, "%s+- Cache size      = %ld\n", spacer, (signed long int)cache->size);
    tpr(&p, "%s+- Cache max age   = ", spacer);
    if(cache->max_age >= 1l)
      tpr(&p, "%ld seconds\n", (signed long int)cache->max_age);

    else
      tpr(&p, "disabled\n");
    signed long int nb_cached;
    nb_cached=Cache_GetNrEntries(cache);
    tpr(&p, "%s+- Cached entries  = %ld (%d%%)\n", spacer, nb_cached, (signed int)((unsigned long int)(nb_cached * (signed long int)100) / cache->size));
    tpr(&p, "%s+- Cache access    = %d\n", spacer, cache->nr_access);
    if(cache->nr_access >= 1)
    {
      tpr(&p, "%s     +- hits       = %d (%.1f%%)\n", spacer, cache->nr_hit, (float)(((double)cache->nr_hit * 100.0) / (double)cache->nr_access));
      tpr(&p, "%s     +- expired    = %d (%.1f%%)\n", spacer, cache->nr_expired, (float)(((double)cache->nr_expired * 100.0) / (double)cache->nr_access));
    }

    return p;
  }
}

// Charset_ConvertString
// file charset.c line 303
char * Charset_ConvertString(enum _Charset_Direction dir, const char * const str, char *buffer, unsigned long int bufsize, void * const talloc_context)
{
  if(str == ((const char *)NULL))
    return (char *)(void *)0;

  else
    if(!((signed int)g_state == INITIALIZED_NOT_UTF8))
      return (char *)str;

    else
      if((signed int)dir >= NB_CONVERTERS || !((signed int)dir >= 0))
        return (char *)(void *)0;

      else
      {
        struct _Converter * const cvt = g_converters + (signed long int)dir;
        char *result = (char *)(void *)0;
        pthread_mutex_lock(&cvt->mutex);
        iconv(cvt->cd, (char ** restrict )(void *)0, (unsigned long int *)(void *)0, (char ** restrict )(void *)0, (unsigned long int *)(void *)0);
        const char *inbuf = str;
        unsigned long int inbytesleft;
        inbytesleft=strlen(str);
        const unsigned long int extra = (const unsigned long int)16;
        const unsigned long int needed_size = inbytesleft * (unsigned long int)2 + extra;
        result = buffer;
        if(buffer == ((char *)NULL))
        {
          bufsize = needed_size;
          void *return_value_talloc_named_const$1;
          return_value_talloc_named_const$1=talloc_named_const(talloc_context, bufsize, "charset.c:339");
          result = (char *)return_value_talloc_named_const$1;
          if(result == ((char *)NULL))
            goto FAIL;

        }

        char *outbuf = result;
        unsigned long int outbytesleft = bufsize;
        while(inbytesleft >= 1ul)
        {
          signed int save_errno;
          save_errno=convert(cvt, &inbuf, &inbytesleft, &outbuf, &outbytesleft);
          if(!(save_errno == 0) && !(save_errno == 7))
          {
            if(!(result == buffer))
              _talloc_free((void *)result, "charset.c:352");

            result = (char *)(void *)0;
            goto FAIL;
          }

          if(save_errno == 7 || !(outbytesleft >= extra))
          {
            const unsigned long int converted = (const unsigned long int)(outbuf - result);
            const unsigned long int incr = inbytesleft * (unsigned long int)2 + extra;
            bufsize = bufsize + incr;
            if(result == buffer)
            {
              char *ptr;
              void *return_value_talloc_named_const$2;
              return_value_talloc_named_const$2=talloc_named_const(talloc_context, bufsize, "charset.c:365");
              ptr = (char *)return_value_talloc_named_const$2;
              if(ptr == ((char *)NULL))
                goto FAIL;

              void *return_value_memcpy$3;
              return_value_memcpy$3=memcpy((void *)ptr, (const void *)result, converted);
              result = (char *)return_value_memcpy$3;
            }

            else
            {
              void *return_value__talloc_realloc$4;
              return_value__talloc_realloc$4=_talloc_realloc(talloc_context, (void *)result, bufsize, "charset.c:371");
              result = (char *)return_value__talloc_realloc$4;
            }
            if(result == ((char *)NULL))
              goto FAIL;

            outbytesleft = outbytesleft + incr;
            outbuf = result + (signed long int)converted;
          }

        }
        iconv(cvt->cd, (char ** restrict )(void *)0, (unsigned long int *)(void *)0, &outbuf, &outbytesleft);
        if(!(outbytesleft >= 1ul))
          result[(signed long int)(bufsize - (unsigned long int)1)] = (char)0;

        else
        {
          const signed int nb_nuls = (const signed int)(outbytesleft < (unsigned long int)4 ? outbytesleft : (unsigned long int)4);
          memset((void *)outbuf, 0, (unsigned long int)nb_nuls);
          outbuf = outbuf + (signed long int)nb_nuls;
          outbytesleft = outbytesleft - (unsigned long int)nb_nuls;
        }
        if(outbytesleft >= 33ul && !(result == buffer))
        {
          void *return_value__talloc_realloc$5;
          return_value__talloc_realloc$5=_talloc_realloc(talloc_context, (void *)result, (unsigned long int)(outbuf - result), "charset.c:402");
          result = (char *)return_value__talloc_realloc$5;
        }


      FAIL:
        ;
        pthread_mutex_unlock(&cvt->mutex);
        return result;
      }
}

// Charset_Finish
// file charset.c line 483
signed int Charset_Finish()
{
  signed int *return_value___errno_location$1;
  if((signed int)g_state == NOT_INITIALIZED)
    return 114;

  else
  {
    signed int rc = 0;
    signed int i = 0;
    for( ; !(i >= NB_CONVERTERS); i = i + 1)
    {
      struct _Converter * const cvt = g_converters + (signed long int)i;
      pthread_mutex_destroy(&cvt->mutex);
      signed int return_value_iconv_close$2;
      return_value_iconv_close$2=iconv_close(cvt->cd);
      if(!(return_value_iconv_close$2 == 0))
      {
        return_value___errno_location$1=__errno_location();
        rc = *return_value___errno_location$1;
      }

      cvt->cd = (void *)-1;
    }
    g_state = (enum anonymous$6)NOT_INITIALIZED;
    return rc;
  }
}

// Charset_Initialize
// file charset.c line 96
signed int Charset_Initialize(const char *charset)
{
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$6;
  signed int *return_value___errno_location$8;
  char *return_value_strerror$9;
  if(!((signed int)g_state == NOT_INITIALIZED))
    return 114;

  else
  {
    char buffer[128l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    if(charset == ((const char *)NULL))
      tmp_if_expr$3 = (_Bool)1;

    else
      tmp_if_expr$3 = (signed int)*charset == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$3)
    {
      char *s;
      s=getenv("KDE_UTF8_FILENAMES");
      if(!(s == ((char *)NULL)))
        charset = "UTF-8";

      else
      {
        s=getenv("G_FILENAME_ENCODING");
        if(!(s == ((char *)NULL)))
        {
          strncpy(s, buffer, sizeof(char [128l]) /*128ul*/  - (unsigned long int)1);
          buffer[(signed long int)(sizeof(char [128l]) /*128ul*/  - (unsigned long int)1)] = (char)0;
          unsigned long int return_value_strcspn$1;
          return_value_strcspn$1=strcspn(buffer, ",;:");
          buffer[(signed long int)return_value_strcspn$1] = (char)0;
          signed int return_value_strcmp$2;
          return_value_strcmp$2=strcmp(buffer, "@locale");
          if(!(return_value_strcmp$2 == 0))
            charset = buffer;

        }

      }
    }

    if(charset == ((const char *)NULL))
      tmp_if_expr$5 = (_Bool)1;

    else
      tmp_if_expr$5 = (signed int)*charset == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$5)
    {
      setlocale(6, "");
      char *return_value_nl_langinfo$4;
      return_value_nl_langinfo$4=nl_langinfo(14);
      strncpy(buffer, return_value_nl_langinfo$4, sizeof(char [128l]) /*128ul*/  - (unsigned long int)1);
      buffer[(signed long int)(sizeof(char [128l]) /*128ul*/  - (unsigned long int)1)] = (char)0;
      charset = buffer;
    }

    if(charset == ((const char *)NULL))
      tmp_if_expr$6 = (_Bool)1;

    else
      tmp_if_expr$6 = (signed int)*charset == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$6)
      charset = "UTF-8";

    _Bool utf8;
    signed int return_value_strcasecmp$7;
    return_value_strcasecmp$7=strcasecmp(charset, "UTF-8");
    utf8 = return_value_strcasecmp$7 == 0;
    signed int rc = 0;
    if(utf8 == (_Bool)0)
    {
      signed int i = 0;
      for( ; !(i >= NB_CONVERTERS); i = i + 1)
      {
        struct _Converter * const cvt = g_converters + (signed long int)i;
        if(i == CHARSET_TO_UTF8)
          cvt->cd=iconv_open("UTF-8", charset);

        else
          if(i == CHARSET_FROM_UTF8)
            cvt->cd=iconv_open(charset, "UTF-8");

          else
            rc = 38;
        if(cvt->cd == (void *)-1)
        {
          return_value___errno_location$8=__errno_location();
          rc = *return_value___errno_location$8;
        }

        if(rc == 0)
          pthread_mutex_init(&cvt->mutex, (const union anonymous$5 *)(void *)0);

      }
    }

    if(!(rc == 0))
    {
      return_value_strerror$9=strerror(rc);
      Log_Printf((enum Log_Level)LOG_ERROR, "Charset : error initialising charset='%s' : %s", charset != ((const char *)NULL) ? charset : "(null)", return_value_strerror$9);
    }

    else
    {
      Log_Printf((enum Log_Level)LOG_INFO, "Charset : successfully initialised charset='%s'", charset != ((const char *)NULL) ? charset : "(null)");
      g_state = (enum anonymous$6)(utf8 != (_Bool)0 ? INITIALIZED_UTF8 : INITIALIZED_NOT_UTF8);
    }
    return rc;
  }
}

// Charset_IsConverting
// file charset.c line 226
_Bool Charset_IsConverting()
{
  return (signed int)g_state == INITIALIZED_NOT_UTF8;
}

// Charset_PrintString
// file charset.c line 416
signed int Charset_PrintString(enum _Charset_Direction dir, const char * const str, struct _IO_FILE * const stream)
{
  signed int return_value_fputs$1;
  if(str == ((const char *)NULL) || stream == ((struct _IO_FILE *)NULL))
    return -1;

  else
    if(!((signed int)g_state == INITIALIZED_NOT_UTF8))
    {
      return_value_fputs$1=fputs(str, stream);
      return return_value_fputs$1;
    }

    else
      if((signed int)dir >= NB_CONVERTERS || !((signed int)dir >= 0))
        return -1;

      else
      {
        struct _Converter * const cvt = g_converters + (signed long int)dir;
        pthread_mutex_lock(&cvt->mutex);
        iconv(cvt->cd, (char ** restrict )(void *)0, (unsigned long int *)(void *)0, (char ** restrict )(void *)0, (unsigned long int *)(void *)0);
        signed int rc = 0;
        const char *inbuf = str;
        unsigned long int inbytesleft;
        inbytesleft=strlen(str);
        /* tag-#anon#lUN[S64'_align'||lARR8192{S8}$S8$'bytes'|] */
union anonymous$7
{
  // _align
  signed long int _align;
  // bytes
  char bytes[8192l];
};

/* */
        ;
        union anonymous$7 buffer;
        while(inbytesleft >= 1ul)
        {
          char *outbuf = buffer.bytes;
          unsigned long int outbytesleft = sizeof(char [8192l]) /*8192ul*/ ;
          signed int save_errno;
          save_errno=convert(cvt, &inbuf, &inbytesleft, &outbuf, &outbytesleft);
          if(!(buffer.bytes >= outbuf))
          {
            unsigned long int return_value_fwrite$2;
            return_value_fwrite$2=fwrite((const void *)buffer.bytes, (unsigned long int)(outbuf - buffer.bytes), (unsigned long int)1, stream);
            rc = (signed int)return_value_fwrite$2;
            if(!(rc >= 1))
            {
              rc = -1;
              break;
            }

          }

          if(!(save_errno == 0) && !(save_errno == 7))
          {
            rc = -1;
            break;
          }

        }
        if(rc >= 0)
        {
          char *Charset_PrintString$$1$$2$$outbuf = buffer.bytes;
          unsigned long int Charset_PrintString$$1$$2$$outbytesleft = sizeof(char [8192l]) /*8192ul*/ ;
          iconv(cvt->cd, (char ** restrict )(void *)0, (unsigned long int *)(void *)0, &Charset_PrintString$$1$$2$$outbuf, &Charset_PrintString$$1$$2$$outbytesleft);
          if(!(buffer.bytes >= Charset_PrintString$$1$$2$$outbuf))
          {
            unsigned long int return_value_fwrite$3;
            return_value_fwrite$3=fwrite((const void *)buffer.bytes, (unsigned long int)(Charset_PrintString$$1$$2$$outbuf - buffer.bytes), (unsigned long int)1, stream);
            rc = (signed int)return_value_fwrite$3;
            if(!(rc >= 1))
              rc = -1;

          }

        }

        pthread_mutex_unlock(&cvt->mutex);
        return rc;
      }
}

// CheckSubscriptionsLoop
// file device_list.c line 933
static void * CheckSubscriptionsLoop(void *arg)
{
  while((_Bool)1)
  {
    sleep(CHECK_SUBSCRIPTIONS_TIMEOUT);
    VerifyTimeouts((signed int)CHECK_SUBSCRIPTIONS_TIMEOUT);
  }
}

// CommandLoop
// file test_upnp.c line 459
static void * CommandLoop(void *arg)
{
  while((_Bool)1)
  {
    char cmdline[100l];
    printf("\n>> ");
    fflush(stdout);
    fgets(cmdline, (signed int)sizeof(char [100l]) /*100ul*/ , stdin);
    if(!(cmdline[0l] == 0))
      process_command(cmdline);

  }
}

// ContentDir_Browse
// file content_dir.c line 453
const struct _ContentDir_BrowseResult * ContentDir_Browse(struct _ContentDir *cds, void *result_context, const char *objectId, enum _ContentDir_BrowseFlag browse_flag)
{
  const struct _ContentDir_BrowseResult *return_value_BrowseOrSearchWithCache$1;
  return_value_BrowseOrSearchWithCache$1=BrowseOrSearchWithCache(cds, result_context, objectId, (signed int)browse_flag == CONTENT_DIR_BROWSE_METADATA ? CRITERIA_BROWSE_METADATA : CRITERIA_BROWSE_CHILDREN);
  return return_value_BrowseOrSearchWithCache$1;
}

// ContentDir_Create
// file content_dir.h line 121
struct _ContentDir * ContentDir_Create(void *talloc_context, signed int ctrlpt_handle, struct _IXML_Element *serviceDesc, const char *base_url)
{
  struct _ContentDir *self;
  const struct _Object_Class *return_value__ContentDir_GetBaseClass$1;
  return_value__ContentDir_GetBaseClass$1=_ContentDir_GetBaseClass();
  struct _Object *return_value__Object_check_alloc$2;
  return_value__Object_check_alloc$2=_Object_check_alloc(talloc_context, return_value__ContentDir_GetBaseClass$1);
  self = (struct _ContentDir *)return_value__Object_check_alloc$2;
  if(!(self == ((struct _ContentDir *)NULL)))
  {
    struct _Service *__super;
    __super=Service_Create((void *)self, ctrlpt_handle, serviceDesc, base_url);
    if(__super == ((struct _Service *)NULL))
    {
      Log_Print((enum Log_Level)LOG_ERROR, "ContentDir: error in Service_Create");
      self = (struct _ContentDir *)(void *)0;
    }

  }

  (void)self;
  if(!(self == ((struct _ContentDir *)NULL)))
  {
    self->cache=Cache_Create((void *)self, (unsigned long int)1024, (signed long int)60, cache_free_expired_data);
    if(self->cache == ((struct _Cache *)NULL))
      goto error;

    pthread_mutex_init(&self->cache_mutex, (const union anonymous$5 *)(void *)0);
    return self;
  }

  else
  {

  error:
    ;
    Log_Print((enum Log_Level)LOG_ERROR, "ContentDir_Create error");
    if(!(self == ((struct _ContentDir *)NULL)))
      _talloc_free((void *)self, "content_dir.c:612");

    return (struct _ContentDir *)(void *)0;
  }
}

// ContentDir_GetSearchCapabilities
// file content_dir.c line 467
const char * ContentDir_GetSearchCapabilities(struct _ContentDir *self, void *unused)
{
  struct _Service *tmp_if_expr$1;
  const char *tmp_if_expr$3;
  if(self == ((struct _ContentDir *)NULL))
    return (const char *)(void *)0;

  else
  {
    if(self->search_caps == ((const char *)NULL))
    {
      struct _IXML_Document *doc = (struct _IXML_Document *)(void *)0;
      signed int rc;
      if(!(self == ((struct _ContentDir *)NULL)))
        tmp_if_expr$1 = &self->_.super;

      else
        tmp_if_expr$1 = (struct _Service *)(void *)0;
      rc=Service_SendActionVa(tmp_if_expr$1, &doc, "GetSearchCapabilities", (void *)0, (void *)0);
      if(rc == 0 && !(doc == ((struct _IXML_Document *)NULL)))
      {
        const char *return_value_XMLUtil_FindFirstElementValue$2;
        return_value_XMLUtil_FindFirstElementValue$2=XMLUtil_FindFirstElementValue(&doc->n, "SearchCaps", (const _Bool)1, (const _Bool)1);
        self->search_caps=talloc_strdup((const void *)self, return_value_XMLUtil_FindFirstElementValue$2);
        if(!(self->search_caps == ((const char *)NULL)))
          tmp_if_expr$3 = self->search_caps;

        else
          tmp_if_expr$3 = "(null)";
        Log_Printf((enum Log_Level)LOG_DEBUG, "ContentDir_GetSearchCapabilities = '%s'", tmp_if_expr$3);
      }

      ixmlDocument_free(doc);
    }

    return self->search_caps;
  }
}

// ContentDir_Search
// file content_dir.c line 500
const struct _ContentDir_BrowseResult * ContentDir_Search(struct _ContentDir *cds, void *result_context, const char *objectId, const char *criteria)
{
  Log_Printf((enum Log_Level)LOG_DEBUG, "ContentDir_Search objectId='%s' criteria='%s'", objectId != ((const char *)NULL) ? objectId : "(null)", criteria != ((const char *)NULL) ? criteria : "(null)");
  const struct _ContentDir_BrowseResult *return_value_BrowseOrSearchWithCache$1;
  return_value_BrowseOrSearchWithCache$1=BrowseOrSearchWithCache(cds, result_context, objectId, criteria);
  return return_value_BrowseOrSearchWithCache$1;
}

// ContentDir_ToService
// file content_dir.h line 64
static inline struct _Service * ContentDir_ToService(struct _ContentDir *obj)
{
  return (struct _Service *)obj;
}

// DIDLObject_Create
// file didl_object.c line 56
struct _DIDLObject * DIDLObject_Create(void *talloc_context, struct _IXML_Element *elem, _Bool is_container)
{
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$5;
  if(elem == ((struct _IXML_Element *)NULL))
  {
    Log_Printf((enum Log_Level)LOG_ERROR, "DIDLObject can't create from NULL XML Element");
    return (struct _DIDLObject *)(void *)0;
  }

  else
  {
    struct _DIDLObject *o;
    void *return_value_talloc_named_const$1;
    return_value_talloc_named_const$1=talloc_named_const(talloc_context, sizeof(struct _DIDLObject) /*56ul*/ , "DIDLObject");
    o = (struct _DIDLObject *)return_value_talloc_named_const$1;
    if(!(o == ((struct _DIDLObject *)NULL)))
    {
      *o = (struct _DIDLObject){ .is_container=is_container, .id=((char *)NULL), .title=((const char *)NULL),
    .cds_class=((char *)NULL), .searchable=(_Bool)0,
    .element=((struct _IXML_Element *)NULL), .basename=((char *)NULL) };
      struct _IXML_Node *node = (struct _IXML_Node *)(void *)0;
      struct _IXML_Node *return_value_ixmlNode_getParentNode$2;
      return_value_ixmlNode_getParentNode$2=ixmlNode_getParentNode(&elem->n);
      ixmlNode_removeChild(return_value_ixmlNode_getParentNode$2, &elem->n, &node);
      o->element = (struct _IXML_Element *)node;
      const char *return_value_ixmlElement_getAttribute$3;
      return_value_ixmlElement_getAttribute$3=ixmlElement_getAttribute(o->element, "id");
      o->id=talloc_strdup((const void *)o, return_value_ixmlElement_getAttribute$3);
      if(o->id == ((char *)NULL))
        tmp_if_expr$4 = (_Bool)1;

      else
        tmp_if_expr$4 = (signed int)o->id[(signed long int)0] == 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$4)
      {
        char *s;
        s=DIDLObject_GetElementString(o, (void *)0);
        Log_Printf((enum Log_Level)LOG_ERROR, "DIDLObject can't create with NULL or empty id, XML = %s", s);
        _talloc_free((void *)s, "didl_object.c:88");
        _talloc_free((void *)o, "didl_object.c:89");
        return (struct _DIDLObject *)(void *)0;
      }

      o->title=XMLUtil_FindFirstElementValue(node, "dc:title", (const _Bool)0, (const _Bool)1);
      if(o->title == ((const char *)NULL))
        o->title = "";

      o->basename=String_CleanFileName((void *)o, o->title);
      if((signed int)*o->basename == 0)
      {
        char *DIDLObject_Create$$1$$2$$2$$s;
        DIDLObject_Create$$1$$2$$2$$s=DIDLObject_GetElementString(o, (void *)0);
        Log_Printf((enum Log_Level)LOG_WARNING, "DIDLObject NULL or empty <dc:title>, XML = %s", DIDLObject_Create$$1$$2$$2$$s);
        _talloc_free((void *)DIDLObject_Create$$1$$2$$2$$s, "didl_object.c:104");
        _talloc_free((void *)o->basename, "didl_object.c:105");
        o->basename=talloc_asprintf((const void *)o, "-id-%s", o->id);
      }

      else
      {
        if((signed int)*o->basename == 46)
          tmp_if_expr$5 = (_Bool)1;

        else
          tmp_if_expr$5 = (signed int)o->basename[(signed long int)0] == 95 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$5)
          o->basename[(signed long int)0] = (char)45;

      }
      const char *return_value_XMLUtil_FindFirstElementValue$6;
      return_value_XMLUtil_FindFirstElementValue$6=XMLUtil_FindFirstElementValue(node, "upnp:class", (const _Bool)0, (const _Bool)1);
      o->cds_class=String_StripSpaces((void *)o, return_value_XMLUtil_FindFirstElementValue$6);
      if(o->cds_class == ((char *)NULL))
        o->cds_class = "";

      char *DIDLObject_Create$$1$$2$$s;
      DIDLObject_Create$$1$$2$$s=ixmlElement_getAttribute(o->element, "searchable");
      o->searchable=String_ToBoolean(DIDLObject_Create$$1$$2$$s, (_Bool)0);
      Log_Printf((enum Log_Level)LOG_DEBUG, "new DIDLObject : %s : id='%s' title='%s' class='%s'", is_container != (_Bool)0 ? "container" : "item", o->id, o->title, o->cds_class);
      do
      {
        signed int (*_talloc_destructor_fn)(struct _DIDLObject *) = DestroyObject;
        _talloc_set_destructor((const void *)o, (signed int (*)(void *))_talloc_destructor_fn);
      }
      while((_Bool)0);
    }

    return o;
  }
}

// DIDLObject_GetElementString
// file didl_object.c line 137
char * DIDLObject_GetElementString(const struct _DIDLObject *o, void *result_context)
{
  char *s = (char *)(void *)0;
  if(!(o == ((const struct _DIDLObject *)NULL)))
    s=XMLUtil_GetNodeString(result_context, &o->element->n);

  return s;
}

// DJFS_Create
// file djfs.c line 554
struct _DJFS * DJFS_Create(void *talloc_context, enum _DJFS_Flags flags, unsigned long int search_history_size)
{
  struct _DJFS *self;
  const struct _Object_Class *return_value__DJFS_GetBaseClass$1;
  return_value__DJFS_GetBaseClass$1=_DJFS_GetBaseClass();
  struct _Object *return_value__Object_check_alloc$2;
  return_value__Object_check_alloc$2=_Object_check_alloc(talloc_context, return_value__DJFS_GetBaseClass$1);
  self = (struct _DJFS *)return_value__Object_check_alloc$2;
  if(!(self == ((struct _DJFS *)NULL)))
  {
    struct _VFS *__super;
    __super=VFS_Create((void *)self, (_Bool)((signed int)flags & DJFS_SHOW_DEBUG));
    if(__super == ((struct _VFS *)NULL))
    {
      Log_Print((enum Log_Level)LOG_ERROR, "DJFS: error in VFS_Create");
      self = (struct _DJFS *)(void *)0;
    }

  }

  (void)self;
  if(!(self == ((struct _DJFS *)NULL)))
  {
    self->flags = flags;
    self->search_hist_size = search_history_size;
    self->search_hist_serial = (unsigned int)0;
    if(search_history_size >= 1ul)
    {
      self->search_hist=PtrArray_Create((void *)self);
      if(self->search_hist == ((struct _PtrArray *)NULL))
      {
        _talloc_free((void *)self, "djfs.c:567");
        self = (struct _DJFS *)(void *)0;
      }

      else
      {
        union anonymous$5 attr;
        pthread_mutexattr_init(&attr);
        pthread_mutexattr_setkind_np(&attr, 1);
        pthread_mutex_init(&self->search_hist_mutex, &attr);
        pthread_mutexattr_destroy(&attr);
      }
    }

  }

  return self;
}

// DJFS_ToVFS
// file djfs.h line 42
static inline struct _VFS * DJFS_ToVFS(struct _DJFS *obj)
{
  return (struct _VFS *)obj;
}

// DestroyChildren
// file content_dir.c line 88
static signed int DestroyChildren(struct _ContentDir_Children * const children)
{
  return 0;
}

// DestroyObject
// file didl_object.c line 41
static signed int DestroyObject(struct _DIDLObject * const o)
{
  if(!(o == ((struct _DIDLObject *)NULL)))
    ixmlElement_free(o->element);

  return 0;
}

// DestroyResult
// file content_dir.c line 358
static signed int DestroyResult(struct _ContentDir_BrowseResult * const br)
{
  if(!(br == ((struct _ContentDir_BrowseResult *)NULL)))
  {
    if(!(br->cds == ((struct _ContentDir *)NULL)))
    {
      if(!(br->cds->cache == ((struct _Cache *)NULL)))
        pthread_mutex_lock(&br->cds->cache_mutex);

    }

    signed int return_value__talloc_free$1;
    return_value__talloc_free$1=_talloc_free((void *)br->children, "content_dir.c:366");
    if(return_value__talloc_free$1 == 0)
      Log_Printf((enum Log_Level)LOG_DEBUG, "ContentDir CACHE_FREE");

    if(!(br->cds == ((struct _ContentDir *)NULL)))
    {
      if(!(br->cds->cache == ((struct _Cache *)NULL)))
        pthread_mutex_unlock(&br->cds->cache_mutex);

    }

    *br = (struct _ContentDir_BrowseResult){ .cds=((struct _ContentDir *)NULL), .children=((struct _ContentDir_Children *)NULL) };
  }

  return 0;
}

// DeviceList_GetDeviceStatusString
// file device_list.c line 855
char * DeviceList_GetDeviceStatusString(void *context, const char *deviceName, _Bool debug)
{
  char *ret = (char *)(void *)0;
  pthread_mutex_lock(&DeviceListMutex);
  struct _DeviceNode *devnode;
  devnode=GetDeviceNodeFromName(deviceName, (_Bool)1);
  if(!(devnode == ((struct _DeviceNode *)NULL)))
  {
    char *s;
    s=Device_GetStatusString(devnode->d, (void *)0, debug);
    ret=talloc_asprintf(context, "Device \"%s\" (expires in %d seconds)\n%s", deviceName, devnode->expires, s);
    _talloc_free((void *)s, "device_list.c:868");
  }

  pthread_mutex_unlock(&DeviceListMutex);
  return ret;
}

// DeviceList_GetDevicesNames
// file device_list.c line 789
struct _PtrArray * DeviceList_GetDevicesNames(void *context)
{
  pthread_mutex_lock(&DeviceListMutex);
  Log_Printf((enum Log_Level)LOG_DEBUG, "GetDevicesNames");
  struct _PtrArray *a;
  signed long int return_value_ListSize$1;
  return_value_ListSize$1=ListSize(&GlobalDeviceList);
  a=PtrArray_CreateWithCapacity(context, (unsigned long int)return_value_ListSize$1);
  const char *tmp_if_expr$3;
  const char *return_value_talloc_get_name$2;
  if(!(a == ((struct _PtrArray *)NULL)))
  {
    struct LISTNODE *node;
    node=ListHead(&GlobalDeviceList);
    while(!(node == ((struct LISTNODE *)NULL)))
    {
      const struct _DeviceNode * const devnode = (const struct _DeviceNode *)node->item;
      if(!(devnode == ((const struct _DeviceNode *)NULL)))
      {
        const char *name;
        if(!(devnode->d == ((struct _Device *)NULL)))
        {
          return_value_talloc_get_name$2=talloc_get_name((const void *)devnode->d);
          tmp_if_expr$3 = return_value_talloc_get_name$2;
        }

        else
          tmp_if_expr$3 = (const char *)(void *)0;
        name = tmp_if_expr$3;
        PtrArray_Append(a, (void *)(char *)(name != ((const char *)NULL) ? name : "(null)"));
      }

      node=ListNext(&GlobalDeviceList, node);
    }
  }

  pthread_mutex_unlock(&DeviceListMutex);
  return a;
}

// DeviceList_GetStatusString
// file device_list.c line 824
char * DeviceList_GetStatusString(void *context)
{
  char *ret;
  ret=talloc_strdup(context, "");
  const char *tmp_if_expr$2;
  const char *return_value_talloc_get_name$1;
  char *tmp_if_expr$3;
  if(!(ret == ((char *)NULL)))
  {
    pthread_mutex_lock(&DeviceListMutex);
    struct LISTNODE *node;
    node=ListHead(&GlobalDeviceList);
    while(!(node == ((struct LISTNODE *)NULL)))
    {
      const struct _DeviceNode * const devnode = (const struct _DeviceNode *)node->item;
      if(!(devnode == ((const struct _DeviceNode *)NULL)))
      {
        const char *name;
        if(!(devnode->d == ((struct _Device *)NULL)))
        {
          return_value_talloc_get_name$1=talloc_get_name((const void *)devnode->d);
          tmp_if_expr$2 = return_value_talloc_get_name$1;
        }

        else
          tmp_if_expr$2 = ((const char *)NULL);
        name = tmp_if_expr$2;
        if(!(devnode->deviceId == ((char *)NULL)))
          tmp_if_expr$3 = devnode->deviceId;

        else
          tmp_if_expr$3 = "(null)";
        ret=talloc_asprintf_append(ret, " %-20s -- %s\n", name != ((const char *)NULL) ? name : "(null)", tmp_if_expr$3);
      }

      node=ListNext(&GlobalDeviceList, node);
    }
    pthread_mutex_unlock(&DeviceListMutex);
  }

  return ret;
}

// DeviceList_RefreshAll
// file device_list.c line 285
signed int DeviceList_RefreshAll(_Bool remove_all)
{
  if(!(remove_all == (_Bool)0))
    DeviceList_RemoveAll();

  Log_Printf((enum Log_Level)LOG_DEBUG, "RefreshAll target=%s", g_ssdp_target != ((char *)NULL) ? g_ssdp_target : "(null)");
  signed int rc;
  rc=UpnpSearchAsync(g_ctrlpt_handle, 5, g_ssdp_target, (void *)0);
  if(!(rc == 0))
    Log_Printf((enum Log_Level)LOG_ERROR, "Error sending search request %d", rc);

  return rc;
}

// DeviceList_RemoveAll
// file device_list.c line 257
static signed int DeviceList_RemoveAll(void)
{
  pthread_mutex_lock(&DeviceListMutex);
  struct LISTNODE *node;
  node=ListHead(&GlobalDeviceList);
  while(!(node == ((struct LISTNODE *)NULL)))
  {
    struct _DeviceNode *devnode = (struct _DeviceNode *)node->item;
    node->item = NULL;
    NotifyUpdate((enum DeviceList_EventType)E_DEVICE_REMOVED, devnode);
    _talloc_free((void *)devnode, "device_list.c:269");
    node=ListNext(&GlobalDeviceList, node);
  }
  ListDestroy(&GlobalDeviceList, 0);
  ListInit(&GlobalDeviceList, ((signed int (*)(void *, void *))NULL), ((void (*)(void *))NULL));
  pthread_mutex_unlock(&DeviceListMutex);
  return 0;
}

// DeviceList_RemoveDevice
// file device_list.c line 220
signed int DeviceList_RemoveDevice(const char *deviceId)
{
  signed int rc = 0;
  pthread_mutex_lock(&DeviceListMutex);
  struct LISTNODE *node;
  node=GetDeviceListNodeFromId(deviceId);
  if(!(node == ((struct LISTNODE *)NULL)))
  {
    struct _DeviceNode *devnode = (struct _DeviceNode *)node->item;
    node->item = NULL;
    ListDelNode(&GlobalDeviceList, node, 0);
    NotifyUpdate((enum DeviceList_EventType)E_DEVICE_REMOVED, devnode);
    _talloc_free((void *)devnode, "device_list.c:233");
  }

  else
  {
    Log_Printf((enum Log_Level)LOG_WARNING, "RemoveDevice can't find Id=%s", deviceId != ((const char *)NULL) ? deviceId : "(null)");
    rc = -110;
  }
  pthread_mutex_unlock(&DeviceListMutex);
  return rc;
}

// DeviceList_SendAction
// file device_list.c line 773
struct _IXML_Document * DeviceList_SendAction(const char *deviceName, const char *serviceType, const char *actionName, signed int nb_params, const struct _StringPair *params)
{
  struct _IXML_Document *res = (struct _IXML_Document *)(void *)0;
  signed int rc = -911;
  do
  {
    struct _Service *__serv;
    __serv=_DeviceList_LockService(deviceName, serviceType);
    rc=Service_SendAction(__serv, &res, actionName, nb_params, params);
    _DeviceList_UnlockService(__serv);
  }
  while((_Bool)0);
  return rc == 0 ? res : (struct _IXML_Document *)(void *)0;
}

// DeviceList_SendActionAsync
// file device_list.c line 756
signed int DeviceList_SendActionAsync(const char *deviceName, const char *serviceType, const char *actionName, signed int nb_params, const struct _StringPair *params)
{
  signed int rc = -911;
  do
  {
    struct _Service *__serv;
    __serv=_DeviceList_LockService(deviceName, serviceType);
    rc=Service_SendActionAsync(__serv, EventHandlerCallback, actionName, nb_params, params);
    _DeviceList_UnlockService(__serv);
  }
  while((_Bool)0);
  return rc;
}

// DeviceList_Start
// file device_list.c line 946
signed int DeviceList_Start(const char *ssdp_target, void (*eventCallback)(enum DeviceList_EventType, const char *))
{
  _Bool tmp_if_expr$4;
  signed int return_value_strcmp$1;
  _Bool tmp_if_expr$3;
  char *return_value_strstr$2;
  if(ssdp_target == ((const char *)NULL))
    tmp_if_expr$4 = (_Bool)1;

  else
  {
    return_value_strcmp$1=strcmp(ssdp_target, "ssdp:all");
    if(!(return_value_strcmp$1 == 0))
    {
      return_value_strstr$2=strstr(ssdp_target, ":service:");
      tmp_if_expr$3 = return_value_strstr$2 == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$3 = (_Bool)0;
    tmp_if_expr$4 = tmp_if_expr$3 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$4)
  {
    Log_Printf((enum Log_Level)LOG_ERROR, "DeviceList : invalid or not implemented SSDP target '%s", ssdp_target != ((const char *)NULL) ? ssdp_target : "(null)");
    return -101;
  }

  else
  {
    signed int rc;
    unsigned short int port = (unsigned short int)0;
    char *ip_address = (char *)(void *)0;
    gStateUpdateFun = eventCallback;
    pthread_mutex_init(&DeviceListMutex, (const union anonymous$5 *)(void *)0);
    ListInit(&GlobalDeviceList, ((signed int (*)(void *, void *))NULL), ((void (*)(void *))NULL));
    ixmlRelaxParser((char)63);
    Log_Printf((enum Log_Level)LOG_DEBUG, "Intializing UPnP with ipaddress=%s port=%d", ip_address != ((char *)NULL) ? ip_address : "(null)", port);
    rc=UpnpInit(ip_address, port);
    if(!(rc == 0))
    {
      Log_Printf((enum Log_Level)LOG_ERROR, "UpnpInit() Error: %d", rc);
      UpnpFinish();
      if(rc == -208)
        Log_Printf((enum Log_Level)LOG_ERROR, "Check network configuration, in particular that a multicast route is set for the default network interface");

      return rc;
    }

    else
    {
      if(ip_address == ((char *)NULL))
        ip_address=UpnpGetServerIpAddress();

      if((signed int)port == 0)
        port=UpnpGetServerPort();

      Log_Printf((enum Log_Level)LOG_INFO, "UPnP Initialized (%s:%d)", ip_address != ((char *)NULL) ? ip_address : "(null)", port);
      Log_Printf((enum Log_Level)LOG_DEBUG, "Registering Control Point");
      rc=UpnpRegisterClient(EventHandlerCallback, (const void *)&g_ctrlpt_handle, &g_ctrlpt_handle);
      if(!(rc == 0))
      {
        Log_Printf((enum Log_Level)LOG_ERROR, "Error registering CP: %d", rc);
        UpnpFinish();
        return rc;
      }

      else
      {
        Log_Printf((enum Log_Level)LOG_DEBUG, "Control Point Registered");
        g_ssdp_target=talloc_strdup((void *)0, ssdp_target);
        DeviceList_RefreshAll((_Bool)1);
        pthread_create(&g_timer_thread, (const union pthread_attr_t *)(void *)0, CheckSubscriptionsLoop, (void *)0);
        return rc;
      }
    }
  }
}

// DeviceList_Stop
// file device_list.c line 1019
signed int DeviceList_Stop(void)
{
  signed int rc;
  pthread_cancel(g_timer_thread);
  DeviceList_RemoveAll();
  _talloc_free((void *)g_ssdp_target, "device_list.c:1030");
  g_ssdp_target = (char *)(void *)0;
  UpnpUnRegisterClient(g_ctrlpt_handle);
  rc=UpnpFinish();
  ListDestroy(&GlobalDeviceList, 0);
  pthread_mutex_destroy(&DeviceListMutex);
  gStateUpdateFun = ((void (*)(enum DeviceList_EventType, const char *))NULL);
  return rc;
}

// Device_Create
// file device.c line 191
struct _Device * Device_Create(void *parent_context, signed int ctrlpt_handle, const char * const descDocURL, const char * const deviceId, const char * const descDocText)
{
  _Bool tmp_if_expr$1;
  if(descDocURL == ((const char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*descDocURL == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$6;
  const char *tmp_if_expr$7;
  unsigned long int return_value_ixmlNodeList_length$11;
  if(tmp_if_expr$1)
  {
    Log_Printf((enum Log_Level)LOG_ERROR, "NULL or empty description document URL");
    return (struct _Device *)(void *)0;
  }

  else
    if(descDocText == ((const char *)NULL))
    {
      Log_Printf((enum Log_Level)LOG_ERROR, "NULL description document XML text");
      return (struct _Device *)(void *)0;
    }

    else
    {
      Log_Printf((enum Log_Level)LOG_DEBUG, "Device_Create : Id = '%s', description document = --------------------\n%s\n--------------------", deviceId != ((const char *)NULL) ? deviceId : "(null)", descDocText);
      struct _IXML_Document *descDoc = (struct _IXML_Document *)(void *)0;
      signed int rc;
      rc=ixmlParseBufferEx((char *)descDocText, &descDoc);
      if(!(rc == 0))
      {
        Log_Printf((enum Log_Level)LOG_ERROR, "Device_Create can't parse XML document (%d) = '%s'", rc, descDocText);
        return (struct _Device *)(void *)0;
      }

      else
      {
        const struct _IXML_Node *descDocNode;
        descDocNode=findDeviceNode(deviceId, descDoc);
        if(descDocNode == ((const struct _IXML_Node *)NULL))
        {
          Log_Printf((enum Log_Level)LOG_ERROR, "Device_Create no <device> in XML document = '%s'", descDocText);
          ixmlDocument_free(descDoc);
          return (struct _Device *)(void *)0;
        }

        else
        {
          struct _Device *dev;
          void *return_value_talloc_named_const$2;
          return_value_talloc_named_const$2=talloc_named_const(parent_context, sizeof(struct _Device) /*176ul*/ , "Device");
          dev = (struct _Device *)return_value_talloc_named_const$2;
          if(dev == ((struct _Device *)NULL))
          {
            Log_Print((enum Log_Level)LOG_ERROR, "Device_Create Out of Memory");
            ixmlDocument_free(descDoc);
            return (struct _Device *)(void *)0;
          }

          else
          {
            signed long int return_value_time$3;
            return_value_time$3=time((signed long int *)(void *)0);
            char *return_value_talloc_strdup$4;
            return_value_talloc_strdup$4=talloc_strdup((const void *)dev, descDocURL);
            char *return_value_talloc_strdup$5;
            return_value_talloc_strdup$5=talloc_strdup((const void *)dev, descDocText);
            *dev = (struct _Device){ .creation_time=return_value_time$3, .descDoc=descDoc, .descDocURL=return_value_talloc_strdup$4,
    .descDocText=return_value_talloc_strdup$5,
    .baseURL=((const char *)NULL),
    .descDocNode=descDocNode, .udn=((const char *)NULL),
    .deviceType=((const char *)NULL), .friendlyName=((const char *)NULL),
    .presURL=((const char *)NULL), .services={ .head={ .prev=((struct LISTNODE *)NULL), .next=((struct LISTNODE *)NULL), .item=NULL }, .tail={ .prev=((struct LISTNODE *)NULL), .next=((struct LISTNODE *)NULL), .item=NULL },
    .size=0l,
    .freeNodeList={ .head=((struct FREELISTNODE *)NULL), .element_size=0ul, .maxFreeListLength=0,
    .freeListLength=0 }, .free_func=((void (*)(void *))NULL),
    .cmp_func=((signed int (*)(void *, void *))NULL) } };
            const char *baseURL;
            baseURL=XMLUtil_FindFirstElementValue(&dev->descDoc->n, "URLBase", (const _Bool)1, (const _Bool)0);
            if(!(baseURL == ((const char *)NULL)))
              tmp_if_expr$6 = baseURL[(signed long int)0] != 0 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$6 = (_Bool)0;
            if(tmp_if_expr$6)
              tmp_if_expr$7 = baseURL;

            else
              tmp_if_expr$7 = dev->descDocURL;
            dev->baseURL = tmp_if_expr$7;
            const char *return_value_Device_GetDescDocItem$8;
            return_value_Device_GetDescDocItem$8=Device_GetDescDocItem(dev, "UDN", (_Bool)1);
            dev->udn=talloc_strdup((const void *)dev, return_value_Device_GetDescDocItem$8);
            Log_Printf((enum Log_Level)LOG_DEBUG, "Device_Create : UDN = %s", dev->udn);
            const char *return_value_Device_GetDescDocItem$9;
            return_value_Device_GetDescDocItem$9=Device_GetDescDocItem(dev, "deviceType", (_Bool)1);
            dev->deviceType=talloc_strdup((const void *)dev, return_value_Device_GetDescDocItem$9);
            Log_Printf((enum Log_Level)LOG_DEBUG, "Device_Create : type = %s", dev->deviceType);
            const char *return_value_Device_GetDescDocItem$10;
            return_value_Device_GetDescDocItem$10=Device_GetDescDocItem(dev, "friendlyName", (_Bool)1);
            dev->friendlyName=talloc_strdup((const void *)dev, return_value_Device_GetDescDocItem$10);
            const char *relURL;
            relURL=Device_GetDescDocItem(dev, "presentationURL", (_Bool)0);
            dev->presURL=UpnpUtil_ResolveURL((void *)dev, dev->baseURL, relURL);
            ListInit(&dev->services, (signed int (*)(void *, void *))(void *)0, (void (*)(void *))(void *)0);
            struct _IXML_Element *serviceList;
            serviceList=XMLUtil_FindFirstElement(dev->descDocNode, "serviceList", (const _Bool)0, (const _Bool)0);
            struct _IXML_NodeList *services;
            services=ixmlElement_getElementsByTagName(serviceList, "service");
            signed int i = 0;
            do
            {
              return_value_ixmlNodeList_length$11=ixmlNodeList_length(services);
              if((unsigned long int)i >= return_value_ixmlNodeList_length$11)
                break;

              struct _IXML_Element *serviceDesc;
              struct _IXML_Node *return_value_ixmlNodeList_item$12;
              return_value_ixmlNodeList_item$12=ixmlNodeList_item(services, (unsigned long int)i);
              serviceDesc = (struct _IXML_Element *)return_value_ixmlNodeList_item$12;
              struct _Service *serv;
              serv=ServiceFactory(dev, ctrlpt_handle, serviceDesc, dev->baseURL);
              if(!(serv == ((struct _Service *)NULL)))
                ListAddTail(&dev->services, (void *)serv);

              i = i + 1;
            }
            while((_Bool)1);
            if(!(serviceList == ((struct _IXML_Element *)NULL)))
            {
              ixmlNodeList_free(services);
              services = (struct _IXML_NodeList *)(void *)0;
            }

            do
            {
              signed int (*_talloc_destructor_fn)(struct _Device *) = destroy$link1;
              _talloc_set_destructor((const void *)dev, (signed int (*)(void *))_talloc_destructor_fn);
            }
            while((_Bool)0);
            return dev;
          }
        }
      }
    }
}

// Device_GetDescDocItem
// file device.c line 314
const char * Device_GetDescDocItem(const struct _Device *dev, const char *tagname, _Bool log_error)
{
  const char *return_value_XMLUtil_FindFirstElementValue$1;
  if(!(dev == ((const struct _Device *)NULL)))
  {
    return_value_XMLUtil_FindFirstElementValue$1=XMLUtil_FindFirstElementValue(dev->descDocNode, tagname, (const _Bool)0, log_error);
    return return_value_XMLUtil_FindFirstElementValue$1;
  }

  else
    return (const char *)(void *)0;
}

// Device_GetDescDocTextCopy
// file device.c line 328
char * Device_GetDescDocTextCopy(const struct _Device *dev, void *result_context)
{
  char *tmp_if_expr$2;
  char *return_value_talloc_strdup$1;
  if(!(dev == ((const struct _Device *)NULL)))
  {
    return_value_talloc_strdup$1=talloc_strdup(result_context, dev->descDocText);
    tmp_if_expr$2 = return_value_talloc_strdup$1;
  }

  else
    tmp_if_expr$2 = (char *)(void *)0;
  return tmp_if_expr$2;
}

// Device_GetServiceFrom
// file device.c line 367
struct _Service * Device_GetServiceFrom(const struct _Device *dev, const char *servname, enum GetFrom from, _Bool log_error)
{
  signed int return_value_strcmp$1;
  if(!(servname == ((const char *)NULL)))
  {
    struct LISTNODE *node;
    struct LINKEDLIST * const services = (struct LINKEDLIST *)&dev->services;
    node=ListHead(services);
    while(!(node == ((struct LISTNODE *)NULL)))
    {
      const char *s = (const char *)(void *)0;
      switch((signed int)from)
      {
        case FROM_SID:
        {
          s=Service_GetSid((const struct _Service *)node->item);
          break;
        }
        case FROM_CONTROL_URL:
        {
          s=Service_GetControlURL((const struct _Service *)node->item);
          break;
        }
        case FROM_EVENT_URL:
        {
          s=Service_GetControlURL((const struct _Service *)node->item);
          break;
        }
        case FROM_SERVICE_TYPE:
          s=Service_GetServiceType((const struct _Service *)node->item);
      }
      if(!(s == ((const char *)NULL)))
      {
        return_value_strcmp$1=strcmp(servname, s);
        if(return_value_strcmp$1 == 0)
          return (struct _Service *)node->item;

      }

      node=ListNext(services, node);
    }
  }

  const char *tmp_if_expr$2;
  if(!(log_error == (_Bool)0))
  {
    if(!(dev->friendlyName == ((const char *)NULL)))
      tmp_if_expr$2 = dev->friendlyName;

    else
      tmp_if_expr$2 = "(null)";
    Log_Printf((enum Log_Level)LOG_ERROR, "Device '%s' : error finding Service '%s'", tmp_if_expr$2, servname != ((const char *)NULL) ? servname : "(null)");
  }

  return (struct _Service *)(void *)0;
}

// Device_GetStatusString
// file device.c line 406
char * Device_GetStatusString(const struct _Device *dev, void *result_context, _Bool debug)
{
  if(dev == ((const struct _Device *)NULL))
    return (char *)(void *)0;

  else
  {
    char *p;
    p=talloc_strdup(result_context, "");
    void *tmp_ctx;
    tmp_ctx=talloc_named_const((void *)0, (unsigned long int)0, "talloc_new: device.c:414");
    tpr(&p, "  | \n");
    signed long int now;
    now=time((signed long int *)(void *)0);
    char *return_value_ctime$1;
    return_value_ctime$1=ctime(&dev->creation_time);
    tpr(&p, "  +- Discovered on  = %s", return_value_ctime$1);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(p);
    p[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)32;
    tpr(&p, "(%ld seconds ago)\n", (signed long int)(now - dev->creation_time));
    tpr(&p, "  +- UDN            = %s\n", dev->udn);
    tpr(&p, "  +- DeviceType     = %s\n", dev->deviceType);
    tpr(&p, "  +- DescDocURL     = %s\n", dev->descDocURL);
    tpr(&p, "  +- FriendlyName   = %s\n", dev->friendlyName);
    tpr(&p, "  +- PresURL        = %s\n", dev->presURL);
    if(!(debug == (_Bool)0))
    {
      unsigned long int return_value_talloc_total_blocks$3;
      return_value_talloc_total_blocks$3=talloc_total_blocks((const void *)dev);
      unsigned long int return_value_talloc_total_size$4;
      return_value_talloc_total_size$4=talloc_total_size((const void *)dev);
      tpr(&p, "  +- talloc memory  = %ld blocks / %ld bytes\n", (signed long int)return_value_talloc_total_blocks$3, (signed long int)return_value_talloc_total_size$4);
    }

    struct LISTNODE *node;
    struct LINKEDLIST * const services = (struct LINKEDLIST *)&dev->services;
    node=ListHead(services);
    while(!(node == ((struct LISTNODE *)NULL)))
    {
      const struct _Service * const serv = (const struct _Service *)node->item;
      _Bool last;
      struct LISTNODE *return_value_ListTail$5;
      return_value_ListTail$5=ListTail(services);
      last = node == return_value_ListTail$5;
      tpr(&p, "  | \n");
      if(serv == ((const struct _Service *)NULL))
        tpr(&p, "  +- **ERROR** NULL Service\n");

      else
      {
        tpr(&p, "  +- Service\n");
        char *return_value_Service_GetStatusString$6;
        return_value_Service_GetStatusString$6=Service_GetStatusString(serv, tmp_ctx, debug, last != (_Bool)0 ? "      " : "  |   ");
        tpr(&p, "%s", return_value_Service_GetStatusString$6);
      }
      node=ListNext(services, node);
    }
    _talloc_free(tmp_ctx, "device.c:453");
    return p;
  }
}

// Device_SusbcribeAllEvents
// file device.c line 339
signed int Device_SusbcribeAllEvents(const struct _Device *dev)
{
  const char *tmp_if_expr$1;
  if(dev == ((const struct _Device *)NULL))
    return -110;

  else
  {
    if(!(dev->friendlyName == ((const char *)NULL)))
      tmp_if_expr$1 = dev->friendlyName;

    else
      tmp_if_expr$1 = "(null)";
    Log_Printf((enum Log_Level)LOG_DEBUG, "Device_SusbcribeAllEvents %s", tmp_if_expr$1);
    signed int rc = 0;
    struct LISTNODE *node;
    struct LINKEDLIST * const services = (struct LINKEDLIST *)&dev->services;
    node=ListHead(services);
    while(!(node == ((struct LISTNODE *)NULL)))
    {
      signed int rc2;
      rc2=Service_SubscribeEventURL((struct _Service *)node->item);
      if(!(rc2 == 0))
        rc = rc2;

      node=ListNext(services, node);
    }
    return rc;
  }
}

// EventHandlerCallback
// file device_list.c line 507
static signed int EventHandlerCallback(enum Upnp_EventType_e event_type, void *event, void *cookie)
{
  void *tmp_ctx;
  tmp_ctx=talloc_named_const((void *)0, (unsigned long int)0, "talloc_new: device_list.c:511");
  char *return_value_UpnpUtil_GetEventString$1;
  return_value_UpnpUtil_GetEventString$1=UpnpUtil_GetEventString(tmp_ctx, event_type, event);
  Log_Print((enum Log_Level)LOG_DEBUG, return_value_UpnpUtil_GetEventString$1);
  struct Upnp_Discovery *e;
  struct Upnp_Discovery *EventHandlerCallback$$1$$1$$2$$e;
  char *return_value_DeviceList_GetStatusString$3;
  struct Upnp_Action_Complete *EventHandlerCallback$$1$$1$$3$$e;
  struct Upnp_Event *EventHandlerCallback$$1$$1$$4$$e;
  struct Upnp_Event_Subscribe *EventHandlerCallback$$1$$1$$5$$e;
  void *tmp_if_expr$4;
  struct Upnp_Event_Subscribe *EventHandlerCallback$$1$$1$$6$$e;
  void *tmp_if_expr$5;
  struct _Service *serv;
  switch((signed int)event_type)
  {
    case UPNP_DISCOVERY_ADVERTISEMENT_ALIVE:

    case UPNP_DISCOVERY_SEARCH_RESULT:
    {
      e = (struct Upnp_Discovery *)event;
      if(!(e->ErrCode == 0))
        Log_Printf((enum Log_Level)LOG_ERROR, "Error in Discovery Callback -- %d", e->ErrCode);

      if(!(e->DeviceId[0l] == 0))
      {
        Log_Printf((enum Log_Level)LOG_DEBUG, "Discovery : device type '%s' OS '%s' at URL '%s'", e->DeviceType, e->Os, e->Location);
        AddDevice(e->DeviceId, e->Location, e->Expires);
        char *return_value_DeviceList_GetStatusString$2;
        return_value_DeviceList_GetStatusString$2=DeviceList_GetStatusString(tmp_ctx);
        Log_Printf((enum Log_Level)LOG_DEBUG, "Discovery: DeviceList after AddDevice = \n%s", return_value_DeviceList_GetStatusString$2);
      }

      goto __CPROVER_DUMP_L22;
    }
    case UPNP_DISCOVERY_SEARCH_TIMEOUT:
      goto __CPROVER_DUMP_L22;
    case UPNP_DISCOVERY_ADVERTISEMENT_BYEBYE:
    {
      EventHandlerCallback$$1$$1$$2$$e = (struct Upnp_Discovery *)event;
      if(!(EventHandlerCallback$$1$$1$$2$$e->ErrCode == 0))
        Log_Printf((enum Log_Level)LOG_ERROR, "Error in Discovery ByeBye Callback -- %d", EventHandlerCallback$$1$$1$$2$$e->ErrCode);

      Log_Printf((enum Log_Level)LOG_DEBUG, "Received ByeBye for Device: %s", (const void *)EventHandlerCallback$$1$$1$$2$$e->DeviceId);
      DeviceList_RemoveDevice(EventHandlerCallback$$1$$1$$2$$e->DeviceId);
      return_value_DeviceList_GetStatusString$3=DeviceList_GetStatusString(tmp_ctx);
      Log_Printf((enum Log_Level)LOG_DEBUG, "DeviceList after byebye: \n%s", return_value_DeviceList_GetStatusString$3);
      goto __CPROVER_DUMP_L22;
    }
    case UPNP_CONTROL_ACTION_COMPLETE:
    {
      EventHandlerCallback$$1$$1$$3$$e = (struct Upnp_Action_Complete *)event;
      if(!(EventHandlerCallback$$1$$1$$3$$e->ErrCode == 0))
        Log_Printf((enum Log_Level)LOG_ERROR, "Error in  Action Complete Callback -- %d", EventHandlerCallback$$1$$1$$3$$e->ErrCode);

      goto __CPROVER_DUMP_L22;
    }
    case UPNP_CONTROL_GET_VAR_COMPLETE:
    {
      Log_Printf((enum Log_Level)LOG_WARNING, "Deprecated Get Var Complete Callback");
      goto __CPROVER_DUMP_L22;
    }
    case UPNP_EVENT_RECEIVED:
    {
      EventHandlerCallback$$1$$1$$4$$e = (struct Upnp_Event *)event;
      HandleEvent(EventHandlerCallback$$1$$1$$4$$e->Sid, EventHandlerCallback$$1$$1$$4$$e->EventKey, EventHandlerCallback$$1$$1$$4$$e->ChangedVariables);
      goto __CPROVER_DUMP_L22;
    }
    case UPNP_EVENT_SUBSCRIBE_COMPLETE:

    case UPNP_EVENT_UNSUBSCRIBE_COMPLETE:

    case UPNP_EVENT_RENEWAL_COMPLETE:
    {
      EventHandlerCallback$$1$$1$$5$$e = (struct Upnp_Event_Subscribe *)event;
      if(!(EventHandlerCallback$$1$$1$$5$$e->ErrCode == 0))
        Log_Printf((enum Log_Level)LOG_ERROR, "Error in Event Subscribe Callback -- %d", EventHandlerCallback$$1$$1$$5$$e->ErrCode);

      else
      {
        if(!(EventHandlerCallback$$1$$1$$5$$e->PublisherUrl == ((struct s_UpnpString *)NULL)))
          tmp_if_expr$4 = (void *)EventHandlerCallback$$1$$1$$5$$e->PublisherUrl;

        else
          tmp_if_expr$4 = (void *)"(null)";
        Log_Printf((enum Log_Level)LOG_DEBUG, "Received Event Renewal for eventURL %s", tmp_if_expr$4);
        pthread_mutex_lock(&DeviceListMutex);
        struct _Service *EventHandlerCallback$$1$$1$$5$$2$$serv;
        EventHandlerCallback$$1$$1$$5$$2$$serv=GetService((const char *)EventHandlerCallback$$1$$1$$5$$e->PublisherUrl, (enum GetFrom)FROM_EVENT_URL);
        if(!(EventHandlerCallback$$1$$1$$5$$2$$serv == ((struct _Service *)NULL)))
        {
          if((signed int)event_type == UPNP_EVENT_UNSUBSCRIBE_COMPLETE)
            Service_SetSid(EventHandlerCallback$$1$$1$$5$$2$$serv, (char *)(void *)0);

          else
            Service_SetSid(EventHandlerCallback$$1$$1$$5$$2$$serv, EventHandlerCallback$$1$$1$$5$$e->Sid);
        }

        pthread_mutex_unlock(&DeviceListMutex);
      }
      goto __CPROVER_DUMP_L22;
    }
    case UPNP_EVENT_AUTORENEWAL_FAILED:

    case UPNP_EVENT_SUBSCRIPTION_EXPIRED:
    {
      EventHandlerCallback$$1$$1$$6$$e = (struct Upnp_Event_Subscribe *)event;
      if(!(EventHandlerCallback$$1$$1$$6$$e->PublisherUrl == ((struct s_UpnpString *)NULL)))
        tmp_if_expr$5 = (void *)EventHandlerCallback$$1$$1$$6$$e->PublisherUrl;

      else
        tmp_if_expr$5 = (void *)"(null)";
      Log_Printf((enum Log_Level)LOG_DEBUG, "Renewing subscription for eventURL %s", tmp_if_expr$5);
      pthread_mutex_lock(&DeviceListMutex);
      serv=GetService((const char *)EventHandlerCallback$$1$$1$$6$$e->PublisherUrl, (enum GetFrom)FROM_EVENT_URL);
      if(!(serv == ((struct _Service *)NULL)))
        Service_SubscribeEventURL(serv);

      pthread_mutex_unlock(&DeviceListMutex);
    }
    case UPNP_EVENT_SUBSCRIPTION_REQUEST:

    case UPNP_CONTROL_GET_VAR_REQUEST:

    case UPNP_CONTROL_ACTION_REQUEST:

    default:
    {

    __CPROVER_DUMP_L22:
      ;
      _talloc_free(tmp_ctx, "device_list.c:676");
      return 0;
    }
  }
}

// FileBuffer_CreateFromString
// file file_buffer.c line 59
struct _FileBuffer * FileBuffer_CreateFromString(void *talloc_context, const char *content, enum _FileBuffer_StringAlloc alloc)
{
  struct _FileBuffer *file;
  void *return_value_talloc_named_const$1;
  return_value_talloc_named_const$1=talloc_named_const(talloc_context, sizeof(struct _FileBuffer) /*32ul*/ , "FileBuffer");
  file = (struct _FileBuffer *)return_value_talloc_named_const$1;
  const char *tmp_statement_expression$2;
  if(!(file == ((struct _FileBuffer *)NULL)))
  {
    *file = (struct _FileBuffer){ .exact_read=(_Bool)1, .file_size=(signed long int)0, .url=(const char *)(void *)0,
    .content=(const char *)(void *)0 };
    if(!(content == ((const char *)NULL)))
    {
      switch((signed int)alloc)
      {
        case FILE_BUFFER_STRING_STEAL:
        {
          const char *__talloc_steal_ret;
          void *return_value__talloc_steal_loc$3;
          return_value__talloc_steal_loc$3=_talloc_steal_loc((const void *)file, (const void *)content, "file_buffer.c:73");
          __talloc_steal_ret = (const char *)return_value__talloc_steal_loc$3;
          tmp_statement_expression$2 = __talloc_steal_ret;
          file->content = tmp_statement_expression$2;
          break;
        }
        case FILE_BUFFER_STRING_EXTERN:
        {
          file->content = content;
          break;
        }
        case FILE_BUFFER_STRING_COPY:

        default:
          file->content=talloc_strdup((const void *)file, content);
      }
      unsigned long int return_value_strlen$4;
      return_value_strlen$4=strlen(content);
      file->file_size = (signed long int)return_value_strlen$4;
    }

  }

  return file;
}

// FileBuffer_CreateFromURL
// file file_buffer.c line 94
struct _FileBuffer * FileBuffer_CreateFromURL(void *talloc_context, const char *url, signed long int file_size)
{
  struct _FileBuffer *file;
  void *return_value_talloc_named_const$1;
  return_value_talloc_named_const$1=talloc_named_const(talloc_context, sizeof(struct _FileBuffer) /*32ul*/ , "FileBuffer");
  file = (struct _FileBuffer *)return_value_talloc_named_const$1;
  if(!(file == ((struct _FileBuffer *)NULL)))
  {
    *file = (struct _FileBuffer){ .exact_read=file_size >= (signed long int)0, .file_size=file_size,
    .url=(const char *)(void *)0, .content=(const char *)(void *)0 };
    if(!(url == ((const char *)NULL)))
      file->url=talloc_strdup((const void *)file, url);

  }

  return file;
}

// FileBuffer_GetSize
// file file_buffer.c line 117
signed long int FileBuffer_GetSize(const struct _FileBuffer *file)
{
  _Bool tmp_if_expr$1;
  if(!(file == ((const struct _FileBuffer *)NULL)))
    tmp_if_expr$1 = file->file_size != 0l ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  return (signed long int)tmp_if_expr$1;
}

// FileBuffer_HasExactRead
// file file_buffer.c line 127
_Bool FileBuffer_HasExactRead(const struct _FileBuffer *file)
{
  _Bool tmp_if_expr$1;
  if(!(file == ((const struct _FileBuffer *)NULL)))
    tmp_if_expr$1 = file->exact_read != (_Bool)0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  return tmp_if_expr$1;
}

// FileBuffer_Read
// file file_buffer.c line 138
signed long int FileBuffer_Read(struct _FileBuffer *file, char *buffer, unsigned long int size, const signed long int offset)
{
  signed long int n = (signed long int)0;
  unsigned long int tmp_if_expr$1;
  signed long int tmp_if_expr$2;
  if(file == ((struct _FileBuffer *)NULL))
    n = (signed long int)-22;

  else
    if(buffer == ((char *)NULL))
      n = (signed long int)-14;

    else
      if(!(file->content == ((const char *)NULL)))
      {
        if(file->file_size >= 1l)
        {
          if(!(offset >= file->file_size))
          {
            if(!(size >= (unsigned long int)file->file_size + -((unsigned long int)offset)))
              tmp_if_expr$1 = size;

            else
              tmp_if_expr$1 = (unsigned long int)(file->file_size - offset);
            n = (signed long int)tmp_if_expr$1;
            if(n >= 1l)
              memcpy((void *)buffer, (const void *)(file->content + offset), (unsigned long int)n);

          }

        }

      }

      else
        if(!(file->url == ((const char *)NULL)))
        {
          Log_Printf((enum Log_Level)LOG_DEBUG, "GetHttp url '%s' size %ld offset %ld (file_size %ld)", file->url, (signed long int)size, (signed long int)offset, (signed long int)file->file_size);
          if((unsigned long int)offset >= 2147483648ul || !(2147483647ul + -size >= (unsigned long int)offset))
          {
            Log_Printf((enum Log_Level)LOG_ERROR, "GetHttp url '%s' overflowed size %ld or offset %ld", file->url, (signed long int)size, (signed long int)offset);
            return (signed long int)-75;
          }

          if(file->file_size >= 0l)
          {
            if(!((unsigned long int)file->file_size + -size >= (unsigned long int)offset))
            {
              if(!(file->file_size + -offset >= 0l))
                tmp_if_expr$2 = (signed long int)0;

              else
                tmp_if_expr$2 = file->file_size - offset;
              size = (unsigned long int)tmp_if_expr$2;
              Log_Printf((enum Log_Level)LOG_DEBUG, "GetHttp truncate to size %ld", (signed long int)size);
            }

          }

          void *handle = (void *)0;
          signed int contentLength = 0;
          signed int httpStatus = 0;
          char *contentType = (char *)(void *)0;
          signed int rc;
          rc=UpnpOpenHttpGetEx(file->url, &handle, &contentType, &contentLength, &httpStatus, (signed int)offset, (signed int)((unsigned long int)offset + size), 30);
          if(rc == 0)
          {
            do
            {
              unsigned long int read_size = size - (unsigned long int)n;
              if(n >= 1l)
                Log_Printf((enum Log_Level)LOG_DEBUG, "UpnpReadHttpGet loop ! url '%s' read %ld left %ld", file->url, (signed long int)n, (signed long int)read_size);

              rc=UpnpReadHttpGet(handle, buffer + n, &read_size, 30);
              if(!(rc == 0))
              {
                UpnpCloseHttpGet(handle);
                goto HTTP_CHECK;
              }

              if(read_size == 0ul)
                break;

              n = n + (signed long int)read_size;
            }
            while(!((unsigned long int)n >= size) && file->exact_read != (_Bool)0);
            rc=UpnpCloseHttpGet(handle);
          }


        HTTP_CHECK:
          ;
          if(!(rc == 0))
          {
            const char *return_value_UpnpGetErrorMessage$3;
            return_value_UpnpGetErrorMessage$3=UpnpGetErrorMessage(rc);
            Log_Printf((enum Log_Level)LOG_ERROR, "GetHttp url '%s' (size %ld, offset %ld, file_size %ld) : error %d (%s)", file->url, (signed long int)size, (signed long int)offset, (signed long int)file->file_size, rc, return_value_UpnpGetErrorMessage$3);
            if(rc == -104)
            {
              n = (signed long int)-12;
              goto __CPROVER_DUMP_L19;
            }

            n = (signed long int)-5;
          }

        }


__CPROVER_DUMP_L19:
  ;
  return n;
}

// GetDeviceListNodeFromId
// file device_list.c line 145
static struct LISTNODE * GetDeviceListNodeFromId(const char *deviceId)
{
  signed int return_value_strcmp$1;
  if(!(deviceId == ((const char *)NULL)))
  {
    struct LISTNODE *node;
    node=ListHead(&GlobalDeviceList);
    while(!(node == ((struct LISTNODE *)NULL)))
    {
      struct _DeviceNode * const devnode = (struct _DeviceNode *)node->item;
      if(!(devnode == ((struct _DeviceNode *)NULL)))
      {
        if(!(devnode->deviceId == ((char *)NULL)))
        {
          return_value_strcmp$1=strcmp(devnode->deviceId, deviceId);
          if(return_value_strcmp$1 == 0)
            return node;

        }

      }

      node=ListNext(&GlobalDeviceList, node);
    }
  }

  return ((struct LISTNODE *)NULL);
}

// GetDeviceNodeFromName
// file device_list.c line 126
static struct _DeviceNode * GetDeviceNodeFromName(const char *name, _Bool log_error)
{
  const char *return_value_talloc_get_name$1;
  signed int return_value_strcmp$2;
  if(!(name == ((const char *)NULL)))
  {
    struct LISTNODE *node;
    node=ListHead(&GlobalDeviceList);
    while(!(node == ((struct LISTNODE *)NULL)))
    {
      struct _DeviceNode * const devnode = (struct _DeviceNode *)node->item;
      if(!(devnode == ((struct _DeviceNode *)NULL)))
      {
        if(!(devnode->d == ((struct _Device *)NULL)))
        {
          return_value_talloc_get_name$1=talloc_get_name((const void *)devnode->d);
          return_value_strcmp$2=strcmp(return_value_talloc_get_name$1, name);
          if(return_value_strcmp$2 == 0)
            return devnode;

        }

      }

      node=ListNext(&GlobalDeviceList, node);
    }
  }

  if(!(log_error == (_Bool)0))
    Log_Printf((enum Log_Level)LOG_ERROR, "Error finding Device named %s", name != ((const char *)NULL) ? name : "(null)");

  return ((struct _DeviceNode *)NULL);
}

// GetService
// file device_list.c line 162
static struct _Service * GetService(const char *s, enum GetFrom from)
{
  struct LISTNODE *node;
  node=ListHead(&GlobalDeviceList);
  while(!(node == ((struct LISTNODE *)NULL)))
  {
    struct _DeviceNode * const devnode = (struct _DeviceNode *)node->item;
    if(!(devnode == ((struct _DeviceNode *)NULL)))
    {
      struct _Service *serv;
      serv=Device_GetServiceFrom(devnode->d, s, from, (_Bool)0);
      if(!(serv == ((struct _Service *)NULL)))
        return serv;

    }

    node=ListNext(&GlobalDeviceList, node);
  }
  Log_Printf((enum Log_Level)LOG_ERROR, "Can't find service matching %s in device list", s != ((const char *)NULL) ? s : "(null)");
  return (struct _Service *)(void *)0;
}

// GetVariable
// file service.c line 170
static struct LISTNODE * GetVariable(const struct _Service *serv, const char *name)
{
  signed int return_value_strcmp$1;
  if(!(name == ((const char *)NULL)) && !(serv == ((const struct _Service *)NULL)))
  {
    struct LISTNODE *node;
    struct LINKEDLIST * const variables = (struct LINKEDLIST *)&serv->variables;
    node=ListHead(variables);
    while(!(node == ((struct LISTNODE *)NULL)))
    {
      struct _StringPair * const var = (struct _StringPair *)node->item;
      if(!(var == ((struct _StringPair *)NULL)))
      {
        if(!(var->name == ((char *)NULL)))
        {
          return_value_strcmp$1=strcmp(var->name, name);
          if(return_value_strcmp$1 == 0)
            return node;

        }

      }

      node=ListNext(variables, node);
    }
  }

  return (struct LISTNODE *)(void *)0;
}

// HandleEvent
// file device_list.c line 318
static void HandleEvent(char *sid, signed int eventkey, struct _IXML_Document *changes)
{
  pthread_mutex_lock(&DeviceListMutex);
  Log_Printf((enum Log_Level)LOG_DEBUG, "Received Event: %d for SID %s", eventkey, sid != ((char *)NULL) ? sid : "(null)");
  struct _Service *serv;
  serv=GetService(sid, (enum GetFrom)FROM_SID);
  if(!(serv == ((struct _Service *)NULL)))
    Service_UpdateState(serv, changes);

  pthread_mutex_unlock(&DeviceListMutex);
}

// Log_BeginColor
// file log.c line 205
void Log_BeginColor(enum Log_Level level, struct _IO_FILE *stream)
{
  _Bool return_value_Log_IsActivated$5;
  return_value_Log_IsActivated$5=Log_IsActivated(level);
  _Bool tmp_if_expr$3;
  signed int return_value_fileno$1;
  signed int return_value_isatty$2;
  _Bool tmp_if_expr$4;
  if(!(return_value_Log_IsActivated$5 == (_Bool)0))
  {
    if(!(stream == ((struct _IO_FILE *)NULL)))
    {
      _Bool colorize;
      if(!(g_colorize == (_Bool)0))
      {
        return_value_fileno$1=fileno(stream);
        return_value_isatty$2=isatty(return_value_fileno$1);
        tmp_if_expr$3 = return_value_isatty$2 != 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$3 = (_Bool)0;
      colorize = tmp_if_expr$3;
      if(!(colorize == (_Bool)0))
      {
        if(NB_COLORS >= (signed int)level && (signed int)level >= 0)
          tmp_if_expr$4 = COLORS[(signed long int)level] != ((const char *)NULL) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$4 = (_Bool)0;
        if(tmp_if_expr$4)
          fputs(COLORS[(signed long int)level], stream);

        else
          fputs(COLOR_UNKNOWN_LEVEL, stream);
      }

    }

  }

}

// Log_Colorize
// file log.c line 199
void Log_Colorize(_Bool colorize)
{
  g_colorize = colorize;
}

// Log_EndColor
// file log.c line 220
void Log_EndColor(enum Log_Level level, struct _IO_FILE *stream)
{
  _Bool return_value_Log_IsActivated$4;
  return_value_Log_IsActivated$4=Log_IsActivated(level);
  _Bool tmp_if_expr$3;
  signed int return_value_fileno$1;
  signed int return_value_isatty$2;
  if(!(return_value_Log_IsActivated$4 == (_Bool)0))
  {
    if(!(stream == ((struct _IO_FILE *)NULL)))
    {
      _Bool colorize;
      if(!(g_colorize == (_Bool)0))
      {
        return_value_fileno$1=fileno(stream);
        return_value_isatty$2=isatty(return_value_fileno$1);
        tmp_if_expr$3 = return_value_isatty$2 != 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$3 = (_Bool)0;
      colorize = tmp_if_expr$3;
      if(!(colorize == (_Bool)0))
        fputs("\033[0m", stream);

    }

  }

}

// Log_Finish
// file log.c line 106
signed int Log_Finish(void)
{
  gPrintFun = (void (*)(enum Log_Level, const char *))(void *)0;
  if(!(g_initialized == (_Bool)0))
  {
    g_initialized = (_Bool)0;
    pthread_mutex_destroy(&g_log_mutex);
  }

  return 0;
}

// Log_Initialize
// file log.c line 85
signed int Log_Initialize(void (*print_function)(enum Log_Level, const char *))
{
  if(g_initialized == (_Bool)0)
  {
    union anonymous$5 attr;
    pthread_mutexattr_init(&attr);
    pthread_mutexattr_setkind_np(&attr, 1);
    pthread_mutex_init(&g_log_mutex, &attr);
    pthread_mutexattr_destroy(&attr);
    g_initialized = (_Bool)1;
  }

  gPrintFun = print_function;
  return 0;
}

// Log_IsActivated
// file log.c line 121
_Bool Log_IsActivated(enum Log_Level level)
{
  return g_initialized != (_Bool)0 && gPrintFun != ((void (*)(enum Log_Level, const char *))NULL) && (signed int)level <= (signed int)g_max_level;
}

// Log_Lock
// file log.c line 183
signed int Log_Lock(void)
{
  signed int return_value_pthread_mutex_lock$1;
  return_value_pthread_mutex_lock$1=pthread_mutex_lock(&g_log_mutex);
  return return_value_pthread_mutex_lock$1;
}

// Log_Print
// file log.c line 131
signed int Log_Print(enum Log_Level level, const char *msg)
{
  _Bool return_value_Log_IsActivated$1;
  return_value_Log_IsActivated$1=Log_IsActivated(level);
  if(!(return_value_Log_IsActivated$1 == (_Bool)0))
  {
    if(!(msg == ((const char *)NULL)))
    {
      pthread_mutex_lock(&g_log_mutex);
      gPrintFun(level, msg);
      pthread_mutex_unlock(&g_log_mutex);
    }

  }

  return 0;
}

// Log_Printf
// file log.c line 146
signed int Log_Printf(enum Log_Level level, const char *fmt, ...)
{
  _Bool return_value_Log_IsActivated$1;
  return_value_Log_IsActivated$1=Log_IsActivated(level);
  if(!(return_value_Log_IsActivated$1 == (_Bool)0))
  {
    if(!(fmt == ((const char *)NULL)))
    {
      void **ap;
      char buf[4096l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
      ap = (void **)&fmt;
      signed int rc;
      rc=vsnprintf(buf, sizeof(char [4096l]) /*4096ul*/ , fmt, ap);
      ap = ((void **)NULL);
      if(rc >= 0)
      {
        pthread_mutex_lock(&g_log_mutex);
        gPrintFun(level, buf);
        pthread_mutex_unlock(&g_log_mutex);
      }

      return rc;
    }

  }

  return -1;
}

// Log_SetMaxLevel
// file log.c line 172
void Log_SetMaxLevel(enum Log_Level max_level)
{
  g_max_level = max_level;
}

// Log_Unlock
// file log.c line 189
signed int Log_Unlock(void)
{
  signed int return_value_pthread_mutex_unlock$1;
  return_value_pthread_mutex_unlock$1=pthread_mutex_unlock(&g_log_mutex);
  return return_value_pthread_mutex_unlock$1;
}

// MakeAction
// file service.c line 274
static struct _IXML_Document * MakeAction(const char *actionName, const char *serviceType, signed int nb_params, const struct _StringPair *params)
{
  struct _IXML_Document *res = (struct _IXML_Document *)(void *)0;
  char *tmp_if_expr$1;
  char *tmp_if_expr$2;
  if(params == ((const struct _StringPair *)NULL) && nb_params >= 1)
    return (struct _IXML_Document *)(void *)0;

  else
  {
    signed int i = 0;
    for( ; !(i >= nb_params); i = i + 1)
    {
      signed int rc;
      rc=UpnpAddToAction(&res, actionName, serviceType, (params + (signed long int)i)->name, (params + (signed long int)i)->value);
      if(!(rc == 0))
      {
        if(!((params + (signed long int)i)->name == ((char *)NULL)))
          tmp_if_expr$1 = (params + (signed long int)i)->name;

        else
          tmp_if_expr$1 = "(null)";
        if(!((params + (signed long int)i)->value == ((char *)NULL)))
          tmp_if_expr$2 = (params + (signed long int)i)->value;

        else
          tmp_if_expr$2 = "(null)";
        Log_Printf((enum Log_Level)LOG_ERROR, "Service MakeAction: can't add action %s=%s", tmp_if_expr$1, tmp_if_expr$2);
        if(!(res == ((struct _IXML_Document *)NULL)))
          ixmlDocument_free(res);

        return (struct _IXML_Document *)(void *)0;
      }

    }
    if(res == ((struct _IXML_Document *)NULL))
      res=UpnpMakeAction(actionName, serviceType, 0, (const char *)(void *)0);

    return res;
  }
}

// MediaFile_GetName
// file media_file.c line 206
char * MediaFile_GetName(void *result_context, const struct _DIDLObject *o, const char *extension)
{
  char *name = (char *)(void *)0;
  _Bool tmp_if_expr$2;
  signed int return_value_strcmp$1;
  if(!(o == ((const struct _DIDLObject *)NULL)))
  {
    if(!(o->basename == ((char *)NULL)))
    {
      if(!(extension == ((const char *)NULL)))
      {
        if(!(*extension == 0))
        {
          const char *ptr;
          ptr=strrchr(o->basename, 46);
          if(ptr == ((const char *)NULL))
            tmp_if_expr$2 = (_Bool)1;

          else
          {
            return_value_strcmp$1=strcmp(ptr + (signed long int)1, extension);
            tmp_if_expr$2 = return_value_strcmp$1 != 0 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr$2)
            name=talloc_asprintf(result_context, "%s.%s", o->basename, extension);

        }

      }

      if(name == ((char *)NULL))
        name=talloc_strdup(result_context, o->basename);

    }

  }

  return name;
}

// MediaFile_GetPlaylistContent
// file media_file.c line 232
char * MediaFile_GetPlaylistContent(const struct _MediaFile * const file, void *result_context)
{
  signed int return_value_strcmp$2;
  if(file == ((const struct _MediaFile *)NULL))
    return (char *)(void *)0;

  else
  {
    char *str = (char *)(void *)0;
    signed int return_value_strcmp$3;
    return_value_strcmp$3=strcmp(file->playlist, "ram");
    if(return_value_strcmp$3 == 0)
      str=talloc_asprintf(result_context, "%s?title=%s\n", file->uri, file->o->title);

    else
    {
      return_value_strcmp$2=strcmp(file->playlist, "m3u");
      if(return_value_strcmp$2 == 0)
      {
        const char *duration;
        duration=ixmlElement_getAttribute(file->res, "duration");
        signed int seconds = -1;
        if(!(duration == ((const char *)NULL)))
        {
          signed int hh = 0;
          unsigned int mm = (unsigned int)0;
          unsigned int ss = (unsigned int)0;
          signed int return_value_sscanf$1;
          return_value_sscanf$1=sscanf(duration, "%d:%u:%u", &hh, &mm, &ss);
          if(return_value_sscanf$1 == 3)
          {
            if(hh >= 0)
              seconds = (signed int)(ss + (unsigned int)60 * (mm + (unsigned int)(60 * hh)));

          }

        }

        str=talloc_asprintf(result_context, "#EXTM3U\n#EXTINF:%d,%s\n%s\n", seconds, file->o->title, file->uri);
      }

    }
    return str;
  }
}

// MediaFile_GetPreferred
// file media_file.c line 140
_Bool MediaFile_GetPreferred(const struct _DIDLObject * const o, struct _MediaFile *file)
{
  unsigned long int return_value_ixmlNodeList_length$1;
  _Bool tmp_if_expr$4;
  signed int return_value_sscanf$3;
  _Bool tmp_if_expr$6;
  if(o == ((const struct _DIDLObject *)NULL))
    return (_Bool)0;

  else
  {
    struct _IXML_NodeList *reslist;
    reslist=ixmlElement_getElementsByTagName(o->element, "res");
    if(reslist == ((struct _IXML_NodeList *)NULL))
      return (_Bool)0;

    else
    {
      signed int i;
      _Bool found = (_Bool)0;
      i = 0;
      do
      {
        return_value_ixmlNodeList_length$1=ixmlNodeList_length(reslist);
        if(!(found == (_Bool)0) || (unsigned long int)i >= return_value_ixmlNodeList_length$1)
          break;

        struct _IXML_Element *res;
        struct _IXML_Node *return_value_ixmlNodeList_item$2;
        return_value_ixmlNodeList_item$2=ixmlNodeList_item(reslist, (unsigned long int)i);
        res = (struct _IXML_Element *)return_value_ixmlNodeList_item$2;
        const char *protocol;
        protocol=ixmlElement_getAttribute(res, "protocolInfo");
        const char *uri;
        uri=XMLUtil_GetElementValue(res);
        char mimetype[64l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
        if(protocol == ((const char *)NULL) || uri == ((const char *)NULL))
          tmp_if_expr$4 = (_Bool)1;

        else
        {
          return_value_sscanf$3=sscanf(protocol, "http-get:*:%63[^:;]", (const void *)mimetype);
          tmp_if_expr$4 = return_value_sscanf$3 != 1 ? (_Bool)1 : (_Bool)0;
        }
        if(!tmp_if_expr$4)
        {
          const struct _MimeType *format = MIMES;
          while(!(format->mimetype == ((const char *)NULL)))
          {
            if(found != (_Bool)0)
              break;

            unsigned long int return_value_strlen$7;
            return_value_strlen$7=strlen(format->mimetype);
            signed int return_value_strncmp$8;
            return_value_strncmp$8=strncmp(mimetype, format->mimetype, return_value_strlen$7);
            if(return_value_strncmp$8 == 0)
            {
              *file = (struct _MediaFile){ .o=o, .extension={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, .playlist=format->playlist,
    .uri=uri, .res=res };
              const char *ext = format->extension;
              if(ext == ((const char *)NULL))
              {
                unsigned long int return_value_strlen$5;
                return_value_strlen$5=strlen(mimetype);
                ext = mimetype + (signed long int)return_value_strlen$5;
                do
                {
                  ext = ext - 1l;
                  if(!((signed int)*ext == 47))
                    tmp_if_expr$6 = (signed int)*ext != 45 ? (_Bool)1 : (_Bool)0;

                  else
                    tmp_if_expr$6 = (_Bool)0;
                }
                while(tmp_if_expr$6);
                ext = ext + 1l;
              }

              strncpy(file->extension, ext, sizeof(char [10l]) /*10ul*/  - (unsigned long int)1);
              file->extension[(signed long int)(sizeof(char [10l]) /*10ul*/  - (unsigned long int)1)] = (char)0;
              found = (_Bool)1;
            }

            format = format + 1l;
          }
        }

        i = i + 1;
      }
      while((_Bool)1);
      ixmlNodeList_free(reslist);
      return found;
    }
  }
}

// MediaFile_GetResSize
// file media_file.c line 281
signed long int MediaFile_GetResSize(const struct _MediaFile * const file)
{
  const char *str;
  str=ixmlElement_getAttribute(file->res, "size");
  signed long int res;
  do
  {
    signed long int __temp_s2i_var;
    __temp_s2i_var=_String_ToInteger(str, (signed long int)-1);
    res = __temp_s2i_var;
    if(!(res == __temp_s2i_var))
      res = (signed long int)-1;

  }
  while((_Bool)0);
  return res;
}

// NotifyUpdate
// file device_list.c line 102
static void NotifyUpdate(enum DeviceList_EventType type, const struct _DeviceNode *devnode)
{
  const char *return_value_talloc_get_name$1;
  if(!(gStateUpdateFun == ((void (*)(enum DeviceList_EventType, const char *))NULL)) && !(devnode == ((const struct _DeviceNode *)NULL)))
  {
    if(!(devnode->d == ((struct _Device *)NULL)))
    {
      return_value_talloc_get_name$1=talloc_get_name((const void *)devnode->d);
      gStateUpdateFun(type, return_value_talloc_get_name$1);
    }

  }

}

// Object_Create
// file object.c line 230
struct _Object * Object_Create(void *parent_context, void *unused)
{
  (void)unused;
  struct _Object *self;
  const struct _Object_Class *return_value__Object_GetBaseClass$1;
  return_value__Object_GetBaseClass$1=_Object_GetBaseClass();
  self=_Object_check_alloc(parent_context, return_value__Object_GetBaseClass$1);
  _Bool tmp_if_expr$2;
  const char *tmp_if_expr$3;
  if(!(self == ((struct _Object *)NULL)))
  {
    if(!(self == ((struct _Object *)NULL)))
      tmp_if_expr$2 = self->_.baseclass != ((const struct _Object_Class *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$2 = (_Bool)0;
    if(tmp_if_expr$2)
      tmp_if_expr$3 = self->_.baseclass->name;

    else
      tmp_if_expr$3 = (const char *)(void *)0;
    talloc_set_name_const((const void *)self, tmp_if_expr$3);
  }

  return self;
}

// PtrArray_Append
// file ptr_array.h line 123
_Bool PtrArray_Append(struct _PtrArray *self, void *element)
{
  _Bool return_value_PtrArray_ReserveExtraSize$2;
  return_value_PtrArray_ReserveExtraSize$2=PtrArray_ReserveExtraSize(self, (unsigned long int)1);
  unsigned long int tmp_post$1;
  if(!(return_value_PtrArray_ReserveExtraSize$2 == (_Bool)0))
  {
    tmp_post$1 = self->_size;
    self->_size = self->_size + 1ul;
    self->_array[(signed long int)tmp_post$1] = element;
    return (_Bool)1;
  }

  else
    return (_Bool)0;
}

// PtrArray_Create
// file ptr_array.h line 73
struct _PtrArray * PtrArray_Create(void *context)
{
  struct _PtrArray *self;
  void *return_value_talloc_named_const$1;
  return_value_talloc_named_const$1=talloc_named_const(context, sizeof(struct _PtrArray) /*24ul*/ , "PtrArray");
  self = (struct _PtrArray *)return_value_talloc_named_const$1;
  if(!(self == ((struct _PtrArray *)NULL)))
    *self = (struct _PtrArray){ ._array=(void **)(void *)0, ._capacity=(unsigned long int)0, ._size=(unsigned long int)0 };

  return self;
}

// PtrArray_CreateWithCapacity
// file ptr_array.h line 87
struct _PtrArray * PtrArray_CreateWithCapacity(void *context, unsigned long int capacity)
{
  struct _PtrArray *self;
  self=PtrArray_Create(context);
  PtrArray_ReserveExtraSize(self, capacity);
  return self;
}

// PtrArray_GetElementIndex
// file ptr_array.c line 145
signed long int PtrArray_GetElementIndex(const struct _PtrArray *self, void *element)
{
  if(!(self == ((const struct _PtrArray *)NULL)))
  {
    signed long int i = (signed long int)0;
    for( ; !((unsigned long int)i >= self->_size); i = i + 1l)
      if(self->_array[i] == element)
        return i;

  }

  return (signed long int)-1;
}

// PtrArray_GetHead
// file ptr_array.h line 132
static inline void * PtrArray_GetHead(const struct _PtrArray * const self)
{
  _Bool tmp_if_expr$1;
  if(!(self == ((const struct _PtrArray *)NULL)))
    tmp_if_expr$1 = self->_size > (unsigned long int)0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  void *tmp_if_expr$2;
  if(tmp_if_expr$1)
    tmp_if_expr$2 = self->_array[(signed long int)0];

  else
    tmp_if_expr$2 = (void *)0;
  return tmp_if_expr$2;
}

// PtrArray_GetHead$link1
// file ptr_array.h line 132
static inline void * PtrArray_GetHead$link1(const struct _PtrArray * const self$link1)
{
  _Bool tmp_if_expr$1$link1;
  if(!(self$link1 == ((const struct _PtrArray *)NULL)))
    tmp_if_expr$1$link1 = self$link1->_size > (unsigned long int)0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1$link1 = (_Bool)0;
  void *tmp_if_expr$2$link1;
  if(tmp_if_expr$1$link1)
    tmp_if_expr$2$link1 = self$link1->_array[(signed long int)0];

  else
    tmp_if_expr$2$link1 = (void *)0;
  return tmp_if_expr$2$link1;
}

// PtrArray_GetSize
// file ptr_array.h line 108
static inline unsigned long int PtrArray_GetSize(const struct _PtrArray *self)
{
  unsigned long int tmp_if_expr$1;
  if(!(self == ((const struct _PtrArray *)NULL)))
    tmp_if_expr$1 = self->_size;

  else
    tmp_if_expr$1 = (unsigned long int)0;
  return tmp_if_expr$1;
}

// PtrArray_GetSize$link1
// file ptr_array.h line 108
static inline unsigned long int PtrArray_GetSize$link1(const struct _PtrArray *self$link1)
{
  unsigned long int tmp_if_expr$1$link1;
  if(!(self$link1 == ((const struct _PtrArray *)NULL)))
    tmp_if_expr$1$link1 = self$link1->_size;

  else
    tmp_if_expr$1$link1 = (unsigned long int)0;
  return tmp_if_expr$1$link1;
}

// PtrArray_InsertAt
// file ptr_array.c line 120
_Bool PtrArray_InsertAt(struct _PtrArray *self, void *element, unsigned long int i)
{
  _Bool return_value_PtrArray_Append$1;
  if(self == ((struct _PtrArray *)NULL))
    return (_Bool)0;

  else
    if(i >= self->_size)
    {
      return_value_PtrArray_Append$1=PtrArray_Append(self, element);
      return return_value_PtrArray_Append$1;
    }

    else
    {
      _Bool return_value_PtrArray_ReserveExtraSize$2;
      return_value_PtrArray_ReserveExtraSize$2=PtrArray_ReserveExtraSize(self, (unsigned long int)1);
      if(return_value_PtrArray_ReserveExtraSize$2 == (_Bool)0)
        return (_Bool)0;

      else
      {
        memmove((void *)(self->_array + (signed long int)i + (signed long int)1), (const void *)(self->_array + (signed long int)i), (self->_size - i) * sizeof(void *) /*8ul*/ );
        self->_array[(signed long int)i] = element;
        self->_size = self->_size + 1ul;
        return (_Bool)1;
      }
    }
}

// PtrArray_IsEmpty
// file ptr_array.h line 96
static inline _Bool PtrArray_IsEmpty(const struct _PtrArray *self)
{
  signed int tmp_if_expr$1;
  if(!(self == ((const struct _PtrArray *)NULL)))
    tmp_if_expr$1 = (signed int)(self->_size < (unsigned long int)1);

  else
    tmp_if_expr$1 = 1;
  return (_Bool)tmp_if_expr$1;
}

// PtrArray_IteratorGetElement
// file ptr_array.h line 230
static inline void * PtrArray_IteratorGetElement(const struct _PtrArray_Iterator *iter)
{
  return iter->_array->_array[iter->_index];
}

// PtrArray_IteratorGetElement$link1
// file ptr_array.h line 230
static inline void * PtrArray_IteratorGetElement$link1(const struct _PtrArray_Iterator *iter$link1)
{
  return iter$link1->_array->_array[iter$link1->_index];
}

// PtrArray_IteratorLoop
// file ptr_array.h line 222
static inline _Bool PtrArray_IteratorLoop(struct _PtrArray_Iterator *iter)
{
  _Bool tmp_if_expr$1;
  if(!(iter->_array == ((const struct _PtrArray *)NULL)))
  {
    iter->_index = iter->_index + 1l;
    tmp_if_expr$1 = (unsigned long int)iter->_index < iter->_array->_size ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$1 = (_Bool)0;
  return tmp_if_expr$1;
}

// PtrArray_IteratorLoop$link1
// file ptr_array.h line 222
static inline _Bool PtrArray_IteratorLoop$link1(struct _PtrArray_Iterator *iter$link1)
{
  _Bool tmp_if_expr$1$link1;
  if(!(iter$link1->_array == ((const struct _PtrArray *)NULL)))
  {
    iter$link1->_index = iter$link1->_index + 1l;
    tmp_if_expr$1$link1 = (unsigned long int)iter$link1->_index < iter$link1->_array->_size ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$1$link1 = (_Bool)0;
  return tmp_if_expr$1$link1;
}

// PtrArray_IteratorStart
// file ptr_array.h line 215
static inline struct _PtrArray_Iterator PtrArray_IteratorStart(const struct _PtrArray *array)
{
  return (struct _PtrArray_Iterator){ ._array=array, ._index=(signed long int)-1 };
}

// PtrArray_IteratorStart$link1
// file ptr_array.h line 215
static inline struct _PtrArray_Iterator PtrArray_IteratorStart$link1(const struct _PtrArray *array$link1)
{
  return (struct _PtrArray_Iterator){ ._array=array$link1, ._index=(signed long int)-1 };
}

// PtrArray_RemoveAt
// file ptr_array.h line 174
void * PtrArray_RemoveAt(struct _PtrArray *self, unsigned long int i)
{
  _Bool tmp_if_expr$1;
  if(self == ((struct _PtrArray *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = i >= self->_size ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    return (void *)0;

  else
  {
    void * const element = self->_array[(signed long int)i];
    const unsigned long int nb = (self->_size - i) - (unsigned long int)1;
    if(nb >= 1ul)
      memmove((void *)(self->_array + (signed long int)i), (const void *)(self->_array + (signed long int)i + (signed long int)1), nb * sizeof(void *) /*8ul*/ );

    self->_size = self->_size - 1ul;
    return element;
  }
}

// PtrArray_RemoveAtReorder
// file ptr_array.c line 184
void * PtrArray_RemoveAtReorder(struct _PtrArray *self, unsigned long int i)
{
  _Bool tmp_if_expr$1;
  if(self == ((struct _PtrArray *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = i >= self->_size ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    return (void *)0;

  else
  {
    void * const element = self->_array[(signed long int)i];
    self->_array[(signed long int)i] = self->_array[(signed long int)(self->_size - (unsigned long int)1)];
    self->_size = self->_size - 1ul;
    return element;
  }
}

// PtrArray_ReserveExtraSize
// file ptr_array.c line 76
_Bool PtrArray_ReserveExtraSize(struct _PtrArray *self, unsigned long int extra_size)
{
  unsigned long int tmp_if_expr$1;
  if(self == ((struct _PtrArray *)NULL))
    return (_Bool)0;

  else
  {
    const unsigned long int size = self->_size + extra_size;
    if(!(self->_capacity >= size))
    {
      unsigned long int capacity;
      if(self->_capacity >= 1ul)
        tmp_if_expr$1 = self->_capacity * (unsigned long int)2;

      else
        tmp_if_expr$1 = (unsigned long int)16;
      capacity = tmp_if_expr$1;
      if(!(capacity >= size))
        capacity = size;

      void *return_value__talloc_realloc_array$2;
      return_value__talloc_realloc_array$2=_talloc_realloc_array((const void *)self, (void *)self->_array, sizeof(void *) /*8ul*/ , (unsigned int)capacity, "PtrArray_Element");
      self->_array = (void **)return_value__talloc_realloc_array$2;
      if(self->_array == ((void **)NULL))
      {
        self->_size = (unsigned long int)0;
        self->_capacity = self->_size;
        return (_Bool)0;
      }

      self->_capacity = capacity;
    }

    return (_Bool)1;
  }
}

// ServiceFactory
// file device.c line 80
static struct _Service * ServiceFactory(struct _Device *dev, signed int ctrlpt_handle, struct _IXML_Element *serviceDesc, const char *base_url)
{
  struct _Service *serv = (struct _Service *)(void *)0;
  const char *serviceType;
  serviceType=XMLUtil_FindFirstElementValue(&serviceDesc->n, "serviceType", (const _Bool)0, (const _Bool)1);
  _Bool tmp_if_expr$3;
  signed int return_value_strcmp$2;
  if(!(serviceType == ((const char *)NULL)))
  {
    return_value_strcmp$2=strcmp(serviceType, "urn:schemas-upnp-org:service:ContentDirectory:1");
    tmp_if_expr$3 = return_value_strcmp$2 == 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$3 = (_Bool)0;
  if(tmp_if_expr$3)
  {
    struct _ContentDir *return_value_ContentDir_Create$1;
    return_value_ContentDir_Create$1=ContentDir_Create((void *)dev, ctrlpt_handle, serviceDesc, base_url);
    serv=ContentDir_ToService(return_value_ContentDir_Create$1);
  }

  else
    serv=Service_Create((void *)dev, ctrlpt_handle, serviceDesc, base_url);
  if(serv == ((struct _Service *)NULL))
    Log_Printf((enum Log_Level)LOG_ERROR, "Error creating service type %s", serviceType != ((const char *)NULL) ? serviceType : "(null)");

  return serv;
}

// Service_Create
// file service.c line 582
struct _Service * Service_Create(void *talloc_context, signed int ctrlpt_handle, struct _IXML_Element *serviceDesc, const char *base_url)
{
  struct _Service *self;
  const struct _Object_Class *return_value__Service_GetBaseClass$1;
  return_value__Service_GetBaseClass$1=_Service_GetBaseClass();
  struct _Object *return_value__Object_check_alloc$2;
  return_value__Object_check_alloc$2=_Object_check_alloc(talloc_context, return_value__Service_GetBaseClass$1);
  self = (struct _Service *)return_value__Object_check_alloc$2;
  if(!(self == ((struct _Service *)NULL)))
  {
    struct _Object *__super;
    __super=Object_Create((void *)self, (void *)0);
    if(__super == ((struct _Object *)NULL))
    {
      Log_Print((enum Log_Level)LOG_ERROR, "Service: error in Object_Create");
      self = (struct _Service *)(void *)0;
    }

  }

  (void)self;
  char *tmp_if_expr$4;
  char *tmp_if_expr$6;
  if(self == ((struct _Service *)NULL))
    return (struct _Service *)(void *)0;

  else
  {
    self->ctrlpt_handle = ctrlpt_handle;
    const struct _IXML_Node * const node = &serviceDesc->n;
    const char *return_value_XMLUtil_FindFirstElementValue$3;
    return_value_XMLUtil_FindFirstElementValue$3=XMLUtil_FindFirstElementValue(node, "serviceType", (const _Bool)0, (const _Bool)1);
    self->serviceType=talloc_strdup((const void *)self, return_value_XMLUtil_FindFirstElementValue$3);
    if(!(self->serviceType == ((char *)NULL)))
      tmp_if_expr$4 = self->serviceType;

    else
      tmp_if_expr$4 = "(null)";
    Log_Printf((enum Log_Level)LOG_DEBUG, "Service_Create: %s", tmp_if_expr$4);
    const char *return_value_XMLUtil_FindFirstElementValue$5;
    return_value_XMLUtil_FindFirstElementValue$5=XMLUtil_FindFirstElementValue(node, "serviceId", (const _Bool)0, (const _Bool)1);
    self->serviceId=talloc_strdup((const void *)self, return_value_XMLUtil_FindFirstElementValue$5);
    if(!(self->serviceId == ((char *)NULL)))
      tmp_if_expr$6 = self->serviceId;

    else
      tmp_if_expr$6 = "(null)";
    Log_Printf((enum Log_Level)LOG_DEBUG, "serviceId: %s", tmp_if_expr$6);
    const char *relcontrolURL;
    relcontrolURL=XMLUtil_FindFirstElementValue(node, "controlURL", (const _Bool)0, (const _Bool)1);
    self->controlURL=UpnpUtil_ResolveURL((void *)self, base_url, relcontrolURL);
    const char *releventURL;
    releventURL=XMLUtil_FindFirstElementValue(node, "eventSubURL", (const _Bool)0, (const _Bool)1);
    self->eventURL=UpnpUtil_ResolveURL((void *)self, base_url, releventURL);
    self->sid = (char *)(void *)0;
    ListInit(&self->variables, ((signed int (*)(void *, void *))NULL), ((void (*)(void *))NULL));
    self->la_error_desc = (char *)(void *)0;
    self->la_error_code = self->la_error_desc;
    self->la_name = self->la_error_code;
    self->la_result = 0;
    return self;
  }
}

// Service_GetControlURL
// file service.c line 550
const char * Service_GetControlURL(const struct _Service *serv)
{
  char *tmp_if_expr$1;
  if(!(serv == ((const struct _Service *)NULL)))
    tmp_if_expr$1 = serv->controlURL;

  else
    tmp_if_expr$1 = (char *)(void *)0;
  return tmp_if_expr$1;
}

// Service_GetEventURL
// file service.c line 544
const char * Service_GetEventURL(const struct _Service *serv)
{
  char *tmp_if_expr$1;
  if(!(serv == ((const struct _Service *)NULL)))
    tmp_if_expr$1 = serv->eventURL;

  else
    tmp_if_expr$1 = (char *)(void *)0;
  return tmp_if_expr$1;
}

// Service_GetServiceType
// file service.c line 556
const char * Service_GetServiceType(const struct _Service *serv)
{
  char *tmp_if_expr$1;
  if(!(serv == ((const struct _Service *)NULL)))
    tmp_if_expr$1 = serv->serviceType;

  else
    tmp_if_expr$1 = (char *)(void *)0;
  return tmp_if_expr$1;
}

// Service_GetSid
// file service.c line 538
const char * Service_GetSid(const struct _Service *serv)
{
  char *tmp_if_expr$1;
  if(!(serv == ((const struct _Service *)NULL)))
    tmp_if_expr$1 = serv->sid;

  else
    tmp_if_expr$1 = (char *)(void *)0;
  return tmp_if_expr$1;
}

// Service_GetStatusString
// file service.c line 523
char * Service_GetStatusString(const struct _Service *serv, void *result_context, _Bool debug, const char *spacer)
{
  _Bool tmp_if_expr$3;
  if(!(serv == ((const struct _Service *)NULL)))
    tmp_if_expr$3 = serv->_.isa != ((struct _Service_Class *)NULL) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$3 = (_Bool)0;
  char * (*tmp_if_expr$4)(const struct _Service *, void *, _Bool, const char *);
  if(tmp_if_expr$3)
    tmp_if_expr$4 = serv->_.isa->get_status_string;

  else
    tmp_if_expr$4 = (char * (*)(const struct _Service *, void *, _Bool, const char *))(void *)0;
  _Bool tmp_if_expr$1;
  char * (*tmp_if_expr$2)(const struct _Service *, void *, _Bool, const char *);
  char *return_value;
  if(!(tmp_if_expr$4 == ((char * (*)(const struct _Service *, void *, _Bool, const char *))NULL)))
  {
    if(!(serv == ((const struct _Service *)NULL)))
      tmp_if_expr$1 = serv->_.isa != ((struct _Service_Class *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$1 = (_Bool)0;
    if(tmp_if_expr$1)
      tmp_if_expr$2 = serv->_.isa->get_status_string;

    else
      tmp_if_expr$2 = (char * (*)(const struct _Service *, void *, _Bool, const char *))(void *)0;
    return_value=tmp_if_expr$2(serv, result_context, debug, spacer);
    return return_value;
  }

  else
    return (char *)(void *)0;
}

// Service_SendAction
// file service.c line 413
signed int Service_SendAction(struct _Service *serv, struct _IXML_Document **response, const char *actionName, signed int nb_params, const struct _StringPair *params)
{
  signed int rc = 0;
  Log_Printf((enum Log_Level)LOG_DEBUG, "Service_SendAction '%s'", actionName != ((const char *)NULL) ? actionName : "(null)");
  if(serv == ((struct _Service *)NULL))
  {
    Log_Printf((enum Log_Level)LOG_ERROR, "Service_SendAction NULL Service");
    rc = -111;
  }

  else
    if(response == ((struct _IXML_Document **)NULL))
    {
      Log_Printf((enum Log_Level)LOG_ERROR, "Service_SendAction NULL response argument");
      rc = -101;
    }

    else
    {
      struct _IXML_Document *actionNode;
      actionNode=MakeAction(actionName, serv->serviceType, nb_params, params);
      if(actionNode == ((struct _IXML_Document *)NULL))
        rc = -101;

      else
      {
        *response = (struct _IXML_Document *)(void *)0;
        rc=UpnpSendAction(serv->ctrlpt_handle, serv->controlURL, serv->serviceType, (const char *)(void *)0, actionNode, response);
        ActionError(serv, actionName, rc, response);
        ixmlDocument_free(actionNode);
        actionNode = (struct _IXML_Document *)(void *)0;
      }
    }
  return rc;
}

// Service_SendActionAsync
// file service.c line 353
signed int Service_SendActionAsync(const struct _Service *serv, signed int (*callback)(enum Upnp_EventType_e, void *, void *), const char *actionName, signed int nb_params, const struct _StringPair *params)
{
  signed int rc = 0;
  Log_Printf((enum Log_Level)LOG_DEBUG, "Service_SendActionAsync '%s'", actionName != ((const char *)NULL) ? actionName : "(null)");
  if(serv == ((const struct _Service *)NULL))
  {
    Log_Printf((enum Log_Level)LOG_ERROR, "Service_SendActionAsync NULL Service");
    rc = -111;
  }

  else
  {
    struct _IXML_Document *actionNode;
    actionNode=MakeAction(actionName, serv->serviceType, nb_params, params);
    if(actionNode == ((struct _IXML_Document *)NULL))
      rc = -101;

    else
    {
      rc=UpnpSendActionAsync(serv->ctrlpt_handle, serv->controlURL, serv->serviceType, (const char *)(void *)0, actionNode, callback, (const void *)serv);
      if(!(rc == 0))
        Log_Printf((enum Log_Level)LOG_ERROR, "Error in UpnpSendActionAsync -- %d", rc);

      ixmlDocument_free(actionNode);
      actionNode = (struct _IXML_Document *)(void *)0;
    }
  }
  return rc;
}

// Service_SendActionAsyncVa
// file service.c line 389
signed int Service_SendActionAsyncVa(const struct _Service *serv, signed int (*callback)(enum Upnp_EventType_e, void *, void *), const char *actionName, ...)
{
  struct _StringPair params[64l];
  __builtin_va_list ap;
  va_start(ap, actionName);
  signed int nb = 0;
  do
  {
    params[(signed long int)nb].name=va_arg(ap, __typeof__(params[(signed long int)nb].name));
    if(params[(signed long int)nb].name == ((char *)NULL))
      break;

    if(nb >= 64)
      break;

    params[(signed long int)nb].value=va_arg(ap, __typeof__(params[(signed long int)nb].value));
    nb = nb + 1;
  }
  while((_Bool)1);
  va_end(ap);
  Log_Printf((enum Log_Level)LOG_DEBUG, "Service_SendActionAsyncVa : %d pairs found", nb);
  signed int return_value_Service_SendActionAsync$1;
  return_value_Service_SendActionAsync$1=Service_SendActionAsync(serv, callback, actionName, nb, params);
  return return_value_Service_SendActionAsync$1;
}

// Service_SendActionVa
// file service.c line 452
signed int Service_SendActionVa(struct _Service *serv, struct _IXML_Document **response, const char *actionName, ...)
{
  struct _StringPair params[64l];
  __builtin_va_list ap;
  va_start(ap, actionName);
  signed int nb = 0;
  do
  {
    params[(signed long int)nb].name=va_arg(ap, __typeof__(params[(signed long int)nb].name));
    if(params[(signed long int)nb].name == ((char *)NULL))
      break;

    if(nb >= 64)
      break;

    params[(signed long int)nb].value=va_arg(ap, __typeof__(params[(signed long int)nb].value));
    nb = nb + 1;
  }
  while((_Bool)1);
  va_end(ap);
  Log_Printf((enum Log_Level)LOG_DEBUG, "Service_SendActionVa : %d pairs found", nb);
  signed int return_value_Service_SendAction$1;
  return_value_Service_SendAction$1=Service_SendAction(serv, response, actionName, nb, params);
  return return_value_Service_SendAction$1;
}

// Service_SetSid
// file service.c line 151
signed int Service_SetSid(struct _Service *serv, char *sid)
{
  signed int rc = 0;
  char *tmp_if_expr$2;
  char *return_value_talloc_strdup$1;
  if(serv == ((struct _Service *)NULL))
  {
    Log_Printf((enum Log_Level)LOG_ERROR, "Service_SetSid NULL Service");
    rc = -111;
  }

  else
  {
    _talloc_free((void *)serv->sid, "service.c:159");
    if(!(sid == ((char *)NULL)))
    {
      return_value_talloc_strdup$1=talloc_strdup((const void *)serv, sid);
      tmp_if_expr$2 = return_value_talloc_strdup$1;
    }

    else
      tmp_if_expr$2 = (char *)(void *)0;
    serv->sid = tmp_if_expr$2;
  }
  return rc;
}

// Service_SubscribeEventURL
// file service.c line 55
signed int Service_SubscribeEventURL(struct _Service *serv)
{
  signed int rc;
  char *tmp_if_expr$1;
  if(serv == ((struct _Service *)NULL))
  {
    Log_Printf((enum Log_Level)LOG_ERROR, "Service_SubscribeEventURL NULL Service");
    rc = -111;
  }

  else
  {
    if(!(serv->eventURL == ((char *)NULL)))
      tmp_if_expr$1 = serv->eventURL;

    else
      tmp_if_expr$1 = "(null)";
    Log_Printf((enum Log_Level)LOG_DEBUG, "Subscribing to EventURL %s", tmp_if_expr$1);
    signed int timeout = 1801;
    char sid[44l];
    rc=UpnpSubscribe(serv->ctrlpt_handle, serv->eventURL, &timeout, sid);
    _talloc_free((void *)serv->sid, "service.c:69");
    if(rc == 0)
    {
      serv->sid=talloc_strdup((const void *)serv, sid);
      const char *return_value_talloc_get_name$2;
      return_value_talloc_get_name$2=talloc_get_name((const void *)serv);
      Log_Printf((enum Log_Level)LOG_DEBUG, "Subscribed to %s EventURL with SID=%s", return_value_talloc_get_name$2, serv->sid);
    }

    else
    {
      serv->sid = (char *)(void *)0;
      const char *return_value_talloc_get_name$3;
      return_value_talloc_get_name$3=talloc_get_name((const void *)serv);
      Log_Printf((enum Log_Level)LOG_ERROR, "Error Subscribing to %s EventURL -- %d", return_value_talloc_get_name$3, rc);
    }
  }
  return rc;
}

// Service_UnsubscribeEventURL
// file service.c line 90
signed int Service_UnsubscribeEventURL(struct _Service *serv)
{
  signed int rc;
  if(serv == ((struct _Service *)NULL))
  {
    Log_Printf((enum Log_Level)LOG_ERROR, "Service_UnsubscribeEventURL NULL Service");
    rc = -111;
  }

  else
    if(serv->sid == ((char *)NULL))
      rc = 0;

    else
    {
      rc=UpnpUnSubscribe(serv->ctrlpt_handle, serv->sid);
      if(rc == 0)
      {
        const char *return_value_talloc_get_name$1;
        return_value_talloc_get_name$1=talloc_get_name((const void *)serv);
        Log_Printf((enum Log_Level)LOG_DEBUG, "Unsubscribed from %s EventURL with SID=%s", return_value_talloc_get_name$1, serv->sid);
      }

      else
      {
        const char *return_value_talloc_get_name$2;
        return_value_talloc_get_name$2=talloc_get_name((const void *)serv);
        Log_Printf((enum Log_Level)LOG_ERROR, "Error unsubscribing to %s EventURL -- %d", return_value_talloc_get_name$2, rc);
      }
    }
  return rc;
}

// Service_UpdateState
// file service.c line 191
signed int Service_UpdateState(struct _Service *serv, struct _IXML_Document *changedVariables)
{
  signed int rc = 0;
  signed int return_value_strcmp$11;
  _Bool tmp_if_expr$9;
  void (*tmp_if_expr$10)(struct _Service *, const char *, const char *);
  _Bool tmp_if_expr$7;
  void (*tmp_if_expr$8)(struct _Service *, const char *, const char *);
  if(serv == ((struct _Service *)NULL))
  {
    Log_Printf((enum Log_Level)LOG_ERROR, "Service_UpdateState NULL Service");
    rc = -111;
  }

  else
  {
    const char *return_value_talloc_get_name$1;
    return_value_talloc_get_name$1=talloc_get_name((const void *)serv);
    Log_Printf((enum Log_Level)LOG_DEBUG, "State Update for service %s", return_value_talloc_get_name$1);
    struct _IXML_NodeList *properties;
    properties=ixmlDocument_getElementsByTagName(changedVariables, "e:property");
    if(!(properties == ((struct _IXML_NodeList *)NULL)))
    {
      signed int i;
      signed int length;
      unsigned long int return_value_ixmlNodeList_length$2;
      return_value_ixmlNodeList_length$2=ixmlNodeList_length(properties);
      length = (signed int)return_value_ixmlNodeList_length$2;
      i = 0;
      for( ; !(i >= length); i = i + 1)
      {
        struct _IXML_Element *property;
        struct _IXML_Node *return_value_ixmlNodeList_item$3;
        return_value_ixmlNodeList_item$3=ixmlNodeList_item(properties, (unsigned long int)i);
        property = (struct _IXML_Element *)return_value_ixmlNodeList_item$3;
        struct _IXML_NodeList *variables;
        variables=ixmlElement_getElementsByTagName(property, "*");
        if(!(variables == ((struct _IXML_NodeList *)NULL)))
        {
          signed int j;
          signed int length1;
          unsigned long int return_value_ixmlNodeList_length$4;
          return_value_ixmlNodeList_length$4=ixmlNodeList_length(variables);
          length1 = (signed int)return_value_ixmlNodeList_length$4;
          j = 0;
          for( ; !(j >= length1); j = j + 1)
          {
            struct _IXML_Element *variable;
            struct _IXML_Node *return_value_ixmlNodeList_item$5;
            return_value_ixmlNodeList_item$5=ixmlNodeList_item(variables, (unsigned long int)j);
            variable = (struct _IXML_Element *)return_value_ixmlNodeList_item$5;
            const char *name;
            name=ixmlElement_getTagName(variable);
            if(!(name == ((const char *)NULL)))
            {
              return_value_strcmp$11=strcmp(name, "e:property");
              if(!(return_value_strcmp$11 == 0))
              {
                const char *value;
                value=XMLUtil_GetElementValue(variable);
                Log_Printf((enum Log_Level)LOG_DEBUG, "Variable Update '%s' = '%s'", name != ((const char *)NULL) ? name : "(null)", value != ((const char *)NULL) ? value : "(null)");
                struct LISTNODE *node;
                node=GetVariable(serv, name);
                struct _StringPair *var;
                if(!(node == ((struct LISTNODE *)NULL)))
                {
                  var = (struct _StringPair *)node->item;
                  _talloc_free((void *)var->value, "service.c:244");
                  var->value=talloc_strdup((const void *)var, value);
                }

                else
                {
                  void *return_value_talloc_named_const$6;
                  return_value_talloc_named_const$6=talloc_named_const((const void *)serv, sizeof(struct _StringPair) /*16ul*/ , "StringPair");
                  var = (struct _StringPair *)return_value_talloc_named_const$6;
                  var->name=talloc_strdup((const void *)var, name);
                  var->value=talloc_strdup((const void *)var, value);
                  ListAddTail(&serv->variables, (void *)var);
                }
                if(!(serv == ((struct _Service *)NULL)))
                  tmp_if_expr$9 = serv->_.isa != ((struct _Service_Class *)NULL) ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr$9 = (_Bool)0;
                if(tmp_if_expr$9)
                  tmp_if_expr$10 = serv->_.isa->update_variable;

                else
                  tmp_if_expr$10 = (void (*)(struct _Service *, const char *, const char *))(void *)0;
                if(!(tmp_if_expr$10 == ((void (*)(struct _Service *, const char *, const char *))NULL)))
                {
                  if(!(serv == ((struct _Service *)NULL)))
                    tmp_if_expr$7 = serv->_.isa != ((struct _Service_Class *)NULL) ? (_Bool)1 : (_Bool)0;

                  else
                    tmp_if_expr$7 = (_Bool)0;
                  if(tmp_if_expr$7)
                    tmp_if_expr$8 = serv->_.isa->update_variable;

                  else
                    tmp_if_expr$8 = (void (*)(struct _Service *, const char *, const char *))(void *)0;
                  tmp_if_expr$8(serv, var->name, var->value);
                }

              }

            }

          }
        }

        ixmlNodeList_free(variables);
        variables = (struct _IXML_NodeList *)(void *)0;
      }
    }

    ixmlNodeList_free(properties);
    properties = (struct _IXML_NodeList *)(void *)0;
  }
  return rc;
}

// StringStream_Create
// file string_util.h line 155
struct _StringStream * StringStream_Create(void *parent_context)
{
  struct _StringStream *ss;
  void *return_value_talloc_named_const$1;
  return_value_talloc_named_const$1=talloc_named_const(parent_context, sizeof(struct _StringStream) /*24ul*/ , "StringStream");
  ss = (struct _StringStream *)return_value_talloc_named_const$1;
  if(!(ss == ((struct _StringStream *)NULL)))
  {
    *ss = (struct _StringStream){ .file=((struct _IO_FILE *)NULL), .ptr=(char *)(void *)0, .size=(unsigned long int)0 };
    ss->file=open_memstream(&ss->ptr, &ss->size);
    if(ss->file == ((struct _IO_FILE *)NULL))
    {
      _talloc_free((void *)ss, "string_util.c:217");
      ss = (struct _StringStream *)(void *)0;
    }

    else
      do
      {
        signed int (*_talloc_destructor_fn)(struct _StringStream *) = StringStream_destructor;
        _talloc_set_destructor((const void *)ss, (signed int (*)(void *))_talloc_destructor_fn);
      }
      while((_Bool)0);
  }

  return ss;
}

// StringStream_GetFile
// file string_util.h line 163
struct _IO_FILE * StringStream_GetFile(const struct _StringStream *ss)
{
  struct _IO_FILE *tmp_if_expr$1;
  if(!(ss == ((const struct _StringStream *)NULL)))
    tmp_if_expr$1 = ss->file;

  else
    tmp_if_expr$1 = (struct _IO_FILE *)(void *)0;
  return tmp_if_expr$1;
}

// StringStream_GetSnapshot
// file string_util.h line 177
char * StringStream_GetSnapshot(struct _StringStream *ss, void *result_context, unsigned long int *slen)
{
  char *res = (char *)(void *)0;
  if(!(ss == ((struct _StringStream *)NULL)))
  {
    if(!(ss->file == ((struct _IO_FILE *)NULL)))
    {
      fflush(ss->file);
      res=talloc_strdup(result_context, ss->ptr);
      if(!(res == ((char *)NULL)) && !(slen == ((unsigned long int *)NULL)))
        *slen = ss->size;

    }

  }

  return res;
}

// StringStream_destructor
// file string_util.c line 184
static signed int StringStream_destructor(struct _StringStream * const ss)
{
  if(!(ss == ((struct _StringStream *)NULL)))
  {
    if(!(ss->file == ((struct _IO_FILE *)NULL)))
    {
      fclose(ss->file);
      ss->file = (struct _IO_FILE *)(void *)0;
    }

    if(!(ss->ptr == ((char *)NULL)))
    {
      free((void *)ss->ptr);
      ss->ptr = (char *)(void *)0;
    }

  }

  return 0;
}

// String_CleanFileName
// file string_util.h line 77
char * String_CleanFileName(void *talloc_context, const char *s)
{
  char *r;
  r=String_StripSpaces(talloc_context, s);
  if(!(r == ((char *)NULL)))
  {
    char *p = r;
    for( ; !(*p == 0); p = p + 1l)
      if((signed int)*p == 47)
        *p = (char)95;

  }

  return r;
}

// String_Hash
// file string_util.c line 136
unsigned int String_Hash(const char *str)
{
  unsigned int hash = (unsigned int)5381;
  unsigned char c;
  const char *tmp_post$1;
  do
  {
    tmp_post$1 = str;
    str = str + 1l;
    c = (unsigned char)*tmp_post$1;
    if(c == 0)
      break;

    hash = (hash << 5) + hash ^ (unsigned int)c;
  }
  while((_Bool)1);
  return hash;
}

// String_StripSpaces
// file string_util.h line 66
char * String_StripSpaces(void *talloc_context, const char *s)
{
  char *r = ((char *)NULL);
  const unsigned short int **return_value___ctype_b_loc$1;
  const unsigned short int **return_value___ctype_b_loc$3;
  char *tmp_post$4;
  if(!(s == ((const char *)NULL)))
  {
    do
    {
      return_value___ctype_b_loc$1=__ctype_b_loc();
      if((8192 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)*s]) == 0)
        break;

      s = s + 1l;
    }
    while((_Bool)1);
    r=talloc_strdup(talloc_context, s);
    if(!((signed int)*r == 0))
    {
      char *p;
      unsigned long int return_value_strlen$2;
      return_value_strlen$2=strlen(r);
      p = (r + (signed long int)return_value_strlen$2) - (signed long int)1;
      do
      {
        return_value___ctype_b_loc$3=__ctype_b_loc();
        if((8192 & (signed int)(*return_value___ctype_b_loc$3)[(signed long int)(signed int)*p]) == 0)
          break;

        tmp_post$4 = p;
        p = p - 1l;
        *tmp_post$4 = (char)0;
      }
      while((_Bool)1);
    }

  }

  return r;
}

// String_ToBoolean
// file string_util.h line 119
_Bool String_ToBoolean(const char *s, _Bool default_value)
{
  _Bool ret = default_value;
  const unsigned short int **return_value___ctype_b_loc$1;
  if(!(s == ((const char *)NULL)))
  {
    if(!(*s == 0))
    {
      do
      {
        return_value___ctype_b_loc$1=__ctype_b_loc();
        if((8192 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)*s]) == 0)
          break;

        s = s + 1l;
      }
      while((_Bool)1);
      signed int return_value_tolower$2;
      return_value_tolower$2=tolower((signed int)*s);
      switch(return_value_tolower$2)
      {
        case 49:

        case 116:

        case 121:
        {
          ret = (_Bool)1;
          goto __CPROVER_DUMP_L5;
        }
        case 48:

        case 102:

        case 110:
          ret = (_Bool)0;
        default:

          __CPROVER_DUMP_L5:
            ;
      }
    }

  }

  return ret;
}

// UpnpUtil_GetEventString
// file upnp_util.h line 49
char * UpnpUtil_GetEventString(void *talloc_context, enum Upnp_EventType_e eventType, const void *event)
{
  char *p;
  p=talloc_strdup(talloc_context, "");
  void *tmp_ctx;
  tmp_ctx=talloc_named_const((void *)0, (unsigned long int)0, "talloc_new: upnp_util.c:90");
  tpr(&p, "\n\n======================================================================\n");
  const char *s;
  s=UpnpUtil_GetEventTypeString(eventType);
  if(!(s == ((const char *)NULL)))
    tpr(&p, "%s\n", s);

  else
    tpr(&p, "** unknown Upnp_EventType %d **\n", (signed int)eventType);
  void *tmp_if_expr$3;
  char *tmp_if_expr$6;
  void *tmp_if_expr$7;
  char *tmp_if_expr$8;
  char *tmp_if_expr$9;
  char *tmp_if_expr$10;
  void *tmp_if_expr$12;
  void *tmp_if_expr$13;
  if(event == NULL)
    tpr(&p, "(NULL EVENT BODY)\n");

  else
    switch((signed int)eventType)
    {
      case UPNP_DISCOVERY_ADVERTISEMENT_ALIVE:

      case UPNP_DISCOVERY_ADVERTISEMENT_BYEBYE:

      case UPNP_DISCOVERY_SEARCH_RESULT:
      {
        struct Upnp_Discovery * const UpnpUtil_GetEventString$$1$$2$$1$$1$$e = (struct Upnp_Discovery *)event;
        tpr(&p, "ErrCode     =  %d\n", UpnpUtil_GetEventString$$1$$2$$1$$1$$e->ErrCode);
        tpr(&p, "Expires     =  %d\n", UpnpUtil_GetEventString$$1$$2$$1$$1$$e->Expires);
        tpr(&p, "DeviceId    =  %s\n", UpnpUtil_GetEventString$$1$$2$$1$$1$$e->DeviceId);
        tpr(&p, "DeviceType  =  %s\n", UpnpUtil_GetEventString$$1$$2$$1$$1$$e->DeviceType);
        tpr(&p, "ServiceType =  %s\n", UpnpUtil_GetEventString$$1$$2$$1$$1$$e->ServiceType);
        tpr(&p, "ServiceVer  =  %s\n", UpnpUtil_GetEventString$$1$$2$$1$$1$$e->ServiceVer);
        tpr(&p, "Location    =  %s\n", UpnpUtil_GetEventString$$1$$2$$1$$1$$e->Location);
        tpr(&p, "OS          =  %s\n", UpnpUtil_GetEventString$$1$$2$$1$$1$$e->Os);
        tpr(&p, "Date        =  %s\n", UpnpUtil_GetEventString$$1$$2$$1$$1$$e->Date);
        tpr(&p, "Ext         =  %s\n", UpnpUtil_GetEventString$$1$$2$$1$$1$$e->Ext);
        break;
      }
      case UPNP_DISCOVERY_SEARCH_TIMEOUT:
        break;
      case UPNP_CONTROL_ACTION_REQUEST:
      {
        struct Upnp_Action_Request * const UpnpUtil_GetEventString$$1$$2$$1$$2$$e = (struct Upnp_Action_Request *)event;
        tpr(&p, "ErrCode     =  %d\n", UpnpUtil_GetEventString$$1$$2$$1$$2$$e->ErrCode);
        tpr(&p, "ErrStr      =  %s\n", UpnpUtil_GetEventString$$1$$2$$1$$2$$e->ErrStr);
        tpr(&p, "ActionName  =  %s\n", UpnpUtil_GetEventString$$1$$2$$1$$2$$e->ActionName);
        tpr(&p, "DevUDN      =  %s\n", UpnpUtil_GetEventString$$1$$2$$1$$2$$e->DevUDN);
        tpr(&p, "ServiceID   =  %s\n", UpnpUtil_GetEventString$$1$$2$$1$$2$$e->ServiceID);
        char *return_value_XMLUtil_GetDocumentString$1;
        return_value_XMLUtil_GetDocumentString$1=XMLUtil_GetDocumentString(tmp_ctx, UpnpUtil_GetEventString$$1$$2$$1$$2$$e->ActionRequest);
        tpr(&p, "ActRequest  =  %s\n", return_value_XMLUtil_GetDocumentString$1);
        char *return_value_XMLUtil_GetDocumentString$2;
        return_value_XMLUtil_GetDocumentString$2=XMLUtil_GetDocumentString(tmp_ctx, UpnpUtil_GetEventString$$1$$2$$1$$2$$e->ActionResult);
        tpr(&p, "ActResult   =  %s\n", return_value_XMLUtil_GetDocumentString$2);
        break;
      }
      case UPNP_CONTROL_ACTION_COMPLETE:
      {
        struct Upnp_Action_Complete * const e = (struct Upnp_Action_Complete *)event;
        tpr(&p, "ErrCode     =  %d\n", e->ErrCode);
        if(!(e->CtrlUrl == ((struct s_UpnpString *)NULL)))
          tmp_if_expr$3 = (void *)e->CtrlUrl;

        else
          tmp_if_expr$3 = (void *)"(null)";
        tpr(&p, "CtrlUrl     =  %s\n", tmp_if_expr$3);
        char *return_value_XMLUtil_GetDocumentString$4;
        return_value_XMLUtil_GetDocumentString$4=XMLUtil_GetDocumentString(tmp_ctx, e->ActionRequest);
        tpr(&p, "ActRequest  =  %s\n", return_value_XMLUtil_GetDocumentString$4);
        char *return_value_XMLUtil_GetDocumentString$5;
        return_value_XMLUtil_GetDocumentString$5=XMLUtil_GetDocumentString(tmp_ctx, e->ActionResult);
        tpr(&p, "ActResult   =  %s\n", return_value_XMLUtil_GetDocumentString$5);
        break;
      }
      case UPNP_CONTROL_GET_VAR_REQUEST:
      {
        struct Upnp_State_Var_Request * const UpnpUtil_GetEventString$$1$$2$$1$$4$$e = (struct Upnp_State_Var_Request *)event;
        tpr(&p, "ErrCode     =  %d\n", UpnpUtil_GetEventString$$1$$2$$1$$4$$e->ErrCode);
        tpr(&p, "ErrStr      =  %s\n", UpnpUtil_GetEventString$$1$$2$$1$$4$$e->ErrStr);
        tpr(&p, "DevUDN      =  %s\n", UpnpUtil_GetEventString$$1$$2$$1$$4$$e->DevUDN);
        tpr(&p, "ServiceID   =  %s\n", UpnpUtil_GetEventString$$1$$2$$1$$4$$e->ServiceID);
        tpr(&p, "StateVarName=  %s\n", UpnpUtil_GetEventString$$1$$2$$1$$4$$e->StateVarName);
        if(!(UpnpUtil_GetEventString$$1$$2$$1$$4$$e->CurrentVal == ((char *)NULL)))
          tmp_if_expr$6 = UpnpUtil_GetEventString$$1$$2$$1$$4$$e->CurrentVal;

        else
          tmp_if_expr$6 = "(null)";
        tpr(&p, "CurrentVal  =  %s\n", tmp_if_expr$6);
        break;
      }
      case UPNP_CONTROL_GET_VAR_COMPLETE:
      {
        struct Upnp_State_Var_Complete * const UpnpUtil_GetEventString$$1$$2$$1$$5$$e = (struct Upnp_State_Var_Complete *)event;
        tpr(&p, "ErrCode     =  %d\n", UpnpUtil_GetEventString$$1$$2$$1$$5$$e->ErrCode);
        if(!(UpnpUtil_GetEventString$$1$$2$$1$$5$$e->CtrlUrl == ((struct s_UpnpString *)NULL)))
          tmp_if_expr$7 = (void *)UpnpUtil_GetEventString$$1$$2$$1$$5$$e->CtrlUrl;

        else
          tmp_if_expr$7 = (void *)"(null)";
        tpr(&p, "CtrlUrl     =  %s\n", tmp_if_expr$7);
        tpr(&p, "StateVarName=  %s\n", UpnpUtil_GetEventString$$1$$2$$1$$5$$e->StateVarName);
        if(!(UpnpUtil_GetEventString$$1$$2$$1$$5$$e->CurrentVal == ((char *)NULL)))
          tmp_if_expr$8 = UpnpUtil_GetEventString$$1$$2$$1$$5$$e->CurrentVal;

        else
          tmp_if_expr$8 = "(null)";
        tpr(&p, "CurrentVal  =  %s\n", tmp_if_expr$8);
        break;
      }
      case UPNP_EVENT_SUBSCRIPTION_REQUEST:
      {
        struct Upnp_Subscription_Request * const UpnpUtil_GetEventString$$1$$2$$1$$6$$e = (struct Upnp_Subscription_Request *)event;
        if(!(UpnpUtil_GetEventString$$1$$2$$1$$6$$e->ServiceId == ((char *)NULL)))
          tmp_if_expr$9 = UpnpUtil_GetEventString$$1$$2$$1$$6$$e->ServiceId;

        else
          tmp_if_expr$9 = "(null)";
        tpr(&p, "ServiceID   =  %s\n", tmp_if_expr$9);
        if(!(UpnpUtil_GetEventString$$1$$2$$1$$6$$e->UDN == ((char *)NULL)))
          tmp_if_expr$10 = UpnpUtil_GetEventString$$1$$2$$1$$6$$e->UDN;

        else
          tmp_if_expr$10 = "(null)";
        tpr(&p, "UDN         =  %s\n", tmp_if_expr$10);
        tpr(&p, "SID         =  %s\n", UpnpUtil_GetEventString$$1$$2$$1$$6$$e->Sid);
        break;
      }
      case UPNP_EVENT_RECEIVED:
      {
        struct Upnp_Event * const UpnpUtil_GetEventString$$1$$2$$1$$7$$e = (struct Upnp_Event *)event;
        tpr(&p, "SID         =  %s\n", UpnpUtil_GetEventString$$1$$2$$1$$7$$e->Sid);
        tpr(&p, "EventKey    =  %d\n", UpnpUtil_GetEventString$$1$$2$$1$$7$$e->EventKey);
        char *return_value_XMLUtil_GetDocumentString$11;
        return_value_XMLUtil_GetDocumentString$11=XMLUtil_GetDocumentString(tmp_ctx, UpnpUtil_GetEventString$$1$$2$$1$$7$$e->ChangedVariables);
        tpr(&p, "ChangedVars =  %s\n", return_value_XMLUtil_GetDocumentString$11);
        break;
      }
      case UPNP_EVENT_RENEWAL_COMPLETE:
      {
        struct Upnp_Event_Subscribe * const UpnpUtil_GetEventString$$1$$2$$1$$8$$e = (struct Upnp_Event_Subscribe *)event;
        tpr(&p, "ErrCode     =  %d\n", UpnpUtil_GetEventString$$1$$2$$1$$8$$e->ErrCode);
        tpr(&p, "SID         =  %s\n", UpnpUtil_GetEventString$$1$$2$$1$$8$$e->Sid);
        tpr(&p, "TimeOut     =  %d\n", UpnpUtil_GetEventString$$1$$2$$1$$8$$e->TimeOut);
        break;
      }
      case UPNP_EVENT_SUBSCRIBE_COMPLETE:

      case UPNP_EVENT_UNSUBSCRIBE_COMPLETE:
      {
        struct Upnp_Event_Subscribe * const UpnpUtil_GetEventString$$1$$2$$1$$9$$e = (struct Upnp_Event_Subscribe *)event;
        tpr(&p, "ErrCode     =  %d\n", UpnpUtil_GetEventString$$1$$2$$1$$9$$e->ErrCode);
        tpr(&p, "SID         =  %s\n", UpnpUtil_GetEventString$$1$$2$$1$$9$$e->Sid);
        if(!(UpnpUtil_GetEventString$$1$$2$$1$$9$$e->PublisherUrl == ((struct s_UpnpString *)NULL)))
          tmp_if_expr$12 = (void *)UpnpUtil_GetEventString$$1$$2$$1$$9$$e->PublisherUrl;

        else
          tmp_if_expr$12 = (void *)"(null)";
        tpr(&p, "PublisherURL=  %s\n", tmp_if_expr$12);
        tpr(&p, "TimeOut     =  %d\n", UpnpUtil_GetEventString$$1$$2$$1$$9$$e->TimeOut);
        break;
      }
      case UPNP_EVENT_AUTORENEWAL_FAILED:

      case UPNP_EVENT_SUBSCRIPTION_EXPIRED:
      {
        struct Upnp_Event_Subscribe * const UpnpUtil_GetEventString$$1$$2$$1$$10$$e = (struct Upnp_Event_Subscribe *)event;
        tpr(&p, "ErrCode     =  %d\n", UpnpUtil_GetEventString$$1$$2$$1$$10$$e->ErrCode);
        tpr(&p, "SID         =  %s\n", UpnpUtil_GetEventString$$1$$2$$1$$10$$e->Sid);
        if(!(UpnpUtil_GetEventString$$1$$2$$1$$10$$e->PublisherUrl == ((struct s_UpnpString *)NULL)))
          tmp_if_expr$13 = (void *)UpnpUtil_GetEventString$$1$$2$$1$$10$$e->PublisherUrl;

        else
          tmp_if_expr$13 = (void *)"(null)";
        tpr(&p, "PublisherURL=  %s\n", tmp_if_expr$13);
        tpr(&p, "TimeOut     =  %d\n", UpnpUtil_GetEventString$$1$$2$$1$$10$$e->TimeOut);
      }
      default:
        ;
    }
  tpr(&p, "======================================================================\n\n");
  _talloc_free(tmp_ctx, "upnp_util.c:267");
  return p;
}

// UpnpUtil_GetEventTypeString
// file upnp_util.c line 43
const char * UpnpUtil_GetEventTypeString(enum Upnp_EventType_e e)
{
  const char *s = ((const char *)NULL);
  switch((signed int)e)
  {
    case UPNP_DISCOVERY_ADVERTISEMENT_ALIVE:
    {
      s = "UPNP_DISCOVERY_ADVERTISEMENT_ALIVE";
      break;
    }
    case UPNP_DISCOVERY_ADVERTISEMENT_BYEBYE:
    {
      s = "UPNP_DISCOVERY_ADVERTISEMENT_BYEBYE";
      break;
    }
    case UPNP_DISCOVERY_SEARCH_RESULT:
    {
      s = "UPNP_DISCOVERY_SEARCH_RESULT";
      break;
    }
    case UPNP_DISCOVERY_SEARCH_TIMEOUT:
    {
      s = "UPNP_DISCOVERY_SEARCH_TIMEOUT";
      break;
    }
    case UPNP_CONTROL_ACTION_REQUEST:
    {
      s = "UPNP_CONTROL_ACTION_REQUEST";
      break;
    }
    case UPNP_CONTROL_ACTION_COMPLETE:
    {
      s = "UPNP_CONTROL_ACTION_COMPLETE";
      break;
    }
    case UPNP_CONTROL_GET_VAR_REQUEST:
    {
      s = "UPNP_CONTROL_GET_VAR_REQUEST";
      break;
    }
    case UPNP_CONTROL_GET_VAR_COMPLETE:
    {
      s = "UPNP_CONTROL_GET_VAR_COMPLETE";
      break;
    }
    case UPNP_EVENT_SUBSCRIPTION_REQUEST:
    {
      s = "UPNP_EVENT_SUBSCRIPTION_REQUEST";
      break;
    }
    case UPNP_EVENT_RECEIVED:
    {
      s = "UPNP_EVENT_RECEIVED";
      break;
    }
    case UPNP_EVENT_RENEWAL_COMPLETE:
    {
      s = "UPNP_EVENT_RENEWAL_COMPLETE";
      break;
    }
    case UPNP_EVENT_SUBSCRIBE_COMPLETE:
    {
      s = "UPNP_EVENT_SUBSCRIBE_COMPLETE";
      break;
    }
    case UPNP_EVENT_UNSUBSCRIBE_COMPLETE:
    {
      s = "UPNP_EVENT_UNSUBSCRIBE_COMPLETE";
      break;
    }
    case UPNP_EVENT_AUTORENEWAL_FAILED:
    {
      s = "UPNP_EVENT_AUTORENEWAL_FAILED";
      break;
    }
    case UPNP_EVENT_SUBSCRIPTION_EXPIRED:
      s = "UPNP_EVENT_SUBSCRIPTION_EXPIRED";
  }
  return s;
}

// UpnpUtil_ResolveURL
// file upnp_util.h line 74
char * UpnpUtil_ResolveURL(void *talloc_context, const char *base, const char *rel)
{
  signed long int UpnpUtil_ResolveURL$array_size0;
  signed int tmp_if_expr$2;
  signed int return_value_strlen$1;
  if(!(base == ((const char *)NULL)))
  {
    return_value_strlen$1=strlen(base);
    tmp_if_expr$2 = return_value_strlen$1;
  }

  else
    tmp_if_expr$2 = 0;
  signed int tmp_if_expr$4;
  signed int return_value_strlen$3;
  if(!(rel == ((const char *)NULL)))
  {
    return_value_strlen$3=strlen(rel);
    tmp_if_expr$4 = return_value_strlen$3;
  }

  else
    tmp_if_expr$4 = 0;
  UpnpUtil_ResolveURL$array_size0 = (signed long int)(tmp_if_expr$2 + tmp_if_expr$4 + 2);
  char resolved[UpnpUtil_ResolveURL$array_size0];
  resolved[(signed long int)0] = (char)0;
  if(!(rel == ((const char *)NULL)))
  {
    if(!(*rel == 0))
    {
      signed int rc;
      rc=UpnpResolveURL(base, rel, resolved);
      if(!(rc == 0))
      {
        Log_Printf((enum Log_Level)LOG_ERROR, "Error generating URL from '%s' + '%s'", base != ((const char *)NULL) ? base : "(null)", rel != ((const char *)NULL) ? rel : "(null)");
        resolved[(signed long int)0] = (char)0;
      }

    }

  }

  char *return_value_talloc_strdup$5;
  return_value_talloc_strdup$5=talloc_strdup(talloc_context, resolved);
  return return_value_talloc_strdup$5;
}

// VFS_Browse
// file vfs.c line 282
signed int VFS_Browse(struct _VFS * const self, const struct _VFS_Query *q)
{
  _Bool tmp_if_expr$1;
  if(q == ((const struct _VFS_Query *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = q->path == (const char *)(void *)0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$2;
  if(tmp_if_expr$1)
    tmp_if_expr$2 = (_Bool)1;

  else
    tmp_if_expr$2 = (signed int)*q->path == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$3;
  struct _VFS_BrowseStatus (*tmp_if_expr$4)(struct _VFS *, const char *, const struct _VFS_Query *, void *);
  _Bool tmp_if_expr$5;
  struct _VFS_BrowseStatus (*tmp_if_expr$6)(struct _VFS *, const char *, const struct _VFS_Query *, void *);
  char *return_value_strerror$7;
  if(tmp_if_expr$2)
    return -14;

  else
  {
    Log_Printf((enum Log_Level)LOG_DEBUG, "fuse browse : looking for '%s' ...", q->path);
    void *tmp_ctx;
    tmp_ctx=talloc_named_const((void *)0, (unsigned long int)0, "talloc_new: vfs.c:290");
    struct _VFS_BrowseStatus _s = { .rc=0, .ptr=q->path };
    const struct _VFS_Query * const _q = q;
    if(_s.ptr == ((const char *)NULL) || _q == ((const struct _VFS_Query *)NULL))
      _s.rc = -14;

    else
    {
      const char *_p = "";
      if(!(_p == ((const char *)NULL)))
      {
        if((signed int)*_s.ptr == 0)
        {
          _s.rc=vfs_dir_add_entry(_p, 4, _q);
          if(!(_s.rc == 0))
            goto cleanup;

        }

        else
        {
          _p=vfs_match_start_of_path(_s.ptr, _p);
          if(!(_p == ((const char *)NULL)))
          {
            _s.ptr = _p;
            if((signed int)*_s.ptr == 0)
            {
              _s.rc=vfs_dir_begin(_q);
              if(!(_s.rc == 0))
                goto cleanup;

            }

            struct _VFS_BrowseStatus (*func)(struct _VFS *, const char *, const struct _VFS_Query *, void *);
            if(!(self == ((struct _VFS *)NULL)))
              tmp_if_expr$3 = self->_.isa != ((struct _VFS_Class *)NULL) ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$3 = (_Bool)0;
            if(tmp_if_expr$3)
              tmp_if_expr$4 = self->_.isa->browse_root;

            else
              tmp_if_expr$4 = (struct _VFS_BrowseStatus (*)(struct _VFS *, const char *, const struct _VFS_Query *, void *))(void *)0;
            func = tmp_if_expr$4;
            if(!(func == ((struct _VFS_BrowseStatus (*)(struct _VFS *, const char *, const struct _VFS_Query *, void *))NULL)))
            {
              if((signed int)*_s.ptr == 0)
                _s=func(self, _s.ptr, q, tmp_ctx);

              else
                _s=func(self, _s.ptr, q, tmp_ctx);
            }

            if(!(self->show_debug_dir == (_Bool)0))
            {
              _p = ".debug";
              if(!(_p == ((const char *)NULL)))
              {
                if(!(*_p == 0))
                {
                  if((signed int)*_s.ptr == 0)
                  {
                    _s.rc=vfs_dir_add_entry(_p, 4, _q);
                    if(!(_s.rc == 0))
                      goto cleanup;

                  }

                  else
                  {
                    _p=vfs_match_start_of_path(_s.ptr, _p);
                    if(!(_p == ((const char *)NULL)))
                    {
                      _s.ptr = _p;
                      if((signed int)*_s.ptr == 0)
                      {
                        _s.rc=vfs_dir_begin(_q);
                        if(!(_s.rc == 0))
                          goto cleanup;

                      }

                      if(!(self == ((struct _VFS *)NULL)))
                        tmp_if_expr$5 = self->_.isa != ((struct _VFS_Class *)NULL) ? (_Bool)1 : (_Bool)0;

                      else
                        tmp_if_expr$5 = (_Bool)0;
                      if(tmp_if_expr$5)
                        tmp_if_expr$6 = self->_.isa->browse_debug;

                      else
                        tmp_if_expr$6 = (struct _VFS_BrowseStatus (*)(struct _VFS *, const char *, const struct _VFS_Query *, void *))(void *)0;
                      func = tmp_if_expr$6;
                      if(!(func == ((struct _VFS_BrowseStatus (*)(struct _VFS *, const char *, const struct _VFS_Query *, void *))NULL)))
                      {
                        if((signed int)*_s.ptr == 0)
                          _s=func(self, _s.ptr, q, tmp_ctx);

                        else
                          _s=func(self, _s.ptr, q, tmp_ctx);
                      }

                      if(!((signed int)*_s.ptr == 0))
                      {
                        _s.rc = -2;
                        goto cleanup;
                      }

                    }

                    if((signed int)*_s.ptr == 0)
                      goto cleanup;

                  }
                }

              }

            }

            if(!((signed int)*_s.ptr == 0))
            {
              _s.rc = -2;
              goto cleanup;
            }

          }

          if((signed int)*_s.ptr == 0)
            goto cleanup;

        }
      }

    }

  cleanup:
    ;
    struct _VFS_BrowseStatus s = _s;
    if(!((signed int)*s.ptr == 0))
    {
      if(s.rc == 0)
      {
        Log_Printf((enum Log_Level)LOG_WARNING, "VFW_Browse : inconsistent result, path='%s'", q->path);
        s.rc = -2;
      }

    }

    _talloc_free(tmp_ctx, "vfs.c:325");
    tmp_ctx = (void *)0;
    if(s.rc == 0)
    {
      if(!(q->stbuf == ((struct stat *)NULL)))
        q->stbuf->st_blocks = (q->stbuf->st_size + (signed long int)511) / (signed long int)512;

    }

    if(!(s.rc == 0))
    {
      return_value_strerror$7=strerror(-s.rc);
      Log_Printf((enum Log_Level)LOG_DEBUG, "fuse browse => error %d (%s) : path='%s', stops at='%s'", s.rc, return_value_strerror$7, q->path, s.ptr);
    }

    return s.rc;
  }
}

// VFS_Create
// file vfs.c line 361
struct _VFS * VFS_Create(void *talloc_context, _Bool show_debug_dir)
{
  struct _VFS *self;
  const struct _Object_Class *return_value__VFS_GetBaseClass$1;
  return_value__VFS_GetBaseClass$1=_VFS_GetBaseClass();
  struct _Object *return_value__Object_check_alloc$2;
  return_value__Object_check_alloc$2=_Object_check_alloc(talloc_context, return_value__VFS_GetBaseClass$1);
  self = (struct _VFS *)return_value__Object_check_alloc$2;
  if(!(self == ((struct _VFS *)NULL)))
  {
    struct _Object *__super;
    __super=Object_Create((void *)self, (void *)0);
    if(__super == ((struct _Object *)NULL))
    {
      Log_Print((enum Log_Level)LOG_ERROR, "VFS: error in Object_Create");
      self = (struct _VFS *)(void *)0;
    }

  }

  (void)self;
  if(!(self == ((struct _VFS *)NULL)))
    self->show_debug_dir = show_debug_dir;

  return self;
}

// VerifyTimeouts
// file device_list.c line 892
static void VerifyTimeouts(signed int incr)
{
  pthread_mutex_lock(&DeviceListMutex);
  struct LISTNODE *node;
  struct LISTNODE *nextnode = ((struct LISTNODE *)NULL);
  node=ListHead(&GlobalDeviceList);
  for( ; !(node == ((struct LISTNODE *)NULL)); node = nextnode)
  {
    nextnode=ListNext(&GlobalDeviceList, node);
    struct _DeviceNode *devnode = (struct _DeviceNode *)node->item;
    devnode->expires = devnode->expires - incr;
    if(!(devnode->expires >= 1))
    {
      Log_Printf((enum Log_Level)LOG_DEBUG, "Remove expired device Id=%s", devnode->deviceId);
      node->item = NULL;
      ListDelNode(&GlobalDeviceList, node, 0);
      NotifyUpdate((enum DeviceList_EventType)E_DEVICE_REMOVED, devnode);
      _talloc_free((void *)devnode, "device_list.c:914");
    }

  }
  pthread_mutex_unlock(&DeviceListMutex);
}

// XMLUtil_FindFirstElement
// file xml_util.h line 108
struct _IXML_Element * XMLUtil_FindFirstElement(const struct _IXML_Node * const node, const char * const tagname, const _Bool deep, const _Bool log_error)
{
  struct _IXML_Element *res = (struct _IXML_Element *)(void *)0;
  signed int return_value_strcmp$1;
  if(tagname == ((const char *)NULL) || node == ((const struct _IXML_Node *)NULL))
    Log_Printf((enum Log_Level)LOG_ERROR, "GetFirstElementByTagName invalid NULL parameter");

  else
  {
    struct _IXML_Node * const n = (struct _IXML_Node *)node;
    unsigned short int return_value_ixmlNode_getNodeType$2;
    return_value_ixmlNode_getNodeType$2=ixmlNode_getNodeType(n);
    if((signed int)return_value_ixmlNode_getNodeType$2 == eELEMENT_NODE)
    {
      const char *name;
      name=ixmlNode_getNodeName(n);
      if(!(name == ((const char *)NULL)))
      {
        return_value_strcmp$1=strcmp(tagname, name);
        if(return_value_strcmp$1 == 0)
          res = (struct _IXML_Element *)n;

      }

    }

    if(res == ((struct _IXML_Element *)NULL))
      res=findFirstElementRecursive(n, tagname, deep);

    if(res == ((struct _IXML_Element *)NULL))
      Log_Printf((enum Log_Level)(log_error != (_Bool)0 ? LOG_ERROR : LOG_DEBUG), "Can't find '%s' element in XML Node (deep search=%d)", tagname, (signed int)deep);

  }
  return res;
}

// XMLUtil_FindFirstElementValue
// file xml_util.h line 131
const char * XMLUtil_FindFirstElementValue(const struct _IXML_Node * const node, const char * const tagname, const _Bool deep, const _Bool log_error)
{
  struct _IXML_Element *element;
  element=XMLUtil_FindFirstElement(node, tagname, deep, log_error);
  const char *tmp_if_expr$2;
  const char *return_value_XMLUtil_GetElementValue$1;
  if(!(element == ((struct _IXML_Element *)NULL)))
  {
    return_value_XMLUtil_GetElementValue$1=XMLUtil_GetElementValue(element);
    tmp_if_expr$2 = return_value_XMLUtil_GetElementValue$1;
  }

  else
    tmp_if_expr$2 = (const char *)(void *)0;
  return tmp_if_expr$2;
}

// XMLUtil_GetDocumentString
// file xml_util.h line 141
char * XMLUtil_GetDocumentString(void *context, const struct _IXML_Document *doc)
{
  char *ret = (char *)(void *)0;
  if(!(doc == ((const struct _IXML_Document *)NULL)))
  {
    char *s;
    s=ixmlPrintDocument(doc);
    if(!(s == ((char *)NULL)))
    {
      ret=talloc_strdup(context, s);
      ixmlFreeDOMString(s);
    }

    else
      ret=talloc_strdup(context, "(error)");
  }

  else
    ret=talloc_strdup(context, "(null)");
  return ret;
}

// XMLUtil_GetElementValue
// file xml_util.h line 88
const char * XMLUtil_GetElementValue(const struct _IXML_Element *element)
{
  char *res = (char *)(void *)0;
  struct _IXML_Node *child;
  child=ixmlNode_getFirstChild((struct _IXML_Node *)&element->n);
  while(res == ((char *)NULL) && !(child == ((struct _IXML_Node *)NULL)))
  {
    unsigned short int return_value_ixmlNode_getNodeType$1;
    return_value_ixmlNode_getNodeType$1=ixmlNode_getNodeType(child);
    if((signed int)return_value_ixmlNode_getNodeType$1 == eTEXT_NODE)
      res=ixmlNode_getNodeValue(child);

    child=ixmlNode_getNextSibling(child);
  }
  return res;
}

// XMLUtil_GetNodeString
// file xml_util.h line 149
char * XMLUtil_GetNodeString(void *context, const struct _IXML_Node *node)
{
  char *ret = (char *)(void *)0;
  if(!(node == ((const struct _IXML_Node *)NULL)))
  {
    char *s;
    s=ixmlPrintNode((struct _IXML_Node *)node);
    if(!(s == ((char *)NULL)))
    {
      ret=talloc_strdup(context, s);
      ixmlFreeDOMString(s);
    }

    else
      ret=talloc_strdup(context, "(error)");
  }

  else
    ret=talloc_strdup(context, "(null)");
  return ret;
}

// _Cache_PurgeExpiredEntries
// file cache.c line 309
void _Cache_PurgeExpiredEntries(struct _Cache *cache)
{
  if(!(cache == ((struct _Cache *)NULL)))
  {
    signed long int now;
    now=time((signed long int *)(void *)0);
    cache->next_clean = now - (signed long int)1;
    cache_expire_entries(cache, now);
  }

}

// _ContentDir_GetBaseClass
// file content_dir.c line 582
extern const struct _Object_Class * _ContentDir_GetBaseClass()
{
  const struct _ContentDir_Class *return_value__ContentDir_GetClass$1;
  return_value__ContentDir_GetClass$1=_ContentDir_GetClass();
  return &return_value__ContentDir_GetClass$1->_.base;
}

// _ContentDir_GetClass
// file content_dir.c line 582
extern const struct _ContentDir_Class * _ContentDir_GetClass()
{
  static struct _ContentDir_Class the_class = { ._={ .base={ .magic=0u, .name=((const char *)NULL), .super=((struct _Object_Class *)NULL),
    .size=(unsigned long int)0,
    .initializer=NULL, .finalize=((void (*)(struct _Object *))NULL) } } };
  if(the_class._.base.size == 0ul)
  {
    _ObjectClass_Lock();
    if(the_class._.base.size == 0ul)
    {
      const struct _Service_Class *super;
      super=_Service_GetClass();
      the_class._.super = *super;
      the_class._.base.name = "ContentDir";
      the_class._.base.super = (struct _Object_Class *)super;
      the_class._.base.size = sizeof(struct _ContentDir) /*240ul*/ ;
      static const struct _ContentDir the_default_object = { ._={ .isa=&the_class }, .search_caps=((const char *)NULL), .cache=((struct _Cache *)NULL),
    .cache_mutex={ .__data={ .__lock=0, .__count=0u, .__owner=0, .__nusers=0u, .__kind=0,
    .__spins=0, .__elision=0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } } };
      the_class._.base.initializer = (const void *)&the_default_object;
      the_class._.base.finalize = (void (*)(struct _Object *))(void *)0;
      init_class$link1(&the_class);
    }

    _ObjectClass_Unlock();
  }

  return &the_class;
}

// _DJFS_GetBaseClass
// file djfs.c line 547
extern const struct _Object_Class * _DJFS_GetBaseClass()
{
  const struct _DJFS_Class *return_value__DJFS_GetClass$1;
  return_value__DJFS_GetClass$1=_DJFS_GetClass();
  return &return_value__DJFS_GetClass$1->_.base;
}

// _DJFS_GetClass
// file djfs.c line 547
extern const struct _DJFS_Class * _DJFS_GetClass()
{
  static struct _DJFS_Class the_class = { ._={ .base={ .magic=0u, .name=((const char *)NULL), .super=((struct _Object_Class *)NULL),
    .size=(unsigned long int)0,
    .initializer=NULL, .finalize=((void (*)(struct _Object *))NULL) } } };
  if(the_class._.base.size == 0ul)
  {
    _ObjectClass_Lock();
    if(the_class._.base.size == 0ul)
    {
      const struct _VFS_Class *super;
      super=_VFS_GetClass();
      the_class._.super = *super;
      the_class._.base.name = "DJFS";
      the_class._.base.super = (struct _Object_Class *)super;
      the_class._.base.size = sizeof(struct _DJFS) /*88ul*/ ;
      static const struct _DJFS the_default_object = { ._={ .isa=&the_class }, .flags=(enum _DJFS_Flags)0, .search_hist_size=0ul,
    .search_hist_serial=0u, .search_hist=((struct _PtrArray *)NULL),
    .search_hist_mutex={ .__data={ .__lock=0, .__count=0u, .__owner=0, .__nusers=0u, .__kind=0,
    .__spins=0, .__elision=0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } } };
      the_class._.base.initializer = (const void *)&the_default_object;
      the_class._.base.finalize = (void (*)(struct _Object *))(void *)0;
      init_class$link3(&the_class);
    }

    _ObjectClass_Unlock();
  }

  return &the_class;
}

// _DeviceList_LockDevice
// file device_list.c line 686
struct _Device * _DeviceList_LockDevice(const char *deviceName)
{
  struct _Device *dev = (struct _Device *)(void *)0;
  Log_Printf((enum Log_Level)LOG_DEBUG, "LockDevice : device '%s'", deviceName != ((const char *)NULL) ? deviceName : "(null)");
  pthread_mutex_lock(&DeviceListMutex);
  const struct _DeviceNode *devnode;
  devnode=GetDeviceNodeFromName(deviceName, (_Bool)1);
  if(!(devnode == ((const struct _DeviceNode *)NULL)))
    dev = devnode->d;

  if(dev == ((struct _Device *)NULL))
    pthread_mutex_unlock(&DeviceListMutex);

  return dev;
}

// _DeviceList_LockService
// file device_list.c line 720
struct _Service * _DeviceList_LockService(const char *deviceName, const char *serviceType)
{
  struct _Service *serv = (struct _Service *)(void *)0;
  Log_Printf((enum Log_Level)LOG_DEBUG, "LockService : device '%s' service '%s'", deviceName != ((const char *)NULL) ? deviceName : "(null)", serviceType != ((const char *)NULL) ? serviceType : "(null)");
  pthread_mutex_lock(&DeviceListMutex);
  const struct _DeviceNode *devnode;
  devnode=GetDeviceNodeFromName(deviceName, (_Bool)1);
  if(!(devnode == ((const struct _DeviceNode *)NULL)))
    serv=Device_GetServiceFrom(devnode->d, serviceType, (enum GetFrom)FROM_SERVICE_TYPE, (_Bool)1);

  if(serv == ((struct _Service *)NULL))
    pthread_mutex_unlock(&DeviceListMutex);

  return serv;
}

// _DeviceList_UnlockDevice
// file device_list.c line 709
inline void _DeviceList_UnlockDevice(struct _Device *dev)
{
  if(!(dev == ((struct _Device *)NULL)))
    pthread_mutex_unlock(&DeviceListMutex);

}

// _DeviceList_UnlockService
// file device_list.c line 745
inline void _DeviceList_UnlockService(struct _Service *serv)
{
  if(!(serv == ((struct _Service *)NULL)))
    pthread_mutex_unlock(&DeviceListMutex);

}

// _ObjectClass_Lock
// file object.c line 90
signed int _ObjectClass_Lock()
{
  if(g_mutex_initialized == (_Bool)0)
  {
    union anonymous$5 attr;
    pthread_mutexattr_init(&attr);
    pthread_mutexattr_setkind_np(&attr, 1);
    pthread_mutex_init(&g_class_mutex, &attr);
    pthread_mutexattr_destroy(&attr);
    g_mutex_initialized = (_Bool)1;
  }

  signed int return_value_pthread_mutex_lock$1;
  return_value_pthread_mutex_lock$1=pthread_mutex_lock(&g_class_mutex);
  return return_value_pthread_mutex_lock$1;
}

// _ObjectClass_Unlock
// file object.c line 108
inline signed int _ObjectClass_Unlock()
{
  signed int return_value_pthread_mutex_unlock$1;
  return_value_pthread_mutex_unlock$1=pthread_mutex_unlock(&g_class_mutex);
  return return_value_pthread_mutex_unlock$1;
}

// _Object_GetBaseClass
// file object.c line 174
extern const struct _Object_Class * _Object_GetBaseClass()
{
  const struct _Object_Class *return_value__Object_GetClass$1;
  return_value__Object_GetClass$1=_Object_GetClass();
  return return_value__Object_GetClass$1;
}

// _Object_GetClass
// file object.c line 153
extern const struct _Object_Class * _Object_GetClass()
{
  static struct _Object_Class the_class = { .magic=(unsigned int)0xacebabe, .name="Object", .super=(struct _Object_Class *)(void *)0,
    .size=sizeof(struct _Object) /*8ul*/ ,
    .initializer=(void *)0,
    .finalize=(void (*)(struct _Object *))(void *)0 };
  if(the_class.initializer == NULL)
  {
    _ObjectClass_Lock();
    static const struct _Object the_default_object = { ._={ .isa=&the_class } };
    the_class.initializer = (const void *)&the_default_object;
    _ObjectClass_Unlock();
  }

  return &the_class;
}

// _Object_IsA
// file object.c line 118
extern _Bool _Object_IsA(const void * const objptr, const struct _Object_Class *searched_class)
{
  _Bool tmp_if_expr$1;
  const char *tmp_if_expr$2;
  const char *tmp_if_expr$3;
  if(!(objptr == NULL) && !(searched_class == ((const struct _Object_Class *)NULL)))
  {
    const struct _Object * const obj = (const struct _Object *)objptr;
    const struct _Object_Class * const objclass = obj->_.isa;
    if(objclass == ((const struct _Object_Class *)NULL))
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = objclass->magic != (unsigned int)0xacebabe ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$1)
    {
      Log_Printf((enum Log_Level)LOG_ERROR, "Object_IsA : not an object ; memory might be corrupted !!");
      return (_Bool)0;
    }

    const struct _Object_Class *c = objclass;
    for( ; !(c == ((const struct _Object_Class *)NULL)); c = c->super)
      if(c == searched_class)
        return (_Bool)1;

    if(!(objclass->name == ((const char *)NULL)))
      tmp_if_expr$2 = objclass->name;

    else
      tmp_if_expr$2 = "(null)";
    if(!(searched_class->name == ((const char *)NULL)))
      tmp_if_expr$3 = searched_class->name;

    else
      tmp_if_expr$3 = "(null)";
    Log_Printf((enum Log_Level)LOG_ERROR, "Object_IsA : '%s' is not a '%s' ", tmp_if_expr$2, tmp_if_expr$3);
  }

  return (_Bool)0;
}

// _Object_check_alloc
// file object.c line 188
struct _Object * _Object_check_alloc(void *talloc_context, const struct _Object_Class *isa)
{
  const char *return_value_talloc_get_name$1;
  return_value_talloc_get_name$1=talloc_get_name(talloc_context);
  if(return_value_talloc_get_name$1 == NAME_UNDER_CONSTRUCTION)
    return (struct _Object *)talloc_context;

  else
    if(isa == ((const struct _Object_Class *)NULL))
    {
      Log_Print((enum Log_Level)LOG_ERROR, "Object CreateBase NULL isa class");
      return (struct _Object *)(void *)0;
    }

    else
    {
      struct _Object *obj;
      void *return_value_talloc_named_const$2;
      return_value_talloc_named_const$2=talloc_named_const(talloc_context, isa->size, NAME_UNDER_CONSTRUCTION);
      obj = (struct _Object *)return_value_talloc_named_const$2;
      if(obj == ((struct _Object *)NULL))
      {
        Log_Print((enum Log_Level)LOG_ERROR, "Object CreateBase Out of Memory");
        return (struct _Object *)(void *)0;
      }

      else
      {
        if(!(isa->initializer == NULL))
          memcpy((void *)obj, isa->initializer, isa->size);

        obj->_.isa = isa;
        do
        {
          signed int (*_talloc_destructor_fn)(struct _Object *) = destroy;
          _talloc_set_destructor((const void *)obj, (signed int (*)(void *))_talloc_destructor_fn);
        }
        while((_Bool)0);
        return obj;
      }
    }
}

// _Service_GetBaseClass
// file service.c line 575
extern const struct _Object_Class * _Service_GetBaseClass()
{
  const struct _Service_Class *return_value__Service_GetClass$1;
  return_value__Service_GetClass$1=_Service_GetClass();
  return &return_value__Service_GetClass$1->_.base;
}

// _Service_GetClass
// file service.c line 575
extern const struct _Service_Class * _Service_GetClass()
{
  static struct _Service_Class the_class = { ._={ .base={ .magic=0u, .name=((const char *)NULL), .super=((struct _Object_Class *)NULL),
    .size=(unsigned long int)0,
    .initializer=NULL, .finalize=((void (*)(struct _Object *))NULL) } }, .update_variable=((void (*)(struct _Service *, const char *, const char *))NULL),
    .get_status_string=((char * (*)(const struct _Service *, void *, _Bool, const char *))NULL) };
  if(the_class._.base.size == 0ul)
  {
    _ObjectClass_Lock();
    if(the_class._.base.size == 0ul)
    {
      const struct _Object_Class *super;
      super=_Object_GetClass();
      the_class._.super = *super;
      the_class._.base.name = "Service";
      the_class._.base.super = (struct _Object_Class *)super;
      the_class._.base.size = sizeof(struct _Service) /*184ul*/ ;
      static const struct _Service the_default_object = { ._={ .isa=&the_class }, .serviceId=((char *)NULL), .serviceType=((char *)NULL),
    .eventURL=((char *)NULL), .controlURL=((char *)NULL),
    .sid=((char *)NULL), .variables={ .head={ .prev=((struct LISTNODE *)NULL), .next=((struct LISTNODE *)NULL), .item=NULL }, .tail={ .prev=((struct LISTNODE *)NULL), .next=((struct LISTNODE *)NULL), .item=NULL },
    .size=0l,
    .freeNodeList={ .head=((struct FREELISTNODE *)NULL), .element_size=0ul, .maxFreeListLength=0,
    .freeListLength=0 }, .free_func=((void (*)(void *))NULL),
    .cmp_func=((signed int (*)(void *, void *))NULL) },
    .ctrlpt_handle=0,
    .la_name=((char *)NULL), .la_result=0,
    .la_error_code=((char *)NULL), .la_error_desc=((char *)NULL) };
      the_class._.base.initializer = (const void *)&the_default_object;
      the_class._.base.finalize = (void (*)(struct _Object *))(void *)0;
      init_class(&the_class);
    }

    _ObjectClass_Unlock();
  }

  return &the_class;
}

// _String_ToInteger
// file string_util.h line 94
signed long int _String_ToInteger(const char *s, signed long int error_value)
{
  signed long int ret = error_value;
  const unsigned short int **return_value___ctype_b_loc$1;
  if(!(s == ((const char *)NULL)))
  {
    if(!(*s == 0))
    {
      char *endptr = ((char *)NULL);
      signed long int val;
      val=strtoimax(s, &endptr, 10);
      if(!(endptr == ((char *)NULL)))
      {
        do
        {
          return_value___ctype_b_loc$1=__ctype_b_loc();
          if((8192 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)*endptr]) == 0)
            break;

          endptr = endptr + 1l;
        }
        while((_Bool)1);
        if((signed int)*endptr == 0)
          ret = val;

      }

    }

  }

  return ret;
}

// _VFS_GetBaseClass
// file vfs.c line 354
extern const struct _Object_Class * _VFS_GetBaseClass()
{
  const struct _VFS_Class *return_value__VFS_GetClass$1;
  return_value__VFS_GetClass$1=_VFS_GetClass();
  return &return_value__VFS_GetClass$1->_.base;
}

// _VFS_GetClass
// file vfs.c line 354
extern const struct _VFS_Class * _VFS_GetClass()
{
  static struct _VFS_Class the_class = { ._={ .base={ .magic=0u, .name=((const char *)NULL), .super=((struct _Object_Class *)NULL),
    .size=(unsigned long int)0,
    .initializer=NULL, .finalize=((void (*)(struct _Object *))NULL) } }, .browse_root=((struct _VFS_BrowseStatus (*)(struct _VFS *, const char *, const struct _VFS_Query *, void *))NULL),
    .browse_debug=((struct _VFS_BrowseStatus (*)(struct _VFS *, const char *, const struct _VFS_Query *, void *))NULL) };
  if(the_class._.base.size == 0ul)
  {
    _ObjectClass_Lock();
    if(the_class._.base.size == 0ul)
    {
      const struct _Object_Class *super;
      super=_Object_GetClass();
      the_class._.super = *super;
      the_class._.base.name = "VFS";
      the_class._.base.super = (struct _Object_Class *)super;
      the_class._.base.size = sizeof(struct _VFS) /*16ul*/ ;
      static const struct _VFS the_default_object = { ._={ .isa=&the_class }, .show_debug_dir=(_Bool)0 };
      the_class._.base.initializer = (const void *)&the_default_object;
      the_class._.base.finalize = (void (*)(struct _Object *))(void *)0;
      init_class$link2(&the_class);
    }

    _ObjectClass_Unlock();
  }

  return &the_class;
}

// allocate_entry
// file hash.c line 705
static struct hash_entry * allocate_entry(struct hash_table *table)
{
  struct hash_entry *new;
  if(!(table->free_entry_list == ((struct hash_entry *)NULL)))
  {
    new = table->free_entry_list;
    table->free_entry_list = new->next;
  }

  else
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct hash_entry) /*16ul*/ );
    new = (struct hash_entry *)return_value_malloc$1;
  }
  return new;
}

// cache_comparator
// file cache.c line 125
static _Bool cache_comparator(const void *e1, const void *e2)
{
  const struct _Entry * const ce1 = (const struct _Entry *)e1;
  const struct _Entry * const ce2 = (const struct _Entry *)e2;
  signed int return_value_strcmp$1;
  return_value_strcmp$1=strcmp(ce1->key, ce2->key);
  return return_value_strcmp$1 == 0;
}

// cache_destroy
// file cache.c line 369
static signed int cache_destroy(struct _Cache * const cache)
{
  if(!(cache == ((struct _Cache *)NULL)))
  {
    hash_free(cache->table);
    cache->table = (struct hash_table *)(void *)0;
  }

  return 0;
}

// cache_expire_entries
// file cache.c line 193
static void cache_expire_entries(struct _Cache *cache, const signed long int now)
{
  if(cache->max_age >= 1l)
  {
    if(!(cache->next_clean >= now))
    {
      signed int i;
      unsigned long int n;
      n=hash_get_n_entries(cache->table);
      const signed long int n$array_size0 = (signed long int)n;
      void *entries[n$array_size0];
      unsigned long int nn;
      nn=hash_get_entries(cache->table, entries, n);
      i = 0;
      for( ; !((unsigned long int)i >= nn); i = i + 1)
      {
        struct _Entry *ce = (struct _Entry *)entries[(signed long int)i];
        if(!(ce->rip >= now))
        {
          Log_Printf((enum Log_Level)LOG_DEBUG, "CACHE_CLEAN (key='%s')", ce->key);
          void *return_value_hash_delete$1;
          return_value_hash_delete$1=hash_delete(cache->table, (const void *)ce);
          ce = (struct _Entry *)return_value_hash_delete$1;
          if(!(ce == ((struct _Entry *)NULL)))
          {
            if(!(cache->free_expired_data == ((void (*)(const char *, void *))NULL)))
              cache->free_expired_data(ce->key, ce->data);

            ce->data = (void *)0;
            _talloc_free((void *)ce, "cache.c:231");
          }

        }

      }
      cache->next_clean = now + CACHE_CLEAN_PERIOD;
    }

  }

}

// cache_free_expired_data
// file content_dir.c line 341
static void cache_free_expired_data(const char *key, void *data)
{
  struct _ContentDir_Children * const children = (struct _ContentDir_Children *)data;
  signed int return_value__talloc_free$1;
  return_value__talloc_free$1=_talloc_free((void *)children, "content_dir.c:347");
  if(return_value__talloc_free$1 == 0)
    Log_Printf((enum Log_Level)LOG_DEBUG, "ContentDir CACHE_FREE (key='%s')", key);

}

// cache_get
// file cache.c line 140
static struct _Entry * cache_get(struct _Cache *cache, const char *key, _Bool *hit)
{
  const struct _Entry searched = { .key=key, .rip=0l, .data=NULL };
  struct _Entry *ce;
  void *return_value_hash_lookup$1;
  return_value_hash_lookup$1=hash_lookup(cache->table, (const void *)&searched);
  ce = (struct _Entry *)return_value_hash_lookup$1;
  if(!(ce == ((struct _Entry *)NULL)))
    *hit = (_Bool)1;

  else
  {
    *hit = (_Bool)0;
    void *return_value_talloc_named_const$2;
    return_value_talloc_named_const$2=talloc_named_const((const void *)cache, sizeof(struct _Entry) /*24ul*/ , "Entry");
    ce = (struct _Entry *)return_value_talloc_named_const$2;
    if(!(ce == ((struct _Entry *)NULL)))
    {
      ce->key=talloc_strdup((const void *)ce, key);
      if(ce->key == ((const char *)NULL))
        return (struct _Entry *)(void *)0;

      void *return_value_hash_insert$3;
      return_value_hash_insert$3=hash_insert(cache->table, (const void *)ce);
      ce = (struct _Entry *)return_value_hash_insert$3;
    }

  }
  return ce;
}

// cache_hasher
// file cache.c line 111
static unsigned long int cache_hasher(const void *entry, unsigned long int table_size)
{
  const struct _Entry * const ce = (const struct _Entry *)entry;
  unsigned long int h;
  unsigned int return_value_String_Hash$1;
  return_value_String_Hash$1=String_Hash(ce->key);
  h = (unsigned long int)return_value_String_Hash$1 % table_size;
  return h;
}

// check_tuning
// file hash.c line 484
static _Bool check_tuning(struct hash_table *table)
{
  const struct hash_tuning *tuning = table->tuning;
  float epsilon = 0.1f;
  if(epsilon < tuning->growth_threshold)
  {
    if(!(tuning->growth_threshold < 1.000000f + -epsilon))
      goto __CPROVER_DUMP_L1;

    if(!(1.000000f + epsilon < tuning->growth_factor))
      goto __CPROVER_DUMP_L1;

    if(!(tuning->shrink_threshold >= 0.000000f))
      goto __CPROVER_DUMP_L1;

    if(!(tuning->shrink_threshold + epsilon < tuning->shrink_factor))
      goto __CPROVER_DUMP_L1;

    if(!(tuning->shrink_factor <= 1.000000f))
      goto __CPROVER_DUMP_L1;

    if(!(tuning->shrink_threshold + epsilon < tuning->growth_threshold))
      goto __CPROVER_DUMP_L1;

    return (_Bool)1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    table->tuning = &default_tuning;
    return (_Bool)0;
  }
}

// convert
// file charset.c line 239
static signed int convert(struct _Converter * const cvt, const char ** const inbuf, unsigned long int * const inbytesleft, char ** const outbuf, unsigned long int * const outbytesleft)
{
  unsigned long int return_value_iconv$1;
  return_value_iconv$1=iconv(cvt->cd, (char **)inbuf, inbytesleft, outbuf, outbytesleft);
  signed int *return_value___errno_location$3;
  signed int *return_value___errno_location$2;
  char *tmp_post$6;
  char *tmp_post$7;
  char *tmp_post$8;
  _Bool tmp_if_expr$10;
  char *tmp_post$11;
  if(!(return_value_iconv$1 == 18446744073709551615ul))
    return 0;

  else
  {
    signed int *return_value___errno_location$4;
    return_value___errno_location$4=__errno_location();
    if(!(*return_value___errno_location$4 == 84))
    {
      return_value___errno_location$3=__errno_location();
      if(*return_value___errno_location$3 == 22)
        goto __CPROVER_DUMP_L2;

      return_value___errno_location$2=__errno_location();
      return *return_value___errno_location$2;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      signed int save_errno;
      signed int *return_value___errno_location$5;
      return_value___errno_location$5=__errno_location();
      save_errno = *return_value___errno_location$5;
      if(!(cvt->to_utf8 == (_Bool)0))
      {
        if(!(*outbytesleft >= 3ul))
          return 7;

        tmp_post$6 = *outbuf;
        *outbuf = *outbuf + 1l;
        *tmp_post$6 = (char)0xEF;
        tmp_post$7 = *outbuf;
        *outbuf = *outbuf + 1l;
        *tmp_post$7 = (char)0xBF;
        tmp_post$8 = *outbuf;
        *outbuf = *outbuf + 1l;
        *tmp_post$8 = (char)0xBD;
        *outbytesleft = *outbytesleft - (unsigned long int)3;
      }

      else
      {
        const char ERROR_CHAR = (const char)63;
        const char *ibuf = &ERROR_CHAR;
        unsigned long int ileft = (unsigned long int)1;
        unsigned long int return_value_iconv$12;
        return_value_iconv$12=iconv(cvt->cd, (char **)&ibuf, &ileft, outbuf, outbytesleft);
        if(return_value_iconv$12 == 18446744073709551615ul || ileft >= 1ul)
        {
          signed int *return_value___errno_location$9;
          return_value___errno_location$9=__errno_location();
          if(*return_value___errno_location$9 == 7)
            tmp_if_expr$10 = (_Bool)1;

          else
            tmp_if_expr$10 = *outbytesleft < (unsigned long int)1 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$10)
            return 7;

          tmp_post$11 = *outbuf;
          *outbuf = *outbuf + 1l;
          *tmp_post$11 = ERROR_CHAR;
          *outbytesleft = *outbytesleft - 1ul;
        }

      }
      if(*inbytesleft >= 1ul)
      {
        if(save_errno == 22)
        {
          *inbuf = *inbuf + (signed long int)*inbytesleft;
          *inbytesleft = (unsigned long int)0;
        }

        else
        {
          *inbuf = *inbuf + 1l;
          *inbytesleft = *inbytesleft - 1ul;
        }
      }

      return 0;
    }
  }
}

// destroy
// file object.c line 61
static signed int destroy(struct _Object * const obj)
{
  if(!(obj == ((struct _Object *)NULL)))
  {
    const struct _Object_Class * const objclass = obj->_.isa;
    const struct _Object_Class *c = objclass;
    for( ; !(c == ((const struct _Object_Class *)NULL)); c = c->super)
      if(!(c->finalize == ((void (*)(struct _Object *))NULL)))
        c->finalize(obj);

    if(!(objclass == ((const struct _Object_Class *)NULL)))
    {
      if(!(objclass->initializer == NULL))
        memcpy((void *)obj, objclass->initializer, objclass->size);

    }

    obj->_.isa = (const struct _Object_Class *)(void *)0;
  }

  return 0;
}

// destroy$link1
// file device.c line 161
static signed int destroy$link1(struct _Device * const dev)
{
  if(!(dev == ((struct _Device *)NULL)))
  {
    ListDestroy(&dev->services, 0);
    if(!(dev->descDoc == ((struct _IXML_Document *)NULL)))
    {
      ixmlDocument_free(dev->descDoc);
      dev->descDoc = (struct _IXML_Document *)(void *)0;
    }

    *dev = (struct _Device){ .creation_time=0l, .descDoc=((struct _IXML_Document *)NULL), .descDocURL=((const char *)NULL),
    .descDocText=((const char *)NULL), .baseURL=((const char *)NULL),
    .descDocNode=((const struct _IXML_Node *)NULL), .udn=((const char *)NULL),
    .deviceType=((const char *)NULL), .friendlyName=((const char *)NULL),
    .presURL=((const char *)NULL), .services={ .head={ .prev=((struct LISTNODE *)NULL), .next=((struct LISTNODE *)NULL), .item=NULL }, .tail={ .prev=((struct LISTNODE *)NULL), .next=((struct LISTNODE *)NULL), .item=NULL },
    .size=0l,
    .freeNodeList={ .head=((struct FREELISTNODE *)NULL), .element_size=0ul, .maxFreeListLength=0,
    .freeListLength=0 }, .free_func=((void (*)(void *))NULL),
    .cmp_func=((signed int (*)(void *, void *))NULL) } };
  }

  return 0;
}

// finalize
// file service.c line 127
static void finalize(struct _Object *obj)
{
  struct _Service * const serv = (struct _Service *)obj;
  if(!(serv == ((struct _Service *)NULL)))
  {
    Service_UnsubscribeEventURL(serv);
    ListDestroy(&serv->variables, 0);
  }

}

// finalize$link1
// file content_dir.c line 551
static void finalize$link1(struct _Object *obj$link1)
{
  struct _ContentDir * const cds = (struct _ContentDir *)obj$link1;
  if(!(cds == ((struct _ContentDir *)NULL)))
  {
    if(!(cds->cache == ((struct _Cache *)NULL)))
      pthread_mutex_destroy(&cds->cache_mutex);

  }

}

// finalize$link2
// file djfs.c line 521
static void finalize$link2(struct _Object *obj$link2)
{
  struct _DJFS * const self = (struct _DJFS *)obj$link2;
  if(!(self == ((struct _DJFS *)NULL)))
  {
    if(!(self->search_hist == ((struct _PtrArray *)NULL)))
      pthread_mutex_destroy(&self->search_hist_mutex);

  }

}

// findDeviceNode
// file device.c line 113
static const struct _IXML_Node * findDeviceNode(const char * const deviceId, struct _IXML_Document * const descDoc)
{
  struct _IXML_NodeList *devicesList;
  devicesList=ixmlDocument_getElementsByTagName(descDoc, "device");
  unsigned long int return_value_ixmlNodeList_length$1;
  return_value_ixmlNodeList_length$1=ixmlNodeList_length(devicesList);
  unsigned long int return_value_ixmlNodeList_length$2;
  signed int return_value_strcmp$3;
  if(!(return_value_ixmlNodeList_length$1 >= 1ul))
  {
    ixmlNodeList_free(devicesList);
    return (const struct _IXML_Node *)(void *)0;
  }

  else
  {
    const struct _IXML_Node *descDocNode = (const struct _IXML_Node *)(void *)0;
    if(!(deviceId == ((const char *)NULL)))
    {
      signed int i = 0;
      do
      {
        return_value_ixmlNodeList_length$2=ixmlNodeList_length(devicesList);
        if((unsigned long int)i >= return_value_ixmlNodeList_length$2)
          break;

        struct _IXML_Node *node;
        node=ixmlNodeList_item(devicesList, (unsigned long int)i);
        const char *udn;
        udn=XMLUtil_FindFirstElementValue(node, "UDN", (const _Bool)0, (const _Bool)1);
        if(!(udn == ((const char *)NULL)))
        {
          return_value_strcmp$3=strcmp(udn, deviceId);
          if(return_value_strcmp$3 == 0)
          {
            descDocNode = node;
            break;
          }

        }

        i = i + 1;
      }
      while((_Bool)1);
      if(descDocNode == ((const struct _IXML_Node *)NULL))
        Log_Printf((enum Log_Level)LOG_WARNING, "Device_Create can't find UDN='%s' in XML document, defaulting to root device", deviceId);

    }

    if(descDocNode == ((const struct _IXML_Node *)NULL))
      descDocNode=ixmlNodeList_item(devicesList, (unsigned long int)0);

    ixmlNodeList_free(devicesList);
    return descDocNode;
  }
}

// findFirstElementRecursive
// file xml_util.c line 65
static struct _IXML_Element * findFirstElementRecursive(const struct _IXML_Node * const node, const char * const tagname, const _Bool deep)
{
  struct _IXML_Element *res = (struct _IXML_Element *)(void *)0;
  struct _IXML_Node *n;
  n=ixmlNode_getFirstChild((struct _IXML_Node *)node);
  signed int return_value_strcmp$1;
  while(res == ((struct _IXML_Element *)NULL) && !(n == ((struct _IXML_Node *)NULL)))
  {
    unsigned short int return_value_ixmlNode_getNodeType$2;
    return_value_ixmlNode_getNodeType$2=ixmlNode_getNodeType(n);
    if((signed int)return_value_ixmlNode_getNodeType$2 == eELEMENT_NODE)
    {
      const char *name;
      name=ixmlNode_getNodeName(n);
      if(!(name == ((const char *)NULL)))
      {
        return_value_strcmp$1=strcmp(tagname, name);
        if(return_value_strcmp$1 == 0)
          res = (struct _IXML_Element *)n;

      }

    }

    if(res == ((struct _IXML_Element *)NULL) && !(deep == (_Bool)0))
      res=findFirstElementRecursive(n, tagname, deep);

    n=ixmlNode_getNextSibling(n);
  }
  return res;
}

// free_entry
// file hash.c line 730
static void free_entry(struct hash_table *table, struct hash_entry *entry)
{
  entry->data = (void *)0;
  entry->next = table->free_entry_list;
  table->free_entry_list = entry;
}

// fuse_dirfil_for_ls
// file test_upnp.c line 191
static signed int fuse_dirfil_for_ls(struct fuse_dirhandle *h, const char *name, signed int type, unsigned long int ino)
{
  Log_Printf((enum Log_Level)LOG_RESERVED, "  <ls>  %s", name != ((const char *)NULL) ? name : "(null)");
  return 0;
}

// get_status_string
// file service.c line 476
static char * get_status_string(const struct _Service *serv, void *result_context, _Bool debug, const char *spacer)
{
  if(spacer == ((const char *)NULL))
    spacer = "";

  char *p;
  p=talloc_strdup(result_context, "");
  tpr(&p, "%s| \n", spacer);
  const char *n;
  _Bool tmp_if_expr$1;
  if(!(serv == ((const struct _Service *)NULL)))
    tmp_if_expr$1 = serv->_.baseclass != ((struct _Object_Class *)NULL) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  const char *tmp_if_expr$2;
  if(tmp_if_expr$1)
    tmp_if_expr$2 = serv->_.baseclass->name;

  else
    tmp_if_expr$2 = (const char *)(void *)0;
  n = tmp_if_expr$2;
  tpr(&p, "%s+- Class           = %s\n", spacer, n != ((const char *)NULL) ? n : "**ERROR** NO CLASS");
  const char *return_value_talloc_get_name$3;
  return_value_talloc_get_name$3=talloc_get_name((const void *)serv);
  tpr(&p, "%s+- Object Name     = %s\n", spacer, return_value_talloc_get_name$3);
  char *tmp_if_expr$4;
  if(!(serv->serviceType == ((char *)NULL)))
    tmp_if_expr$4 = serv->serviceType;

  else
    tmp_if_expr$4 = "(null)";
  tpr(&p, "%s+- ServiceType     = %s\n", spacer, tmp_if_expr$4);
  char *tmp_if_expr$5;
  if(!(serv->serviceId == ((char *)NULL)))
    tmp_if_expr$5 = serv->serviceId;

  else
    tmp_if_expr$5 = "(null)";
  tpr(&p, "%s+- ServiceId       = %s\n", spacer, tmp_if_expr$5);
  char *tmp_if_expr$6;
  if(!(serv->eventURL == ((char *)NULL)))
    tmp_if_expr$6 = serv->eventURL;

  else
    tmp_if_expr$6 = "(null)";
  tpr(&p, "%s+- EventURL        = %s\n", spacer, tmp_if_expr$6);
  char *tmp_if_expr$7;
  if(!(serv->controlURL == ((char *)NULL)))
    tmp_if_expr$7 = serv->controlURL;

  else
    tmp_if_expr$7 = "(null)";
  tpr(&p, "%s+- ControlURL      = %s\n", spacer, tmp_if_expr$7);
  tpr(&p, "%s+- ServiceStateTable\n", spacer);
  struct LISTNODE *node;
  struct LINKEDLIST * const variables = (struct LINKEDLIST *)&serv->variables;
  node=ListHead(variables);
  char *tmp_if_expr$8;
  char *tmp_if_expr$9;
  _Bool tmp_if_expr$11;
  unsigned long int return_value_strlen$10;
  while(!(node == ((struct LISTNODE *)NULL)))
  {
    struct _StringPair * const var = (struct _StringPair *)node->item;
    if(!(var->name == ((char *)NULL)))
      tmp_if_expr$8 = var->name;

    else
      tmp_if_expr$8 = "(null)";
    if(!(var->value == ((char *)NULL)))
      tmp_if_expr$9 = var->value;

    else
      tmp_if_expr$9 = "(null)";
    if(!(var->value == ((char *)NULL)))
    {
      return_value_strlen$10=strlen(var->value);
      tmp_if_expr$11 = return_value_strlen$10 > (unsigned long int)150 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$11 = (_Bool)0;
    tpr(&p, "%s|    +- %-10s = %.150s%s\n", spacer, tmp_if_expr$8, tmp_if_expr$9, tmp_if_expr$11 ? "..." : "");
    node=ListNext(variables, node);
  }
  char *tmp_if_expr$12;
  if(!(serv->la_name == ((char *)NULL)))
    tmp_if_expr$12 = serv->la_name;

  else
    tmp_if_expr$12 = "(null)";
  tpr(&p, "%s+- Last Action     = %s\n", spacer, tmp_if_expr$12);
  const char *return_value_UpnpGetErrorMessage$13;
  if(!(serv->la_name == ((char *)NULL)))
  {
    return_value_UpnpGetErrorMessage$13=UpnpGetErrorMessage(serv->la_result);
    tpr(&p, "%s|    +- Result     = %d (%s)\n", spacer, serv->la_result, return_value_UpnpGetErrorMessage$13);
  }

  _Bool tmp_if_expr$16;
  if(!(serv->la_error_code == ((char *)NULL)))
    tmp_if_expr$16 = (_Bool)1;

  else
    tmp_if_expr$16 = serv->la_error_desc != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
  char *tmp_if_expr$14;
  char *tmp_if_expr$15;
  if(tmp_if_expr$16)
  {
    if(!(serv->la_error_code == ((char *)NULL)))
      tmp_if_expr$14 = serv->la_error_code;

    else
      tmp_if_expr$14 = "(null)";
    if(!(serv->la_error_desc == ((char *)NULL)))
      tmp_if_expr$15 = serv->la_error_desc;

    else
      tmp_if_expr$15 = "(null)";
    tpr(&p, "%s|    +- SOAP Error = %s (%s)\n", spacer, tmp_if_expr$14, tmp_if_expr$15);
  }

  char *tmp_if_expr$17;
  if(!(serv->sid == ((char *)NULL)))
    tmp_if_expr$17 = serv->sid;

  else
    tmp_if_expr$17 = "(null)";
  tpr(&p, "%s+- SID             = %s\n", spacer, tmp_if_expr$17);
  return p;
}

// get_status_string$link1
// file content_dir.c line 514
static char * get_status_string$link1(const struct _Service *serv$link1, void *result_context$link1, _Bool debug$link1, const char *spacer$link1)
{
  struct _ContentDir * const cds = (struct _ContentDir *)serv$link1;
  char *p$link1;
  const struct _Service_Class *return_value__Service_GetClass$1;
  return_value__Service_GetClass$1=_Service_GetClass();
  p$link1=return_value__Service_GetClass$1->get_status_string(serv$link1, result_context$link1, debug$link1, spacer$link1);
  if(spacer$link1 == ((const char *)NULL))
    spacer$link1 = "";

  void *tmp_ctx;
  tmp_ctx=talloc_named_const((void *)0, (unsigned long int)0, "talloc_new: content_dir.c:528");
  tpr(&p$link1, "%s+- Browse Cache\n", spacer$link1);
  char *return_value_talloc_asprintf$2;
  return_value_talloc_asprintf$2=talloc_asprintf(tmp_ctx, "%s      ", spacer$link1);
  char *return_value_Cache_GetStatusString$3;
  return_value_Cache_GetStatusString$3=Cache_GetStatusString(cds->cache, tmp_ctx, return_value_talloc_asprintf$2);
  tpr(&p$link1, "%s", return_value_Cache_GetStatusString$3);
  _talloc_free(tmp_ctx, "content_dir.c:536");
  return p$link1;
}

// hash_clear
// file hash.c line 605
void hash_clear(struct hash_table *table)
{
  struct hash_entry *bucket = table->bucket;
  for( ; !(bucket >= table->bucket_limit); bucket = bucket + 1l)
    if(!(bucket->data == NULL))
    {
      struct hash_entry *cursor;
      struct hash_entry *next;
      cursor = bucket->next;
      for( ; !(cursor == ((struct hash_entry *)NULL)); cursor = next)
      {
        if(!(table->data_freer == ((void (*)(void *))NULL)))
          table->data_freer(cursor->data);

        cursor->data = (void *)0;
        next = cursor->next;
        cursor->next = table->free_entry_list;
        table->free_entry_list = cursor;
      }
      if(!(table->data_freer == ((void (*)(void *))NULL)))
        table->data_freer(bucket->data);

      bucket->data = (void *)0;
      bucket->next = (struct hash_entry *)(void *)0;
    }

  table->n_buckets_used = (unsigned long int)0;
  table->n_entries = (unsigned long int)0;
}

// hash_delete
// file ../gl/hash.h line 86
void * hash_delete(struct hash_table *table, const void *entry)
{
  void *data;
  struct hash_entry *bucket;
  data=hash_find_entry(table, entry, &bucket, (_Bool)1);
  float tmp_if_expr$1;
  if(data == NULL)
    return (void *)0;

  else
  {
    table->n_entries = table->n_entries - 1ul;
    if(bucket->data == NULL)
    {
      table->n_buckets_used = table->n_buckets_used - 1ul;
      if((float)table->n_buckets_used < table->tuning->shrink_threshold * (float)table->n_buckets)
      {
        check_tuning(table);
        if((float)table->n_buckets_used < table->tuning->shrink_threshold * (float)table->n_buckets)
        {
          const struct hash_tuning *tuning = table->tuning;
          unsigned long int candidate;
          if(!(tuning->is_n_buckets == (_Bool)0))
            tmp_if_expr$1 = (float)table->n_buckets * tuning->shrink_factor;

          else
            tmp_if_expr$1 = (float)table->n_buckets * tuning->shrink_factor * tuning->growth_threshold;
          candidate = (unsigned long int)tmp_if_expr$1;
          hash_rehash(table, candidate);
        }

      }

    }

    return data;
  }
}

// hash_do_for_each
// file hash.c line 358
unsigned long int hash_do_for_each(const struct hash_table *table, _Bool (*processor)(void *, void *), void *processor_data)
{
  unsigned long int counter = (unsigned long int)0;
  struct hash_entry *bucket;
  struct hash_entry *cursor;
  bucket = table->bucket;
  for( ; !(bucket >= table->bucket_limit); bucket = bucket + 1l)
    if(!(bucket->data == NULL))
    {
      cursor = bucket;
      if(!(cursor == ((struct hash_entry *)NULL)))
      {
        _Bool return_value;
        return_value=processor(cursor->data, processor_data);
        if(return_value == (_Bool)0)
          return counter;

        counter = counter + 1ul;
        cursor = cursor->next;
      }

    }

  return counter;
}

// hash_find_entry
// file hash.c line 744
static void * hash_find_entry(struct hash_table *table, const void *entry, struct hash_entry **bucket_head, _Bool delete)
{
  struct hash_entry *bucket;
  unsigned long int return_value;
  return_value=table->hasher(entry, table->n_buckets);
  bucket = table->bucket + (signed long int)return_value;
  struct hash_entry *cursor;
  if(bucket >= table->bucket_limit)
    abort();

  *bucket_head = bucket;
  if(bucket->data == NULL)
    return (void *)0;

  else
  {
    _Bool return_value_1;
    return_value_1=table->comparator(entry, bucket->data);
    if(!(return_value_1 == (_Bool)0))
    {
      void *hash_find_entry$$1$$1$$data = bucket->data;
      if(!(delete == (_Bool)0))
      {
        if(!(bucket->next == ((struct hash_entry *)NULL)))
        {
          struct hash_entry *next = bucket->next;
          *bucket = *next;
          free_entry(table, next);
        }

        else
          bucket->data = (void *)0;
      }

      return hash_find_entry$$1$$1$$data;
    }

    cursor = bucket;
    if(!(cursor->next == ((struct hash_entry *)NULL)))
    {
      _Bool return_value_2;
      return_value_2=table->comparator(entry, cursor->next->data);
      if(!(return_value_2 == (_Bool)0))
      {
        void *data = cursor->next->data;
        if(!(delete == (_Bool)0))
        {
          struct hash_entry *hash_find_entry$$1$$2$$1$$1$$1$$next = cursor->next;
          cursor->next = hash_find_entry$$1$$2$$1$$1$$1$$next->next;
          free_entry(table, hash_find_entry$$1$$2$$1$$1$$1$$next);
        }

        return data;
      }

      cursor = cursor->next;
    }

    return (void *)0;
  }
}

// hash_free
// file ../gl/hash.h line 81
void hash_free(struct hash_table *table)
{
  struct hash_entry *bucket;
  struct hash_entry *cursor;
  struct hash_entry *next;
  if(!(table->data_freer == ((void (*)(void *))NULL)))
  {
    if(!(table->n_entries == 0ul))
    {
      bucket = table->bucket;
      for( ; !(bucket >= table->bucket_limit); bucket = bucket + 1l)
        if(!(bucket->data == NULL))
        {
          cursor = bucket;
          if(!(cursor == ((struct hash_entry *)NULL)))
          {
            table->data_freer(cursor->data);
            cursor = cursor->next;
          }

        }

    }

  }

  bucket = table->bucket;
  for( ; !(bucket >= table->bucket_limit); bucket = bucket + 1l)
  {
    cursor = bucket->next;
    for( ; !(cursor == ((struct hash_entry *)NULL)); cursor = next)
    {
      next = cursor->next;
      free((void *)cursor);
    }
  }
  cursor = table->free_entry_list;
  for( ; !(cursor == ((struct hash_entry *)NULL)); cursor = next)
  {
    next = cursor->next;
    free((void *)cursor);
  }
  free((void *)table->bucket);
  free((void *)table);
}

// hash_get_entries
// file ../gl/hash.h line 71
unsigned long int hash_get_entries(const struct hash_table *table, void **buffer, unsigned long int buffer_size)
{
  unsigned long int counter = (unsigned long int)0;
  struct hash_entry *bucket;
  struct hash_entry *cursor;
  bucket = table->bucket;
  unsigned long int tmp_post$1;
  for( ; !(bucket >= table->bucket_limit); bucket = bucket + 1l)
    if(!(bucket->data == NULL))
    {
      cursor = bucket;
      for( ; !(cursor == ((struct hash_entry *)NULL)); cursor = cursor->next)
      {
        if(counter >= buffer_size)
          return counter;

        tmp_post$1 = counter;
        counter = counter + 1ul;
        buffer[(signed long int)tmp_post$1] = cursor->data;
      }
    }

  return counter;
}

// hash_get_first
// file hash.c line 279
void * hash_get_first(const struct hash_table *table)
{
  struct hash_entry *bucket;
  if(table->n_entries == 0ul)
    return (void *)0;

  else
  {
    bucket = table->bucket;
    for( ; (_Bool)1; bucket = bucket + 1l)
      if(bucket >= table->bucket_limit)
        abort();

      else
        if(!(bucket->data == NULL))
          return bucket->data;

  }
}

// hash_get_max_bucket_length
// file hash.c line 174
unsigned long int hash_get_max_bucket_length(const struct hash_table *table)
{
  struct hash_entry *bucket;
  unsigned long int max_bucket_length = (unsigned long int)0;
  bucket = table->bucket;
  for( ; !(bucket >= table->bucket_limit); bucket = bucket + 1l)
    if(!(bucket->data == NULL))
    {
      struct hash_entry *cursor = bucket;
      unsigned long int bucket_length = (unsigned long int)1;
      do
      {
        cursor = cursor->next;
        if(cursor == ((struct hash_entry *)NULL))
          break;

        bucket_length = bucket_length + 1ul;
      }
      while((_Bool)1);
      if(!(max_bucket_length >= bucket_length))
        max_bucket_length = bucket_length;

    }

  return max_bucket_length;
}

// hash_get_n_buckets
// file hash.c line 150
unsigned long int hash_get_n_buckets(const struct hash_table *table)
{
  return table->n_buckets;
}

// hash_get_n_buckets_used
// file hash.c line 158
unsigned long int hash_get_n_buckets_used(const struct hash_table *table)
{
  return table->n_buckets_used;
}

// hash_get_n_entries
// file ../gl/hash.h line 62
unsigned long int hash_get_n_entries(const struct hash_table *table)
{
  return table->n_entries;
}

// hash_get_next
// file hash.c line 298
void * hash_get_next(const struct hash_table *table, const void *entry)
{
  struct hash_entry *bucket;
  unsigned long int return_value;
  return_value=table->hasher(entry, table->n_buckets);
  bucket = table->bucket + (signed long int)return_value;
  struct hash_entry *cursor;
  if(bucket >= table->bucket_limit)
    abort();

  cursor = bucket;
  if(!(cursor == ((struct hash_entry *)NULL)))
  {
    if(cursor->data == entry)
    {
      if(!(cursor->next == ((struct hash_entry *)NULL)))
        return cursor->next->data;

    }

    cursor = cursor->next;
  }

  bucket = bucket + 1l;
  if(!(bucket >= table->bucket_limit))
  {
    if(!(bucket->data == NULL))
      return bucket->data;

  }

  return (void *)0;
}

// hash_initialize
// file ../gl/hash.h line 77
struct hash_table * hash_initialize(unsigned long int candidate, const struct hash_tuning *tuning, unsigned long int (*hasher)(const void *, unsigned long int), _Bool (*comparator)(const void *, const void *), void (*data_freer)(void *))
{
  struct hash_table *table;
  void *return_value_calloc$3;
  if(comparator == ((_Bool (*)(const void *, const void *))NULL) || hasher == ((unsigned long int (*)(const void *, unsigned long int))NULL))
    return (struct hash_table *)(void *)0;

  else
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct hash_table) /*80ul*/ );
    table = (struct hash_table *)return_value_malloc$1;
    if(table == ((struct hash_table *)NULL))
      return (struct hash_table *)(void *)0;

    else
    {
      if(tuning == ((const struct hash_tuning *)NULL))
        tuning = &default_tuning;

      table->tuning = tuning;
      _Bool return_value_check_tuning$2;
      return_value_check_tuning$2=check_tuning(table);
      if(!(return_value_check_tuning$2 == (_Bool)0))
      {
        if(tuning->is_n_buckets == (_Bool)0)
        {
          float new_candidate = (float)candidate / tuning->growth_threshold;
          if(new_candidate >= 1.844674e+19f)
            goto fail;

          candidate = (unsigned long int)new_candidate;
        }

        if(candidate >= 1152921504606846976ul)
          goto fail;

        table->n_buckets=next_prime(candidate);
        if(table->n_buckets >= 1152921504606846976ul)
          goto fail;

        return_value_calloc$3=calloc(table->n_buckets, sizeof(struct hash_entry) /*16ul*/ );
        table->bucket = (struct hash_entry *)return_value_calloc$3;
        table->bucket_limit = table->bucket + (signed long int)table->n_buckets;
        table->n_buckets_used = (unsigned long int)0;
        table->n_entries = (unsigned long int)0;
        table->hasher = hasher;
        table->comparator = comparator;
        table->data_freer = data_freer;
        table->free_entry_list = (struct hash_entry *)(void *)0;
        return table;
      }

      else
      {

      fail:
        ;
        free((void *)table);
        return (struct hash_table *)(void *)0;
      }
    }
  }
}

// hash_insert
// file ../gl/hash.h line 85
void * hash_insert(struct hash_table *table, const void *entry)
{
  void *data;
  struct hash_entry *bucket;
  if(entry == NULL)
    abort();

  data=hash_find_entry(table, entry, &bucket, (_Bool)0);
  float tmp_if_expr$1;
  if(!(data == NULL))
    return data;

  else
  {
    if(!(bucket->data == NULL))
    {
      struct hash_entry *new_entry;
      new_entry=allocate_entry(table);
      if(new_entry == ((struct hash_entry *)NULL))
        return (void *)0;

      new_entry->data = (void *)entry;
      new_entry->next = bucket->next;
      bucket->next = new_entry;
      table->n_entries = table->n_entries + 1ul;
      return (void *)entry;
    }

    bucket->data = (void *)entry;
    table->n_entries = table->n_entries + 1ul;
    table->n_buckets_used = table->n_buckets_used + 1ul;
    if((float)table->n_buckets_used > table->tuning->growth_threshold * (float)table->n_buckets)
    {
      check_tuning(table);
      if((float)table->n_buckets_used > table->tuning->growth_threshold * (float)table->n_buckets)
      {
        const struct hash_tuning *tuning = table->tuning;
        float candidate;
        if(!(tuning->is_n_buckets == (_Bool)0))
          tmp_if_expr$1 = (float)table->n_buckets * tuning->growth_factor;

        else
          tmp_if_expr$1 = (float)table->n_buckets * tuning->growth_factor * tuning->growth_threshold;
        candidate = tmp_if_expr$1;
        if(candidate >= 1.844674e+19f)
          return (void *)0;

        _Bool return_value_hash_rehash$2;
        return_value_hash_rehash$2=hash_rehash(table, (unsigned long int)candidate);
        if(return_value_hash_rehash$2 == (_Bool)0)
          entry = (void *)0;

      }

    }

    return (void *)entry;
  }
}

// hash_lookup
// file ../gl/hash.h line 66
void * hash_lookup(const struct hash_table *table, const void *entry)
{
  struct hash_entry *bucket;
  unsigned long int return_value;
  return_value=table->hasher(entry, table->n_buckets);
  bucket = table->bucket + (signed long int)return_value;
  struct hash_entry *cursor;
  if(bucket >= table->bucket_limit)
    abort();

  _Bool return_value_1;
  if(bucket->data == NULL)
    return (void *)0;

  else
  {
    cursor = bucket;
    if(!(cursor == ((struct hash_entry *)NULL)))
    {
      return_value_1=table->comparator(entry, cursor->data);
      if(!(return_value_1 == (_Bool)0))
        return cursor->data;

      cursor = cursor->next;
    }

    return (void *)0;
  }
}

// hash_print_statistics
// file hash.c line 230
void hash_print_statistics(const struct hash_table *table, struct _IO_FILE *stream)
{
  unsigned long int n_entries;
  n_entries=hash_get_n_entries(table);
  unsigned long int n_buckets;
  n_buckets=hash_get_n_buckets(table);
  unsigned long int n_buckets_used;
  n_buckets_used=hash_get_n_buckets_used(table);
  unsigned long int max_bucket_length;
  max_bucket_length=hash_get_max_bucket_length(table);
  fprintf(stream, "# entries:         %lu\n", (unsigned long int)n_entries);
  fprintf(stream, "# buckets:         %lu\n", (unsigned long int)n_buckets);
  fprintf(stream, "# buckets used:    %lu (%.2f%%)\n", (unsigned long int)n_buckets_used, (100.0 * (double)n_buckets_used) / (double)n_buckets);
  fprintf(stream, "max bucket length: %lu\n", (unsigned long int)max_bucket_length);
}

// hash_rehash
// file hash.c line 819
_Bool hash_rehash(struct hash_table *table, unsigned long int candidate)
{
  struct hash_table *new_table;
  struct hash_entry *bucket;
  struct hash_entry *cursor;
  struct hash_entry *next;
  new_table=hash_initialize(candidate, table->tuning, table->hasher, table->comparator, table->data_freer);
  if(new_table == ((struct hash_table *)NULL))
    return (_Bool)0;

  else
  {
    new_table->free_entry_list = table->free_entry_list;
    bucket = table->bucket;
    for( ; !(bucket >= table->bucket_limit); bucket = bucket + 1l)
      if(!(bucket->data == NULL))
      {
        cursor = bucket;
        if(!(cursor == ((struct hash_entry *)NULL)))
        {
          void *data = cursor->data;
          struct hash_entry *new_bucket;
          unsigned long int return_value;
          return_value=new_table->hasher(data, new_table->n_buckets);
          new_bucket = new_table->bucket + (signed long int)return_value;
          if(new_bucket >= new_table->bucket_limit)
            abort();

          next = cursor->next;
          if(!(new_bucket->data == NULL))
          {
            if(cursor == bucket)
            {
              struct hash_entry *new_entry;
              new_entry=allocate_entry(new_table);
              if(new_entry == ((struct hash_entry *)NULL))
                return (_Bool)0;

              new_entry->data = data;
              new_entry->next = new_bucket->next;
              new_bucket->next = new_entry;
            }

            else
            {
              cursor->next = new_bucket->next;
              new_bucket->next = cursor;
            }
          }

          else
          {
            new_bucket->data = data;
            new_table->n_buckets_used = new_table->n_buckets_used + 1ul;
            if(!(cursor == bucket))
              free_entry(new_table, cursor);

          }
          cursor = next;
        }

      }

    free((void *)table->bucket);
    table->bucket = new_table->bucket;
    table->bucket_limit = new_table->bucket_limit;
    table->n_buckets = new_table->n_buckets;
    table->n_buckets_used = new_table->n_buckets_used;
    table->free_entry_list = new_table->free_entry_list;
    free((void *)new_table);
    return (_Bool)1;
  }
}

// hash_reset_tuning
// file hash.c line 472
void hash_reset_tuning(struct hash_tuning *tuning)
{
  *tuning = default_tuning;
}

// hash_string
// file hash.c line 421
unsigned long int hash_string(const char *string, unsigned long int n_buckets)
{
  unsigned long int value = (unsigned long int)0;
  unsigned char ch;
  do
  {
    ch = (unsigned char)*string;
    if(ch == 0)
      break;

    value = (value * (unsigned long int)31 + (unsigned long int)ch) % n_buckets;
    string = string + 1l;
  }
  while((_Bool)1);
  return value;
}

// hash_table_ok
// file hash.c line 201
_Bool hash_table_ok(const struct hash_table *table)
{
  struct hash_entry *bucket;
  unsigned long int n_buckets_used = (unsigned long int)0;
  unsigned long int n_entries = (unsigned long int)0;
  bucket = table->bucket;
  for( ; !(bucket >= table->bucket_limit); bucket = bucket + 1l)
    if(!(bucket->data == NULL))
    {
      struct hash_entry *cursor = bucket;
      n_buckets_used = n_buckets_used + 1ul;
      n_entries = n_entries + 1ul;
      do
      {
        cursor = cursor->next;
        if(cursor == ((struct hash_entry *)NULL))
          break;

        n_entries = n_entries + 1ul;
      }
      while((_Bool)1);
    }

  if(n_buckets_used == table->n_buckets_used)
  {
    if(!(n_entries == table->n_entries))
      goto __CPROVER_DUMP_L6;

    return (_Bool)1;
  }

  else
  {

  __CPROVER_DUMP_L6:
    ;
    return (_Bool)0;
  }
}

// init_class
// file service.c line 568
static void init_class(struct _Service_Class * const isa)
{
  (&isa->_.base)->finalize = finalize;
  isa->update_variable = (void (*)(struct _Service *, const char *, const char *))(void *)0;
  isa->get_status_string = get_status_string;
}

// init_class$link1
// file content_dir.c line 570
static void init_class$link1(struct _ContentDir_Class * const isa$link1)
{
  (&isa$link1->_.base)->finalize = finalize$link1;
  (&isa$link1->_.super)->get_status_string = get_status_string$link1;
  UpnpSetMaxContentLength((unsigned long int)(1024 * 1024));
}

// init_class$link2
// file vfs.c line 348
static void init_class$link2(struct _VFS_Class * const isa$link2)
{
  isa$link2->browse_root = (struct _VFS_BrowseStatus (*)(struct _VFS *, const char *, const struct _VFS_Query *, void *))(void *)0;
  isa$link2->browse_debug = BrowseDebug;
}

// init_class$link3
// file djfs.c line 540
static void init_class$link3(struct _DJFS_Class * const isa$link3)
{
  (&isa$link3->_.base)->finalize = finalize$link2;
  (&isa$link3->_.super)->browse_root = BrowseRoot;
  (&isa$link3->_.super)->browse_debug = BrowseDebug$link1;
}

// int_to_string
// file content_dir.c line 109
static const char * int_to_string(void *result_context, signed long int val)
{
  char *return_value_talloc_asprintf$1;
  switch(val)
  {
    case (signed long int)0:
      return "0";
    case (signed long int)1:
      return "1";
    default:
    {
      return_value_talloc_asprintf$1=talloc_asprintf(result_context, "%ld", val);
      return return_value_talloc_asprintf$1;
    }
  }
}

// is_browse
// file content_dir.c line 73
static inline _Bool is_browse(const char * const criteria)
{
  return criteria == CRITERIA_BROWSE_METADATA || criteria == CRITERIA_BROWSE_CHILDREN;
}

// is_prime
// file hash.c line 437
static _Bool is_prime(unsigned long int candidate)
{
  unsigned long int divisor = (unsigned long int)3;
  unsigned long int square = divisor * divisor;
  for( ; !(candidate % divisor == 0ul) && !(square >= candidate); divisor = divisor + 1ul)
  {
    divisor = divisor + 1ul;
    square = square + (unsigned long int)4 * divisor;
  }
  return (_Bool)(candidate % divisor != 0ul ? 1 : 0);
}

// main
// file test_upnp.c line 492
signed int main(signed int argc, char **argv)
{
  signed int rc;
  unsigned long int cmdloop_thread;
  signed int sig;
  talloc_enable_leak_report();
  rc=Log_Initialize(stdout_print);
  if(!(rc == 0))
  {
    Log_Printf((enum Log_Level)LOG_ERROR, "Error initialising Log");
    exit(rc);
  }

  Log_Colorize((_Bool)1);
  Log_SetMaxLevel((enum Log_Level)LOG_DEBUG);
  rc=Charset_Initialize((const char *)(void *)0);
  if(!(rc == 0))
    Log_Printf((enum Log_Level)LOG_ERROR, "Error initialising charset");

  rc=DeviceList_Start("ssdp:all", (void (*)(enum DeviceList_EventType, const char *))(void *)0);
  if(!(rc == 0))
  {
    Log_Printf((enum Log_Level)LOG_ERROR, "Error starting UPnP Control Point");
    exit(rc);
  }

  rc=pthread_create(&cmdloop_thread, (const union pthread_attr_t *)(void *)0, CommandLoop, (void *)0);
  struct anonymous$10 sigs_to_catch;
  sigemptyset(&sigs_to_catch);
  sigaddset(&sigs_to_catch, 2);
  sigwait(&sigs_to_catch, &sig);
  Log_Printf((enum Log_Level)LOG_WARNING, "Shutting down on signal %d...", sig);
  rc=DeviceList_Stop();
  Charset_Finish();
  Log_Finish();
  exit(rc);
}

// make_device_name
// file device_list.c line 189
static char * make_device_name(void *talloc_context, const char *base)
{
  _Bool tmp_if_expr$1;
  if(base == ((const char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*base == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    base = "unnamed";

  char *name;
  name=String_CleanFileName(talloc_context, base);
  char *res = name;
  signed int i = 1;
  struct _DeviceNode *return_value_GetDeviceNodeFromName$2;
  do
  {
    return_value_GetDeviceNodeFromName$2=GetDeviceNodeFromName(res, (_Bool)0);
    if(return_value_GetDeviceNodeFromName$2 == ((struct _DeviceNode *)NULL))
      break;

    if(!(res == name))
      _talloc_free((void *)res, "device_list.c:199");

    i = i + 1;
    res=talloc_asprintf(talloc_context, "%s_%d", name, i);
  }
  while((_Bool)1);
  if(!(res == name))
    _talloc_free((void *)name, "device_list.c:203");

  return res;
}

// next_prime
// file hash.c line 456
static unsigned long int next_prime(unsigned long int candidate)
{
  if(!(candidate >= 10ul))
    candidate = (unsigned long int)10;

  candidate = candidate | (unsigned long int)1;
  _Bool return_value_is_prime$1;
  do
  {
    return_value_is_prime$1=is_prime(candidate);
    if(return_value_is_prime$1 != (_Bool)0)
      break;

    candidate = candidate + (unsigned long int)2;
  }
  while((_Bool)1);
  return candidate;
}

// print_commands
// file test_upnp.c line 170
static void print_commands()
{
  signed int i;
  Log_Lock();
  Log_Printf((enum Log_Level)LOG_RESERVED, "Valid Commands:");
  i = 0;
  for( ; !(i >= CMDNUM); i = i + 1)
    Log_Printf((enum Log_Level)LOG_RESERVED, "  %-14s %s", CMDLIST[(signed long int)i].str, CMDLIST[(signed long int)i].args);
  Log_Print((enum Log_Level)LOG_RESERVED, "");
  Log_Unlock();
}

// process_command
// file test_upnp.c line 200
static signed int process_command(const char *cmdline)
{
  signed int process_command$$1$$rc = 0;
  void *tmp_ctx;
  tmp_ctx=talloc_named_const((void *)0, (unsigned long int)0, "talloc_new: test_upnp.c:207");
  cmdline=Charset_ConvertString((enum _Charset_Direction)CHARSET_TO_UTF8, cmdline, (char *)(void *)0, (unsigned long int)0, tmp_ctx);
  char *strarg[100l] = { (char *)(void *)0, ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL) };
  signed long int strarg$array_size0;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(cmdline);
  strarg$array_size0 = (signed long int)(return_value_strlen$1 + (unsigned long int)1);
  char buffer[strarg$array_size0];
  strcpy(buffer, cmdline);
  signed int validargs = 0;
  signed int invalidargs = 0;
  const char *cmd = (const char *)(void *)0;
  signed int cmdnum = -1;
  char *p = buffer;
  const unsigned short int **return_value___ctype_b_loc$2;
  _Bool tmp_if_expr$9;
  char *tmp_post$3;
  signed int tmp_post$4;
  const unsigned short int **return_value___ctype_b_loc$5;
  char *tmp_post$6;
  signed int tmp_post$7;
  signed int tmp_post$8;
  while(!(*p == 0))
  {
    do
    {
      return_value___ctype_b_loc$2=__ctype_b_loc();
      if((8192 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)*p]) == 0)
        break;

      p = p + 1l;
    }
    while((_Bool)1);
    if((signed int)*p == 34)
      tmp_if_expr$9 = (_Bool)1;

    else
      tmp_if_expr$9 = (signed int)*p == 39 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$9)
    {
      const char delim = *p;
      char *begin;
      p = p + 1l;
      begin = p;
      for( ; !(*p == 0); p = p + 1l)
        if(*p == delim)
          break;

      if(!(*p == 0))
      {
        tmp_post$3 = p;
        p = p + 1l;
        *tmp_post$3 = (char)0;
        tmp_post$4 = validargs;
        validargs = validargs + 1;
        strarg[(signed long int)tmp_post$4] = begin;
      }

      else
      {
        invalidargs = invalidargs + 1;
        goto cleanup;
      }
    }

    else
    {
      char * const process_command$$1$$1$$2$$begin = p;
      for( ; !(*p == 0); p = p + 1l)
      {
        return_value___ctype_b_loc$5=__ctype_b_loc();
        if(!((8192 & (signed int)(*return_value___ctype_b_loc$5)[(signed long int)(signed int)*p]) == 0))
          break;

      }
      if(!(*p == 0))
      {
        tmp_post$6 = p;
        p = p + 1l;
        *tmp_post$6 = (char)0;
        tmp_post$7 = validargs;
        validargs = validargs + 1;
        strarg[(signed long int)tmp_post$7] = process_command$$1$$1$$2$$begin;
      }

      else
        if(!(p == process_command$$1$$1$$2$$begin))
        {
          tmp_post$8 = validargs;
          validargs = validargs + 1;
          strarg[(signed long int)tmp_post$8] = process_command$$1$$1$$2$$begin;
        }

    }
  }
  cmd = strarg[(signed long int)0];
  signed int i;
  _Bool return_value_PtrArray_IteratorLoop$14;
  char *tmp_if_expr$16;
  char *tmp_if_expr$17;
  const struct _ContentDir_BrowseResult *process_command$$1$$4$$3$$res;
  struct _VFS *vfs;
  struct _DJFS *return_value_DJFS_Create$22;
  const char *s;
  const struct _ContentDir_BrowseResult *process_command$$1$$4$$6$$res;
  _Bool return_value_PtrArray_IteratorLoop$28;
  char *tmp_if_expr$30;
  char *process_command$$1$$4$$8$$s;
  if(cmd == ((const char *)NULL))
    invalidargs = invalidargs + 1;

  else
  {
    i = 0;
    for( ; !(i >= CMDNUM); i = i + 1)
    {
      signed int return_value_strcasecmp$10;
      return_value_strcasecmp$10=strcasecmp(cmd, CMDLIST[(signed long int)i].str);
      if(return_value_strcasecmp$10 == 0)
      {
        cmdnum = (signed int)CMDLIST[(signed long int)i].cmdnum;
        if(!(validargs == CMDLIST[(signed long int)i].numargs))
        {
          invalidargs = invalidargs + 1;
          goto cleanup;
        }

      }

    }
    switch(cmdnum)
    {
      case CMD_HELP:
      {
        print_commands();
        break;
      }
      case CMD_LOGLEVEL:
      {
        signed int level;
        signed int return_value_sscanf$11;
        return_value_sscanf$11=sscanf(strarg[(signed long int)1], "%d", &level);
        if(return_value_sscanf$11 == 1)
          Log_SetMaxLevel((enum Log_Level)level);

        else
          invalidargs = invalidargs + 1;
        break;
      }
      case CMD_LEAK:
      {
        talloc_report((void *)0, stdout);
        break;
      }
      case CMD_LEAK_FULL:
      {
        talloc_report_full((void *)0, stdout);
        break;
      }
      case CMD_BROWSE:
      {
        const struct _ContentDir_BrowseResult *res = (const struct _ContentDir_BrowseResult *)(void *)0;
        do
        {
          struct _Service *__serv;
          __serv=_DeviceList_LockService(strarg[(signed long int)1], "urn:schemas-upnp-org:service:ContentDirectory:1");
          const struct _Object_Class *return_value__ContentDir_GetBaseClass$12;
          return_value__ContentDir_GetBaseClass$12=_ContentDir_GetBaseClass();
          _Bool return_value__Object_IsA$13;
          return_value__Object_IsA$13=_Object_IsA((const void *)__serv, return_value__ContentDir_GetBaseClass$12);
          res=ContentDir_Browse(return_value__Object_IsA$13 != (_Bool)0 ? (struct _ContentDir *)__serv : (struct _ContentDir *)(void *)0, tmp_ctx, strarg[(signed long int)2], (enum _ContentDir_BrowseFlag)CONTENT_DIR_BROWSE_DIRECT_CHILDREN);
          _DeviceList_UnlockService(__serv);
        }
        while((_Bool)0);
        if(!(res == ((const struct _ContentDir_BrowseResult *)NULL)))
        {
          const struct _DIDLObject *o = (const struct _DIDLObject *)(void *)0;
          do
            if(!(res->children->objects == ((struct _PtrArray *)NULL)))
            {
              struct _PtrArray_Iterator __itero;
              __itero=PtrArray_IteratorStart$link1(res->children->objects);
              do
              {
                return_value_PtrArray_IteratorLoop$14=PtrArray_IteratorLoop$link1(&__itero);
                if(return_value_PtrArray_IteratorLoop$14 == (_Bool)0)
                  break;

                void *return_value_PtrArray_IteratorGetElement$15;
                return_value_PtrArray_IteratorGetElement$15=PtrArray_IteratorGetElement$link1(&__itero);
                o = (const struct _DIDLObject *)return_value_PtrArray_IteratorGetElement$15;
                if(!(o->id == ((char *)NULL)))
                  tmp_if_expr$16 = o->id;

                else
                  tmp_if_expr$16 = "(null)";
                if(!(o->basename == ((char *)NULL)))
                  tmp_if_expr$17 = o->basename;

                else
                  tmp_if_expr$17 = "(null)";
                Log_Printf((enum Log_Level)LOG_RESERVED, "%6s \"%s\"", tmp_if_expr$16, tmp_if_expr$17);
              }
              while((_Bool)1);
            }

          while((_Bool)0);
        }

        break;
      }
      case CMD_METADATA:
      {
        process_command$$1$$4$$3$$res = (const struct _ContentDir_BrowseResult *)(void *)0;
        do
        {
          struct _Service *process_command$$1$$4$$3$$1$$__serv;
          process_command$$1$$4$$3$$1$$__serv=_DeviceList_LockService(strarg[(signed long int)1], "urn:schemas-upnp-org:service:ContentDirectory:1");
          const struct _Object_Class *return_value__ContentDir_GetBaseClass$18;
          return_value__ContentDir_GetBaseClass$18=_ContentDir_GetBaseClass();
          _Bool return_value__Object_IsA$19;
          return_value__Object_IsA$19=_Object_IsA((const void *)process_command$$1$$4$$3$$1$$__serv, return_value__ContentDir_GetBaseClass$18);
          process_command$$1$$4$$3$$res=ContentDir_Browse(return_value__Object_IsA$19 != (_Bool)0 ? (struct _ContentDir *)process_command$$1$$4$$3$$1$$__serv : (struct _ContentDir *)(void *)0, tmp_ctx, strarg[(signed long int)2], (enum _ContentDir_BrowseFlag)CONTENT_DIR_BROWSE_METADATA);
          _DeviceList_UnlockService(process_command$$1$$4$$3$$1$$__serv);
        }
        while((_Bool)0);
        if(!(process_command$$1$$4$$3$$res == ((const struct _ContentDir_BrowseResult *)NULL)))
        {
          if(!(process_command$$1$$4$$3$$res->children == ((struct _ContentDir_Children *)NULL)))
          {
            const struct _DIDLObject *process_command$$1$$4$$3$$2$$o;
            void *return_value_PtrArray_GetHead$20;
            return_value_PtrArray_GetHead$20=PtrArray_GetHead$link1(process_command$$1$$4$$3$$res->children->objects);
            process_command$$1$$4$$3$$2$$o = (const struct _DIDLObject *)return_value_PtrArray_GetHead$20;
            if(!(process_command$$1$$4$$3$$2$$o == ((const struct _DIDLObject *)NULL)))
            {
              char *return_value_DIDLObject_GetElementString$21;
              return_value_DIDLObject_GetElementString$21=DIDLObject_GetElementString(process_command$$1$$4$$3$$2$$o, tmp_ctx);
              Log_Printf((enum Log_Level)LOG_RESERVED, "metadata = %s", return_value_DIDLObject_GetElementString$21);
            }

          }

        }

        break;
      }
      case CMD_LS:
      {
        Log_Printf((enum Log_Level)LOG_RESERVED, "ls '%s' :", strarg[(signed long int)1]);
        return_value_DJFS_Create$22=DJFS_Create(tmp_ctx, (enum _DJFS_Flags)077, (unsigned long int)100);
        vfs=DJFS_ToVFS(return_value_DJFS_Create$22);
        if(vfs == ((struct _VFS *)NULL))
          Log_Printf((enum Log_Level)LOG_RESERVED, "** Failed to create virtual file system");

        else
        {
          struct _VFS_Query q = { .path=strarg[(signed long int)1], .stbuf=((struct stat *)NULL), .h=NULL,
    .filler=fuse_dirfil_for_ls, .talloc_context=NULL,
    .file=((struct _FileBuffer **)NULL), .lnk_buf=((char *)NULL),
    .lnk_bufsiz=0ul };
          signed int rc;
          rc=VFS_Browse(vfs, &q);
          if(!(rc == 0))
          {
            char *return_value_strerror$23;
            return_value_strerror$23=strerror(-rc);
            Log_Printf((enum Log_Level)LOG_RESERVED, "** error %d (%s)", rc, return_value_strerror$23);
          }

        }
        break;
      }
      case CMD_SEARCHCAP:
      {
        do
        {
          struct _Service *process_command$$1$$4$$5$$1$$__serv;
          process_command$$1$$4$$5$$1$$__serv=_DeviceList_LockService(strarg[(signed long int)1], "urn:schemas-upnp-org:service:ContentDirectory:1");
          const struct _Object_Class *return_value__ContentDir_GetBaseClass$24;
          return_value__ContentDir_GetBaseClass$24=_ContentDir_GetBaseClass();
          _Bool return_value__Object_IsA$25;
          return_value__Object_IsA$25=_Object_IsA((const void *)process_command$$1$$4$$5$$1$$__serv, return_value__ContentDir_GetBaseClass$24);
          s=ContentDir_GetSearchCapabilities(return_value__Object_IsA$25 != (_Bool)0 ? (struct _ContentDir *)process_command$$1$$4$$5$$1$$__serv : (struct _ContentDir *)(void *)0, (void *)0);
          _DeviceList_UnlockService(process_command$$1$$4$$5$$1$$__serv);
        }
        while((_Bool)0);
        Log_Printf((enum Log_Level)LOG_RESERVED, "SearchCapabilities='%s'", s != ((const char *)NULL) ? s : "(null)");
        break;
      }
      case CMD_SEARCH:
      {
        process_command$$1$$4$$6$$res = (const struct _ContentDir_BrowseResult *)(void *)0;
        do
        {
          struct _Service *process_command$$1$$4$$6$$1$$__serv;
          process_command$$1$$4$$6$$1$$__serv=_DeviceList_LockService(strarg[(signed long int)1], "urn:schemas-upnp-org:service:ContentDirectory:1");
          const struct _Object_Class *return_value__ContentDir_GetBaseClass$26;
          return_value__ContentDir_GetBaseClass$26=_ContentDir_GetBaseClass();
          _Bool return_value__Object_IsA$27;
          return_value__Object_IsA$27=_Object_IsA((const void *)process_command$$1$$4$$6$$1$$__serv, return_value__ContentDir_GetBaseClass$26);
          process_command$$1$$4$$6$$res=ContentDir_Search(return_value__Object_IsA$27 != (_Bool)0 ? (struct _ContentDir *)process_command$$1$$4$$6$$1$$__serv : (struct _ContentDir *)(void *)0, tmp_ctx, strarg[(signed long int)2], strarg[(signed long int)3]);
          _DeviceList_UnlockService(process_command$$1$$4$$6$$1$$__serv);
        }
        while((_Bool)0);
        if(!(process_command$$1$$4$$6$$res == ((const struct _ContentDir_BrowseResult *)NULL)))
        {
          const struct _DIDLObject *process_command$$1$$4$$6$$2$$o = (const struct _DIDLObject *)(void *)0;
          do
            if(!(process_command$$1$$4$$6$$res->children->objects == ((struct _PtrArray *)NULL)))
            {
              struct _PtrArray_Iterator process_command$$1$$4$$6$$2$$1$$1$$__itero;
              process_command$$1$$4$$6$$2$$1$$1$$__itero=PtrArray_IteratorStart$link1(process_command$$1$$4$$6$$res->children->objects);
              do
              {
                return_value_PtrArray_IteratorLoop$28=PtrArray_IteratorLoop$link1(&process_command$$1$$4$$6$$2$$1$$1$$__itero);
                if(return_value_PtrArray_IteratorLoop$28 == (_Bool)0)
                  break;

                void *return_value_PtrArray_IteratorGetElement$29;
                return_value_PtrArray_IteratorGetElement$29=PtrArray_IteratorGetElement$link1(&process_command$$1$$4$$6$$2$$1$$1$$__itero);
                process_command$$1$$4$$6$$2$$o = (const struct _DIDLObject *)return_value_PtrArray_IteratorGetElement$29;
                if(!(process_command$$1$$4$$6$$2$$o->basename == ((char *)NULL)))
                  tmp_if_expr$30 = process_command$$1$$4$$6$$2$$o->basename;

                else
                  tmp_if_expr$30 = "(null)";
                Log_Printf((enum Log_Level)LOG_RESERVED, "  %s", tmp_if_expr$30);
              }
              while((_Bool)1);
            }

          while((_Bool)0);
        }

        break;
      }
      case CMD_ACTION:
      {
        process_command$$1$$rc=DeviceList_SendActionAsync(strarg[(signed long int)1], strarg[(signed long int)2], strarg[(signed long int)3], 0, (const struct _StringPair *)(void *)0);
        break;
      }
      case CMD_PRINTDEV:
      {
        process_command$$1$$4$$8$$s=DeviceList_GetDeviceStatusString(tmp_ctx, strarg[(signed long int)1], (_Bool)1);
        Log_Print((enum Log_Level)LOG_RESERVED, process_command$$1$$4$$8$$s);
        break;
      }
      case CMD_LISTDEV:
      {
        char *process_command$$1$$4$$9$$s;
        process_command$$1$$4$$9$$s=DeviceList_GetStatusString(tmp_ctx);
        Log_Printf((enum Log_Level)LOG_RESERVED, "DeviceList:\n%s", process_command$$1$$4$$9$$s != ((char *)NULL) ? process_command$$1$$4$$9$$s : "(null)");
        break;
      }
      case CMD_REFRESH:
      {
        process_command$$1$$rc=DeviceList_RefreshAll((_Bool)1);
        break;
      }
      case CMD_WCAT:
      {
        char *outbuf = (char *)(void *)0;
        char contentType[180l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
        process_command$$1$$rc=UpnpDownloadUrlItem(strarg[(signed long int)1], &outbuf, contentType);
        if(process_command$$1$$rc == 0)
        {
          Log_Printf((enum Log_Level)LOG_RESERVED, "URL '%s' MIME='%s' :", strarg[(signed long int)1], (const void *)contentType);
          Log_Printf((enum Log_Level)LOG_RESERVED, "%s", outbuf != ((char *)NULL) ? outbuf : "(null)");
          free((void *)outbuf);
        }

        break;
      }
      case CMD_EXIT:
      {
        process_command$$1$$rc=DeviceList_Stop();
        exit(process_command$$1$$rc);
        break;
      }
      default:
        cmdnum = -1;
    }
  }

cleanup:
  ;
  if(cmd == ((const char *)NULL))
  {
    Log_Printf((enum Log_Level)LOG_ERROR, "Can't parse command; try 'help'");
    process_command$$1$$rc = -101;
  }

  else
    if(!(cmdnum >= 0))
    {
      Log_Printf((enum Log_Level)LOG_ERROR, "Command not found: '%s' ; try 'help'", cmd);
      process_command$$1$$rc = -101;
    }

    else
      if(!(invalidargs == 0))
      {
        Log_Printf((enum Log_Level)LOG_ERROR, "Invalid args in command; see 'help'");
        process_command$$1$$rc = -101;
      }

      else
        if(!(process_command$$1$$rc == 0))
        {
          const char *return_value_UpnpGetErrorMessage$31;
          return_value_UpnpGetErrorMessage$31=UpnpGetErrorMessage(process_command$$1$$rc);
          Log_Printf((enum Log_Level)LOG_ERROR, "Error executing '%s' : %d (%s)", cmd, process_command$$1$$rc, return_value_UpnpGetErrorMessage$31);
        }

  _talloc_free(tmp_ctx, "test_upnp.c:443");
  tmp_ctx = (void *)0;
  return process_command$$1$$rc;
}

// stdout_print
// file test_upnp.c line 135
static void stdout_print(enum Log_Level level, const char * const msg)
{
  if(!((signed int)level == LOG_RESERVED))
  {
    Log_BeginColor(level, stdout);
    switch((signed int)level)
    {
      case LOG_ERROR:
      {
        printf("[E] ");
        break;
      }
      case LOG_WARNING:
      {
        printf("[W] ");
        break;
      }
      case LOG_INFO:
      {
        printf("[I] ");
        break;
      }
      case LOG_DEBUG:
      {
        printf("[D] ");
        break;
      }
      default:
        printf("[%d] ", (signed int)level);
    }
  }

  Charset_PrintString((enum _Charset_Direction)CHARSET_FROM_UTF8, msg, stdout);
  if(!((signed int)level == LOG_RESERVED))
    Log_EndColor(level, stdout);

  printf("\n");
}

// tpr
// file talloc_util.h line 57
_Bool tpr(char **s, const char *fmt, ...)
{
  if(s == ((char **)NULL))
    return (_Bool)0;

  else
  {
    void **ap = (void **)&fmt;
    *s=talloc_vasprintf_append(*s, fmt, ap);
    ap = ((void **)NULL);
    return *s != (char *)(void *)0;
  }
}

// vfs_dir_add_entry
// file vfs_p.h line 107
static inline signed int vfs_dir_add_entry(const char * const name, const signed int d_type, const struct _VFS_Query * const q)
{
  signed int rc = 0;
  if(!(q->stbuf == ((struct stat *)NULL)))
  {
    if(d_type == 4)
      q->stbuf->st_nlink = q->stbuf->st_nlink + 1ul;

  }

  if(!(q->filler == ((signed int (*)(struct fuse_dirhandle *, const char *, signed int, unsigned long int))NULL)))
    rc=q->filler((struct fuse_dirhandle *)q->h, name, d_type, (unsigned long int)0);

  return rc;
}

// vfs_dir_add_entry$link1
// file vfs_p.h line 107
static inline signed int vfs_dir_add_entry$link1(const char * const name$link1, const signed int d_type$link1, const struct _VFS_Query * const q$link1)
{
  signed int rc$link1 = 0;
  if(!(q$link1->stbuf == ((struct stat *)NULL)))
  {
    if(d_type$link1 == 4)
      q$link1->stbuf->st_nlink = q$link1->stbuf->st_nlink + 1ul;

  }

  if(!(q$link1->filler == ((signed int (*)(struct fuse_dirhandle *, const char *, signed int, unsigned long int))NULL)))
    rc$link1=q$link1->filler((struct fuse_dirhandle *)q$link1->h, name$link1, d_type$link1, (unsigned long int)0);

  return rc$link1;
}

// vfs_dir_begin
// file vfs.c line 77
extern signed int vfs_dir_begin(const struct _VFS_Query * const q)
{
  signed int rc = 0;
  if(!(q->stbuf == ((struct stat *)NULL)))
  {
    q->stbuf->st_mode = (unsigned int)(0040000 | 0555);
    q->stbuf->st_nlink = (unsigned long int)2;
    q->stbuf->st_size = (signed long int)512;
    vfs_set_time(DEFAULT_TIME, q);
  }

  if(!(q->filler == ((signed int (*)(struct fuse_dirhandle *, const char *, signed int, unsigned long int))NULL)))
  {
    rc=q->filler((struct fuse_dirhandle *)q->h, ".", 4, (unsigned long int)0);
    if(rc == 0)
      rc=q->filler((struct fuse_dirhandle *)q->h, "..", 4, (unsigned long int)0);

  }

  if(!(q->lnk_buf == ((char *)NULL)))
  {
    Log_Printf((enum Log_Level)LOG_DEBUG, "error, readlink on directory : '%s'", q->path);
    rc = -22;
  }

  return rc;
}

// vfs_file_begin
// file vfs.c line 106
extern signed int vfs_file_begin(const signed int d_type, const struct _VFS_Query * const q)
{
  signed int rc = 0;
  Log_Printf((enum Log_Level)LOG_DEBUG, "%s_BEGIN '%s'", d_type == 10 ? "SYMLINK" : "FILE", q->path);
  if(!(q->stbuf == ((struct stat *)NULL)))
  {
    q->stbuf->st_mode = (unsigned int)(d_type << 12 | 0444);
    q->stbuf->st_nlink = (unsigned long int)1;
    q->stbuf->st_size = DEFAULT_SIZE;
    vfs_set_time(DEFAULT_TIME, q);
  }

  if(!(q->filler == ((signed int (*)(struct fuse_dirhandle *, const char *, signed int, unsigned long int))NULL)))
  {
    Log_Printf((enum Log_Level)LOG_DEBUG, "error, listing not a directory : '%s'", q->path);
    rc = -20;
  }

  if(!(q->file == ((struct _FileBuffer **)NULL)))
    *q->file = (struct _FileBuffer *)(void *)0;

  if(!(q->lnk_buf == ((char *)NULL)))
  {
    if(d_type == 10)
    {
      if(q->lnk_bufsiz >= 1ul)
        *q->lnk_buf = (char)0;

    }

    else
    {
      Log_Printf((enum Log_Level)LOG_DEBUG, "error, readlink on regular file : '%s'", q->path);
      rc = -22;
    }
  }

  return rc;
}

// vfs_file_set_string
// file vfs.c line 147
extern void vfs_file_set_string(const char * const str, enum _FileBuffer_StringAlloc alloc, const char * const location, const struct _VFS_Query * const q)
{
  if(!(q->file == ((struct _FileBuffer **)NULL)))
  {
    *q->file=FileBuffer_CreateFromString(q->talloc_context, str, alloc);
    if(!(*q->file == ((struct _FileBuffer *)NULL)))
      talloc_set_name((const void *)*q->file, "file[%s] at %s", q->path, location);

  }

  unsigned long int tmp_if_expr$2;
  unsigned long int return_value_strlen$1;
  if(!(q->stbuf == ((struct stat *)NULL)))
  {
    if(!(str == ((const char *)NULL)))
    {
      return_value_strlen$1=strlen(str);
      tmp_if_expr$2 = return_value_strlen$1;
    }

    else
      tmp_if_expr$2 = (unsigned long int)0;
    q->stbuf->st_size = (signed long int)tmp_if_expr$2;
  }

}

// vfs_file_set_url
// file vfs.c line 170
extern void vfs_file_set_url(const char * const url, signed long int size, const char * const location, const struct _VFS_Query * const q)
{
  if(!(q->file == ((struct _FileBuffer **)NULL)))
  {
    *q->file=FileBuffer_CreateFromURL(q->talloc_context, url, size);
    if(!(*q->file == ((struct _FileBuffer *)NULL)))
      talloc_set_name((const void *)*q->file, "file[%s] at %s", q->path, location);

  }

  if(size >= 0l)
  {
    if(!(q->stbuf == ((struct stat *)NULL)))
    {
      q->stbuf->st_size = size;
      Log_Printf((enum Log_Level)LOG_DEBUG, "FILE_SET_URL size = %ld", (signed long int)size);
    }

  }

}

// vfs_match_start_of_path
// file vfs.c line 57
const char * vfs_match_start_of_path(const char *path, const char *name)
{
  unsigned long int len;
  len=strlen(name);
  signed int return_value_strncmp$2;
  return_value_strncmp$2=strncmp(path, name, len);
  _Bool tmp_if_expr$1;
  if(return_value_strncmp$2 == 0)
  {
    if((signed int)path[(signed long int)len] == 0)
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = (signed int)path[(signed long int)len] == 47 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr$1)
      goto __CPROVER_DUMP_L5;

    path = path + (signed long int)len;
    for( ; (signed int)*path == 47; path = path + 1l)
      ;
    Log_Printf((enum Log_Level)LOG_DEBUG, "matched '%s' left '%s'", name, path);
    return path;
  }

  else
  {

  __CPROVER_DUMP_L5:
    ;
    return (const char *)(void *)0;
  }
}

// vfs_set_time
// file vfs.c line 213
extern void vfs_set_time(const signed long int t, const struct _VFS_Query * const q)
{
  if(!(q->stbuf == ((struct stat *)NULL)))
  {
    q->stbuf->st_ctim.tv_sec = t;
    q->stbuf->st_mtim.tv_sec = q->stbuf->st_ctim.tv_sec;
    q->stbuf->st_atim.tv_sec = q->stbuf->st_mtim.tv_sec;
  }

}

// vfs_symlink_set_path
// file vfs.c line 195
extern void vfs_symlink_set_path(const char * const p, const struct _VFS_Query * const q)
{
  if(!(p == ((const char *)NULL)))
  {
    if(!(q->lnk_buf == ((char *)NULL)))
    {
      if(q->lnk_bufsiz >= 1ul)
      {
        strncpy(q->lnk_buf, p, q->lnk_bufsiz);
        q->lnk_buf[(signed long int)(q->lnk_bufsiz - (unsigned long int)1)] = (char)0;
      }

    }

  }

  unsigned long int tmp_if_expr$2;
  unsigned long int return_value_strlen$1;
  if(!(q->stbuf == ((struct stat *)NULL)))
  {
    if(!(p == ((const char *)NULL)))
    {
      return_value_strlen$1=strlen(p);
      tmp_if_expr$2 = return_value_strlen$1;
    }

    else
      tmp_if_expr$2 = (unsigned long int)0;
    q->stbuf->st_size = (signed long int)tmp_if_expr$2;
  }

}

// x2nrealloc
// file xmalloc.c line 181
void * x2nrealloc(void *p, unsigned long int *pn, unsigned long int s)
{
  void *return_value_x2nrealloc_inline$1;
  return_value_x2nrealloc_inline$1=x2nrealloc_inline(p, pn, s);
  return return_value_x2nrealloc_inline$1;
}

// x2nrealloc_inline
// file xmalloc.c line 151
static inline void * x2nrealloc_inline(void *p, unsigned long int *pn, unsigned long int s)
{
  unsigned long int n = *pn;
  if(p == NULL)
  {
    if(n == 0ul)
    {
      n = (unsigned long int)64 / s;
      n = n + (unsigned long int)!(n != 0ul);
    }

  }

  else
  {
    if(!(9223372036854775807ul / s >= n))
      xalloc_die();

    n = n * (unsigned long int)2;
  }
  *pn = n;
  void *return_value_xrealloc$1;
  return_value_xrealloc$1=xrealloc(p, n * s);
  return return_value_xrealloc$1;
}

// x2realloc
// file xmalloc.c line 193
void * x2realloc(void *p, unsigned long int *pn)
{
  void *return_value_x2nrealloc_inline$1;
  return_value_x2nrealloc_inline$1=x2nrealloc_inline(p, pn, (unsigned long int)1);
  return return_value_x2nrealloc_inline$1;
}

// xalloc_die
// file xalloc-die.c line 36
extern void xalloc_die(void)
{
  error(exit_failure, 0, "%s", (const char *)"memory exhausted");
  abort();
}

// xcalloc
// file xmalloc.c line 212
void * xcalloc(unsigned long int n, unsigned long int s)
{
  void *p;
  p=calloc(n, s);
  if(p == NULL)
    xalloc_die();

  return p;
}

// xmalloc
// file xmalloc.c line 63
void * xmalloc(unsigned long int n)
{
  void *return_value_xnmalloc_inline$1;
  return_value_xnmalloc_inline$1=xnmalloc_inline(n, (unsigned long int)1);
  return return_value_xnmalloc_inline$1;
}

// xmemdup
// file xmalloc.c line 230
void * xmemdup(const void *p, unsigned long int s)
{
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(s);
  void *return_value_memcpy$2;
  return_value_memcpy$2=memcpy(return_value_xmalloc$1, p, s);
  return return_value_memcpy$2;
}

// xnmalloc
// file xmalloc.c line 55
void * xnmalloc(unsigned long int n, unsigned long int s)
{
  void *return_value_xnmalloc_inline$1;
  return_value_xnmalloc_inline$1=xnmalloc_inline(n, s);
  return return_value_xnmalloc_inline$1;
}

// xnmalloc_inline
// file xmalloc.c line 46
static inline void * xnmalloc_inline(unsigned long int n, unsigned long int s)
{
  void *p;
  _Bool tmp_if_expr$1;
  if(!(18446744073709551615ul / s >= n))
    tmp_if_expr$1 = (_Bool)1;

  else
  {
    p=malloc(n * s);
    tmp_if_expr$1 = (!(p != NULL) ? (n != (unsigned long int)0 ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$1)
    xalloc_die();

  return p;
}

// xnrealloc
// file xmalloc.c line 80
void * xnrealloc(void *p, unsigned long int n, unsigned long int s)
{
  void *return_value_xnrealloc_inline$1;
  return_value_xnrealloc_inline$1=xnrealloc_inline(p, n, s);
  return return_value_xnrealloc_inline$1;
}

// xnrealloc_inline
// file xmalloc.c line 72
static inline void * xnrealloc_inline(void *p, unsigned long int n, unsigned long int s)
{
  _Bool tmp_if_expr$1;
  if(!(18446744073709551615ul / s >= n))
    tmp_if_expr$1 = (_Bool)1;

  else
  {
    p=realloc(p, n * s);
    tmp_if_expr$1 = (!(p != NULL) ? (n != (unsigned long int)0 ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$1)
    xalloc_die();

  return p;
}

// xrealloc
// file xmalloc.c line 89
void * xrealloc(void *p, unsigned long int n)
{
  void *return_value_xnrealloc_inline$1;
  return_value_xnrealloc_inline$1=xnrealloc_inline(p, n, (unsigned long int)1);
  return return_value_xnrealloc_inline$1;
}

// xstrdup
// file xmalloc.c line 238
char * xstrdup(const char *string)
{
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(string);
  void *return_value_xmemdup$2;
  return_value_xmemdup$2=xmemdup((const void *)string, return_value_strlen$1 + (unsigned long int)1);
  return (char *)return_value_xmemdup$2;
}

// xzalloc
// file xmalloc.c line 203
void * xzalloc(unsigned long int s)
{
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(s);
  void *return_value_memset$2;
  return_value_memset$2=memset(return_value_xmalloc$1, 0, s);
  return return_value_memset$2;
}

