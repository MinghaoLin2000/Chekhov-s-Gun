-[FPCKService prepareFPCKForDomain:domainUserInfo:domainRootURL:databaseBackupPath:accessingPaths:urls:volumeRole:options:reason:fpfs:iCDPackageDetection:completionHandler:]
void __cdecl -[FPCKService prepareFPCKForDomain:domainUserInfo:domainRootURL:databaseBackupPath:accessingPaths:urls:volumeRole:options:reason:fpfs:iCDPackageDetection:completionHandler:](
        FPCKService *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7,
        id a8,
        unsigned int a9,
        unsigned __int64 a10,
        unsigned __int64 a11,
        bool a12,
        bool a13,
        id a14)
{
  id v21; // x25
  id v22; // x28
  void (__fastcall **v23)(id, _QWORD); // x23
  id v24; // [xsp+20h] [xbp-70h]
  id v25; // [xsp+28h] [xbp-68h]
  id v26; // [xsp+30h] [xbp-60h]
  id v27; // [xsp+38h] [xbp-58h]
  __int64 vars8; // [xsp+98h] [xbp+8h]

  v27 = objc_retain(a3);
  v26 = objc_retain(a4);
  v25 = objc_retain(a5);
  v24 = objc_retain(a6);
  v21 = objc_retain(a7);
  v22 = objc_retain(a8);
  if ( self->_hasBeenPrepared )
  {
    (*((void (__fastcall **)(id, _QWORD))a14 + 2))(objc_retain(a14), 0LL);
  }
  else
  {
    objc_storeStrong((id *)&self->_domainID, a3);
    v23 = (void (__fastcall **)(id, _QWORD))objc_retain(a14);
    objc_storeStrong((id *)&self->_domainUserInfo, a4);
    objc_storeStrong((id *)&self->_domainRootURL, a5);
    objc_storeStrong((id *)&self->_databaseBackupPath, a6);
    objc_storeStrong((id *)&self->_accessingPaths, a7);
    objc_storeStrong((id *)&self->_urls, a8);
    self->_volumeRole = a9;
    self->_options = a10;
    self->_reason = a11;
    self->_fpfs = a12;
    self->_iCDPackageDetection = a13;
    self->_hasBeenPrepared = 1;
    v23[2](v23, 0LL);
  }
  objc_release(a14);
  objc_release(v22);
  objc_release(v21);
  objc_release(v24);
  objc_release(v25);
  objc_release(v26);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v27);
}