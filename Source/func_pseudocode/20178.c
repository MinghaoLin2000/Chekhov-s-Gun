__ZNK16Real_IPP_Message9_Response14_multiResponseEU13block_pointerFvPS0_E
void __fastcall Real_IPP_Message::_Response::_multiResponse(__int64 a1, id a2)
{
  id v3; // x20
  void *v4; // x21
  unsigned __int64 i; // x23
  void *v6; // x22
  void *v7; // x19
  void *v8; // x24
  void *v9; // x22
  void *v10; // x24
  unsigned __int64 j; // x25
  void *v12; // x26
  void *v13; // x27
  void *v14; // x28
  unsigned __int8 v15; // w19
  id v16; // x0
  void *v17; // x26
  id v18; // x22
  void (__fastcall **v19)(id, id *); // [xsp+10h] [xbp-60h]
  id v20; // [xsp+18h] [xbp-58h] BYREF

  v19 = (void (__fastcall **)(id, id *))objc_retain(a2);
  v3 = objc_retainAutoreleasedReturnValue((id)sub_1000370DC(a1));
  v4 = objc_retainAutoreleasedReturnValue(+[PKIPP makeEmptyResponse](&OBJC_CLASS___PKIPP, "makeEmptyResponse"));
  objc_msgSend(v4, "setState:", objc_msgSend(v3, "state"));
  objc_msgSend(v4, "setOp_or_status:", objc_msgSend(v3, "op_or_status"));
  for ( i = 0LL; ; ++i )
  {
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "attrs"));
    v7 = objc_msgSend(v6, "count");
    objc_release(v6);
    if ( i >= (unsigned __int64)v7 )
      break;
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "attrs"));
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "objectAtIndexedSubscript:", i));
    objc_release(v8);
    if ( (unsigned int)objc_msgSend(v9, "group_tag") )
    {
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "attrs"));
      for ( j = 0LL; ; ++j )
      {
        if ( j >= (unsigned __int64)objc_msgSend(v10, "count") )
        {
          v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "attrs"));
          objc_msgSend(v17, "addObject:", v9);
          goto LABEL_11;
        }
        v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "objectAtIndexedSubscript:", j));
        v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "name"));
        v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "name"));
        v15 = (unsigned __int8)objc_msgSend(v13, "isEqualToString:", v14);
        objc_release(v14);
        objc_release(v13);
        objc_release(v12);
        if ( (v15 & 1) != 0 )
          break;
      }
      v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "attrs"));
      objc_msgSend(v17, "replaceObjectAtIndex:withObject:", j, v9);
LABEL_11:
      objc_release(v17);
      v16 = v10;
    }
    else
    {
      v20 = objc_retain(v4);
      v19[2](v19, &v20);
      v16 = v20;
    }
    objc_release(v16);
    objc_release(v9);
  }
  v18 = objc_retain(v4);
  v20 = v18;
  v19[2](v19, &v20);
  objc_release(v20);
  objc_release(v18);
  objc_release(v3);
  objc_release(v19);
}