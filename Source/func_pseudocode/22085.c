_HasTRB
__int64 HasTRB()
{
  __int64 v0; // x8
  char *v1; // x9
  __int64 v2; // x8
  char *v3; // x9
  __int64 v4; // x8
  char *v5; // x9
  __int64 v6; // x8
  char *v7; // x9
  __int64 v8; // x8
  char *v9; // x9
  __int64 v10; // x8
  char *v11; // x9
  __int64 v12; // x8
  char *v13; // x9
  __int64 v14; // x8
  char *v15; // x9
  __int64 v16; // x8
  char *v17; // x9
  mach_error_t GuidedVariableName; // w0
  mach_error_t v19; // w22
  os_log_s *v20; // x21
  __int64 v21; // x19
  const char *v22; // x3
  os_log_s *v23; // x1
  mach_error_t VariableAsUInt64; // w20
  os_log_s *v25; // x19
  _BOOL4 v26; // w0
  char *v27; // x0
  uint32_t v28; // w5
  os_log_s *v29; // x20
  mach_error_t v31; // w0
  mach_error_t v32; // w22
  char *v33; // x0
  mach_error_t v34; // w20
  _BOOL4 v35; // w0
  char *v36; // x0
  unsigned int v37; // w20
  os_log_s *v38; // x19
  _BOOL4 v39; // w0
  char *v40; // [xsp+0h] [xbp-90h] BYREF
  char *v41; // [xsp+8h] [xbp-88h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-80h] BYREF
  char *v43; // [xsp+14h] [xbp-7Ch]
  __int16 v44; // [xsp+1Ch] [xbp-74h]
  char *v45; // [xsp+1Eh] [xbp-72h]
  char v46[64]; // [xsp+28h] [xbp-68h] BYREF

  v40 = 0LL;
  v41 = 0LL;
  if ( (byte_10000C300 & 1) == 0 )
  {
    v0 = (unsigned int)strlen(&AAPLTRBPWList);
    if ( v0 )
    {
      v1 = &AAPLTRBPWList;
      do
      {
        *v1++ ^= 0xAAu;
        --v0;
      }
      while ( v0 );
    }
    v2 = (unsigned int)strlen(&AAPLTRBPWListOld);
    if ( v2 )
    {
      v3 = &AAPLTRBPWListOld;
      do
      {
        *v3++ ^= 0xAAu;
        --v2;
      }
      while ( v2 );
    }
    v4 = (unsigned int)strlen(&AAPLTRBNonce);
    if ( v4 )
    {
      v5 = &AAPLTRBNonce;
      do
      {
        *v5++ ^= 0xAAu;
        --v4;
      }
      while ( v4 );
    }
    v6 = (unsigned int)strlen(&AAPLTRBNonceTrb10);
    if ( v6 )
    {
      v7 = &AAPLTRBNonceTrb10;
      do
      {
        *v7++ ^= 0xAAu;
        --v6;
      }
      while ( v6 );
    }
    v8 = (unsigned int)strlen(&AAPLTRBVersion);
    if ( v8 )
    {
      v9 = &AAPLTRBVersion;
      do
      {
        *v9++ ^= 0xAAu;
        --v8;
      }
      while ( v8 );
    }
    v10 = (unsigned int)strlen(&AAPLTRBFPWAppCommand);
    if ( v10 )
    {
      v11 = &AAPLTRBFPWAppCommand;
      do
      {
        *v11++ ^= 0xAAu;
        --v10;
      }
      while ( v10 );
    }
    v12 = (unsigned int)strlen(&FirmwareFeatures);
    if ( v12 )
    {
      v13 = &FirmwareFeatures;
      do
      {
        *v13++ ^= 0xAAu;
        --v12;
      }
      while ( v12 );
    }
    v14 = (unsigned int)strlen(&FirmwareFeaturesMask);
    if ( v14 )
    {
      v15 = &FirmwareFeaturesMask;
      do
      {
        *v15++ ^= 0xAAu;
        --v14;
      }
      while ( v14 );
    }
    v16 = (unsigned int)strlen(&GuidFormatString);
    if ( v16 )
    {
      v17 = &GuidFormatString;
      do
      {
        *v17++ ^= 0xAAu;
        --v16;
      }
      while ( v16 );
    }
    byte_10000C300 = 1;
  }
  GuidedVariableName = GetGuidedVariableName(gAppleVendorVariableGuid, &FirmwareFeatures, v46, 0x40uLL);
  if ( GuidedVariableName )
  {
    v19 = GuidedVariableName;
    v20 = (os_log_s *)LogCategory_Unspecified();
    v21 = 0LL;
    if ( !os_log_type_enabled(v20, OS_LOG_TYPE_DEFAULT) )
      goto LABEL_41;
    *(_DWORD *)buf = 136315394;
    v43 = &FirmwareFeatures;
    v44 = 2080;
    v45 = mach_error_string(v19);
    v22 = "Error getting guided variable - '%s': %s";
    goto LABEL_33;
  }
  VariableAsUInt64 = GetVariableAsUInt64(v46, (UInt8 *)&v41);
  v25 = (os_log_s *)LogCategory_Unspecified();
  v26 = os_log_type_enabled(v25, OS_LOG_TYPE_DEFAULT);
  if ( VariableAsUInt64 )
  {
    if ( !v26 )
    {
LABEL_40:
      v21 = 0LL;
      goto LABEL_41;
    }
    v27 = mach_error_string(VariableAsUInt64);
    *(_DWORD *)buf = 136315394;
    v43 = v46;
    v44 = 2080;
    v45 = v27;
    v22 = "Error getting variable - '%s': %s";
    goto LABEL_37;
  }
  if ( v26 )
  {
    *(_DWORD *)buf = 134217984;
    v43 = v41;
    _os_log_impl((void *)&_mh_execute_header, v25, OS_LOG_TYPE_DEFAULT, "Got firmwareFeatures 0x%llx", buf, 0xCu);
  }
  v31 = GetGuidedVariableName(gAppleVendorVariableGuid, &FirmwareFeaturesMask, v46, 0x40uLL);
  if ( v31 )
  {
    v32 = v31;
    v20 = (os_log_s *)LogCategory_Unspecified();
    v21 = 0LL;
    if ( os_log_type_enabled(v20, OS_LOG_TYPE_DEFAULT) )
    {
      v33 = mach_error_string(v32);
      *(_DWORD *)buf = 136315394;
      v43 = &FirmwareFeaturesMask;
      v44 = 2080;
      v45 = v33;
      v22 = "Error getting guided variable - '%s': %s";
LABEL_33:
      v23 = v20;
LABEL_38:
      v28 = 22;
LABEL_39:
      _os_log_impl((void *)&_mh_execute_header, v23, OS_LOG_TYPE_DEFAULT, v22, buf, v28);
      goto LABEL_40;
    }
  }
  else
  {
    v34 = GetVariableAsUInt64(v46, (UInt8 *)&v40);
    v25 = (os_log_s *)LogCategory_Unspecified();
    v35 = os_log_type_enabled(v25, OS_LOG_TYPE_DEFAULT);
    if ( v34 )
    {
      if ( !v35 )
        goto LABEL_40;
      v36 = mach_error_string(v34);
      *(_DWORD *)buf = 136315394;
      v43 = v46;
      v44 = 2080;
      v45 = v36;
      v22 = "Error getting variable - '%s': %s";
LABEL_37:
      v23 = v25;
      goto LABEL_38;
    }
    if ( v35 )
    {
      *(_DWORD *)buf = 134217984;
      v43 = v40;
      _os_log_impl((void *)&_mh_execute_header, v25, OS_LOG_TYPE_DEFAULT, "Got firmwareFeaturesMask 0x%llx", buf, 0xCu);
    }
    v37 = (unsigned int)v41 & (unsigned int)v40;
    v38 = (os_log_s *)LogCategory_Unspecified();
    v39 = os_log_type_enabled(v38, OS_LOG_TYPE_DEFAULT);
    if ( (v37 & 0x10000) == 0 )
    {
      if ( !v39 )
        goto LABEL_40;
      *(_WORD *)buf = 0;
      v22 = "No TRB On this system.";
      v23 = v38;
      v28 = 2;
      goto LABEL_39;
    }
    if ( v39 )
    {
      *(_WORD *)buf = 0;
      _os_log_impl((void *)&_mh_execute_header, v38, OS_LOG_TYPE_DEFAULT, "We've got TRB!", buf, 2u);
    }
    v21 = 1LL;
  }
LABEL_41:
  v29 = (os_log_s *)LogCategory_Unspecified();
  if ( os_log_type_enabled(v29, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 67109120;
    LODWORD(v43) = v21;
    _os_log_impl((void *)&_mh_execute_header, v29, OS_LOG_TYPE_DEFAULT, "HasTRB returning: %d", buf, 8u);
  }
  return v21;
}