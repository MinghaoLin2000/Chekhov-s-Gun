-[FPCKService .cxx_destruct]
void __cdecl -[FPCKService .cxx_destruct](FPCKService *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_accessingPaths, 0LL);
  objc_storeStrong((id *)&self->_urls, 0LL);
  objc_storeStrong((id *)&self->_databaseBackupPath, 0LL);
  objc_storeStrong((id *)&self->_domainRootURL, 0LL);
  objc_storeStrong((id *)&self->_domainUserInfo, 0LL);
  objc_storeStrong((id *)&self->_domainID, 0LL);
  objc_storeStrong((id *)&self->_runQueue, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_semaphore, 0LL);
}