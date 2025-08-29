-[IPPControlLogging _withFile:]
void __cdecl -[IPPControlLogging _withFile:](IPPControlLogging *self, SEL a2, id a3)
{
  __int64 (__fastcall **v4)(id, _QWORD); // x19
  __int64 v5; // x21
  char v6; // w22
  os_log_s *v7; // x21
  NSURL *v8; // x8
  const char *v9; // x3
  os_log_s *v10; // x1
  uint32_t v11; // w5
  NSURL *controlFilePath; // x22
  int v13; // w8
  NSURL *v14; // x0
  uint8_t buf[4]; // [xsp+10h] [xbp-40h] BYREF
  NSURL *v16; // [xsp+14h] [xbp-3Ch]
  __int16 v17; // [xsp+1Ch] [xbp-34h]
  int v18; // [xsp+1Eh] [xbp-32h]

  v4 = (__int64 (__fastcall **)(id, _QWORD))objc_retain(a3);
  v5 = open(-[NSURL fileSystemRepresentation](self->_controlFilePath, "fileSystemRepresentation"), 521, 438LL);
  if ( (_DWORD)v5 == -1 )
  {
    v7 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
    if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEFAULT) )
    {
      controlFilePath = self->_controlFilePath;
      v13 = *__error();
      *(_DWORD *)buf = 138543618;
      v16 = controlFilePath;
      v17 = 1024;
      v18 = v13;
      v9 = "Could not create serialization for %{public}@ - %d";
      v10 = v7;
      v11 = 18;
      goto LABEL_7;
    }
LABEL_8:
    objc_release(v7);
    v14 = self->_controlFilePath;
    self->_controlFilePath = 0LL;
    objc_release(v14);
    goto LABEL_9;
  }
  v6 = v4[2](v4, v5);
  close(v5);
  if ( (v6 & 1) == 0 )
  {
    v7 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
    if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEFAULT) )
    {
      v8 = self->_controlFilePath;
      *(_DWORD *)buf = 138543362;
      v16 = v8;
      v9 = "No longer serializing for %{public}@";
      v10 = v7;
      v11 = 12;
LABEL_7:
      _os_log_impl((void *)&_mh_execute_header, v10, OS_LOG_TYPE_DEFAULT, v9, buf, v11);
      goto LABEL_8;
    }
    goto LABEL_8;
  }
LABEL_9:
  objc_release(v4);
}