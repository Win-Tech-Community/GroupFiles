typedef struct _OB_REGISTRATION_ENTRY {
    LIST_ENTRY RegistrationLinks;
    OB_OPERATION Operations;
    struct _OB_REGISTRATION_HANDLE* Handle;
    POBJECT_TYPE ObjectType;
    POB_PRE_OPERATION_CALLBACK PreOperation;
    POB_POST_OPERATION_CALLBACK PostOperation;
    PEX_RUNDOWN_REF Rundown;
}OB_REGISTRATION_ENTRY, * POB_REGISTRATION_ENTRY;

typedef struct _OB_REGISTRATION_HANDLE {
    USHORT Version;
    USHORT RegistrationCount;
    PVOID RegistrationContext;
    UNICODE_STRING Altitude;
    OB_REGISTRATION_ENTRY RegistrationEntry[1];
}OB_REGISTRATION_HANDLE, * POB_REGISTRATION_HANDLE;