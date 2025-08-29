__Z20ippCoerceAttrToValueP5ipp_tP15ipp_attribute_t9ipp_tag_e
bool __fastcall ippCoerceAttrToValue(ipp_t *a1, ipp_attribute_t *a2, __int64 a3)
{
  ipp_t *v5; // x27
  ipp_attribute_t *v6; // x0
  ipp_attribute_t *v7; // x20
  _BOOL8 v8; // x22
  unsigned int v9; // w0
  NSMutableArray *v10; // x19
  NSMutableArray *v13; // x22
  NSMutableArray *v14; // x23
  void *v15; // x24
  void *v16; // x25
  NSMutableArray *v17; // x26
  ipp_t *v18; // x21
  void *v19; // x27
  NSMutableArray *v20; // x28
  void *v21; // x19
  NSMutableArray *v22; // x19
  id v23; // x23
  void *v24; // x24
  void *v25; // x19
  void *v26; // x0
  void *v27; // x1
  char *v28; // x21
  char *v29; // x22
  NSMutableArray *v30; // x23
  void *v31; // x19
  unsigned int v32; // w24
  NSMutableArray *v33; // x23
  void *v34; // x19
  NSLocale *v35; // x19
  char *v36; // x28
  char *v37; // x23
  NSMutableArray *v38; // x25
  void *v39; // x19
  void *v40; // x26
  void *v41; // x1
  void *v42; // x24
  id v43; // x25
  NSMutableArray *v44; // x26
  ipp_t *v45; // x21
  void *v46; // x27
  id v47; // x22
  id v48; // x0
  void *v49; // x19
  id v50; // [xsp+10h] [xbp-60h]
  id v51; // [xsp+10h] [xbp-60h]
  _DWORD v52[2]; // [xsp+18h] [xbp-58h] BYREF

  v5 = objc_retain(a1);
  v6 = objc_retain(a2);
  v7 = v6;
  v8 = 0LL;
  if ( !v5 || !v6 )
    goto LABEL_11;
  if ( -[ipp_attribute_t value_tag](v6, "value_tag") == (_DWORD)a3 )
  {
LABEL_10:
    v8 = 1LL;
    goto LABEL_11;
  }
  v9 = -[ipp_attribute_t value_tag](v7, "value_tag");
  v8 = 0LL;
  if ( (int)a3 > 50 )
  {
    if ( (int)a3 <= 53 )
    {
      if ( (_DWORD)a3 == 51 )
      {
        if ( v9 == 33 )
        {
          v28 = -[ipp_attribute_t num_values](v7, "num_values");
          if ( v28 )
          {
            v29 = 0LL;
            do
            {
              v30 = objc_retainAutoreleasedReturnValue(-[ipp_attribute_t values](v7, "values"));
              v31 = objc_retainAutoreleasedReturnValue(-[NSMutableArray objectAtIndexedSubscript:](v30, "objectAtIndexedSubscript:", v29));
              v32 = (unsigned int)objc_msgSend(v31, "integer");
              objc_release(v31);
              objc_release(v30);
              v33 = objc_retainAutoreleasedReturnValue(-[ipp_attribute_t values](v7, "values"));
              v34 = objc_retainAutoreleasedReturnValue(-[NSMutableArray objectAtIndexedSubscript:](v33, "objectAtIndexedSubscript:", v29));
              v52[0] = v32;
              v52[1] = v32;
              objc_msgSend(v34, "setRange:", v52);
              objc_release(v34);
              objc_release(v33);
              ++v29;
            }
            while ( v28 != v29 );
          }
          -[ipp_attribute_t setValueTag:](v7, "setValueTag:", 51LL);
          goto LABEL_10;
        }
        goto LABEL_41;
      }
      if ( (_DWORD)a3 != 53 )
        goto LABEL_11;
      if ( v9 != 65 )
        goto LABEL_41;
    }
    else
    {
      if ( (_DWORD)a3 != 54 )
      {
        if ( (_DWORD)a3 != 66 )
        {
          if ( (_DWORD)a3 == 68 )
            v8 = v9 == 66 || v9 == 54;
          goto LABEL_11;
        }
        if ( v9 == 68 )
        {
          a3 = 66LL;
LABEL_9:
          -[ipp_attribute_t setValueTag:](v7, "setValueTag:", a3);
          goto LABEL_10;
        }
LABEL_41:
        v8 = 0LL;
        goto LABEL_11;
      }
      if ( v9 != 66 && v9 != 68 )
        goto LABEL_41;
    }
    v13 = objc_retainAutoreleasedReturnValue(-[ipp_t attrs](v5, "attrs"));
    if ( (unsigned __int64)-[NSMutableArray count](v13, "count") >= 3 )
    {
      v14 = objc_retainAutoreleasedReturnValue(-[ipp_t attrs](v5, "attrs"));
      v15 = objc_retainAutoreleasedReturnValue(-[NSMutableArray objectAtIndexedSubscript:](v14, "objectAtIndexedSubscript:", 1LL));
      v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "name"));
      if ( (unsigned int)objc_msgSend(v16, "compare:", CFSTR("attributes-natural-language")) )
      {
        v17 = objc_retainAutoreleasedReturnValue(-[ipp_t attrs](v5, "attrs"));
        v18 = v5;
        v19 = objc_retainAutoreleasedReturnValue(-[NSMutableArray objectAtIndexedSubscript:](v17, "objectAtIndexedSubscript:", 0LL));
        if ( (unsigned int)objc_msgSend(v19, "value_tag") == 72 )
        {
          v20 = objc_retainAutoreleasedReturnValue(-[ipp_t attrs](v18, "attrs"));
          v21 = objc_retainAutoreleasedReturnValue(-[NSMutableArray objectAtIndexedSubscript:](v20, "objectAtIndexedSubscript:", 0LL));
          v50 = objc_msgSend(v21, "num_values");
          objc_release(v21);
          objc_release(v20);
          objc_release(v19);
          objc_release(v17);
          objc_release(v16);
          objc_release(v15);
          objc_release(v14);
          objc_release(v13);
          v5 = v18;
          if ( v50 )
          {
            v22 = objc_retainAutoreleasedReturnValue(-[ipp_t attrs](v18, "attrs"));
            v23 = objc_retainAutoreleasedReturnValue(-[NSMutableArray objectAtIndexedSubscript:](v22, "objectAtIndexedSubscript:", 1LL));
            objc_release(v22);
            if ( objc_msgSend(v23, "num_values") )
            {
              v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "values"));
              v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "objectAtIndexedSubscript:", 0LL));
              v26 = objc_msgSend(v25, "string");
              v51 = v27;
              objc_release(v26);
              objc_release(v25);
              objc_release(v24);
            }
            else
            {
              v51 = 0LL;
            }
            goto LABEL_46;
          }
LABEL_45:
          v35 = objc_retainAutoreleasedReturnValue(+[NSLocale currentLocale](&OBJC_CLASS___NSLocale, "currentLocale"));
          v23 = objc_retainAutoreleasedReturnValue(-[NSLocale objectForKey:](v35, "objectForKey:", NSLocaleLanguageCode));
          objc_release(v35);
          v51 = objc_retainAutoreleasedReturnValue((id)sub_10003DAB0(v23));
LABEL_46:
          objc_release(v23);
          v36 = -[ipp_attribute_t num_values](v7, "num_values");
          if ( v36 )
          {
            v37 = 0LL;
            do
            {
              v38 = objc_retainAutoreleasedReturnValue(-[ipp_attribute_t values](v7, "values"));
              v39 = objc_retainAutoreleasedReturnValue(-[NSMutableArray objectAtIndexedSubscript:](v38, "objectAtIndexedSubscript:", v37));
              v40 = objc_msgSend(v39, "string");
              v42 = v41;
              objc_release(v39);
              objc_release(v38);
              v43 = objc_retain(v51);
              objc_release(v40);
              v44 = objc_retainAutoreleasedReturnValue(-[ipp_attribute_t values](v7, "values"));
              v45 = v5;
              v46 = objc_retainAutoreleasedReturnValue(-[NSMutableArray objectAtIndexedSubscript:](v44, "objectAtIndexedSubscript:", v37));
              v47 = objc_retain(v43);
              v48 = objc_retain(v42);
              v49 = v48;
              if ( v46 )
              {
                objc_msgSend(v46, "setString:", v51, v42);
              }
              else
              {
                objc_release(v48);
                objc_release(v47);
              }
              objc_release(v46);
              objc_release(v44);
              objc_release(v49);
              objc_release(v47);
              ++v37;
              v5 = v45;
            }
            while ( v36 != v37 );
          }
          -[ipp_attribute_t setValueTag:](v7, "setValueTag:", 54LL);
          objc_release(v51);
          goto LABEL_10;
        }
        objc_release(v19);
        objc_release(v17);
        v5 = v18;
      }
      objc_release(v16);
      objc_release(v15);
      objc_release(v14);
    }
    objc_release(v13);
    goto LABEL_45;
  }
  if ( (unsigned int)(a3 - 16) < 4 || (unsigned int)(a3 - 21) < 3 )
  {
    if ( -[ipp_attribute_t num_values](v7, "num_values") )
    {
      v10 = objc_retainAutoreleasedReturnValue(-[ipp_attribute_t values](v7, "values"));
      -[NSMutableArray removeAllObjects](v10, "removeAllObjects");
      objc_release(v10);
    }
    goto LABEL_9;
  }
LABEL_11:
  objc_release(v7);
  objc_release(v5);
  return v8;
}