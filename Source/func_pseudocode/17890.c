__Z42AnyFileProviderDomainsInSameAppAsExtensionP11NSExtensionP12NSDictionaryIP8NSStringP16FPProviderDomainEb
__int64 __fastcall AnyFileProviderDomainsInSameAppAsExtension(void *a1, id a2, int a3)
{
  id v5; // x19
  void *v6; // x21
  void *v7; // x24
  void *v8; // x20
  id v9; // x21
  void *v10; // x22
  __int64 v11; // x26
  int v12; // w27
  __int64 v13; // x28
  void *v14; // x23
  void *v15; // x25
  void *v16; // x24
  unsigned int v17; // w25
  __int64 v18; // x19
  __int128 v20; // [xsp+0h] [xbp-120h] BYREF
  __int128 v21; // [xsp+10h] [xbp-110h]
  __int128 v22; // [xsp+20h] [xbp-100h]
  __int128 v23; // [xsp+30h] [xbp-F0h]
  _BYTE v24[128]; // [xsp+40h] [xbp-E0h] BYREF

  v5 = objc_retain(a2);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "_plugIn"));
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "containingUrl"));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "absoluteString"));
  objc_release(v7);
  objc_release(v6);
  v22 = 0u;
  v23 = 0u;
  v20 = 0u;
  v21 = 0u;
  v9 = objc_retain(v5);
  v10 = objc_msgSend(v9, "countByEnumeratingWithState:objects:count:", &v20, v24, 16LL);
  if ( v10 )
  {
    v11 = *(_QWORD *)v21;
    v12 = a3 ^ 1;
LABEL_3:
    v13 = 0LL;
    while ( 1 )
    {
      if ( *(_QWORD *)v21 != v11 )
        objc_enumerationMutation(v9);
      v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", *(_QWORD *)(*((_QWORD *)&v20 + 1) + 8 * v13), (_QWORD)v20));
      v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "extensionBundleURL"));
      v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "absoluteString"));
      objc_release(v15);
      if ( (unsigned int)objc_msgSend(v16, "hasPrefix:", v8) )
      {
        v17 = (unsigned int)objc_msgSend(v14, "isHidden");
        if ( ((v17 | v12) & 1) != 0 )
        {
          objc_release(v16);
          objc_release(v14);
          if ( !v17 )
            goto LABEL_16;
          goto LABEL_12;
        }
        if ( (unsigned int)objc_msgSend(v14, "isEnabled") )
        {
          objc_release(v16);
          objc_release(v14);
LABEL_16:
          v18 = 1LL;
          goto LABEL_17;
        }
      }
      objc_release(v16);
      objc_release(v14);
LABEL_12:
      if ( v10 == (void *)++v13 )
      {
        v10 = objc_msgSend(v9, "countByEnumeratingWithState:objects:count:", &v20, v24, 16LL);
        if ( v10 )
          goto LABEL_3;
        break;
      }
    }
  }
  v18 = 0LL;
LABEL_17:
  objc_release(v9);
  objc_release(v8);
  objc_release(v9);
  return v18;
}