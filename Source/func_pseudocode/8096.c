-[XPCSignpostReader updateGlitchesForProcess:withAnimationInterval:]
void __cdecl -[XPCSignpostReader updateGlitchesForProcess:withAnimationInterval:](
        XPCSignpostReader *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  void *v8; // x22
  NSMutableDictionary *glitches; // x22
  id v10; // x23
  void *v11; // x22
  float v12; // s0
  float v13; // s8
  __int64 v14; // x25
  void *v15; // x22
  void *v16; // x23
  NSNumber *v17; // x24
  void *v18; // x25
  void *v19; // x22
  char *v20; // x26
  void *v21; // x23
  void *v22; // x24
  NSNumber *v23; // x25
  void *v24; // x26
  void *v25; // x22
  void *v26; // x23
  NSNumber *v27; // x24
  void *v28; // x25
  void *v29; // x22
  void *v30; // x23
  void *v31; // x22
  void *v32; // x23
  NSNumber *v33; // x24
  void *v34; // x21
  _QWORD v35[5]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v36; // [xsp+30h] [xbp-80h] BYREF
  __int64 *v37; // [xsp+38h] [xbp-78h]
  __int64 v38; // [xsp+40h] [xbp-70h]
  __int64 v39; // [xsp+48h] [xbp-68h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_glitches, "objectForKeyedSubscript:", v6));
  objc_release(v8);
  if ( !v8 )
  {
    glitches = self->_glitches;
    v10 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
    -[NSMutableDictionary setObject:forKey:](glitches, "setObject:forKey:", v10, v6);
    objc_release(v10);
  }
  v36 = 0LL;
  v37 = &v36;
  v38 = 0x2020000000LL;
  v39 = 0LL;
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "glitches"));
  v35[0] = _NSConcreteStackBlock;
  v35[1] = 3254779904LL;
  v35[2] = sub_100006EF0;
  v35[3] = &unk_100014348;
  v35[4] = &v36;
  objc_msgSend(v11, "enumerateObjectsUsingBlock:", v35);
  objc_release(v11);
  objc_msgSend(v7, "durationSeconds");
  v13 = v12;
  v14 = v37[3];
  v15 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_glitches, "objectForKeyedSubscript:", v6));
  v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "objectForKeyedSubscript:", CFSTR("glitchDuration")));
  v17 = objc_retainAutoreleasedReturnValue(
          +[NSNumber numberWithUnsignedLongLong:](
            &OBJC_CLASS___NSNumber,
            "numberWithUnsignedLongLong:",
            v14 + (unsigned int)objc_msgSend(v16, "unsignedIntValue")));
  v18 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_glitches, "objectForKeyedSubscript:", v6));
  objc_msgSend(v18, "setObject:forKeyedSubscript:", v17, CFSTR("glitchDuration"));
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "glitches"));
  v20 = (char *)objc_msgSend(v19, "count");
  v21 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_glitches, "objectForKeyedSubscript:", v6));
  v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "objectForKeyedSubscript:", CFSTR("glitchCount")));
  v23 = objc_retainAutoreleasedReturnValue(
          +[NSNumber numberWithUnsignedInteger:](
            &OBJC_CLASS___NSNumber,
            "numberWithUnsignedInteger:",
            &v20[(unsigned int)objc_msgSend(v22, "unsignedIntValue")]));
  v24 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_glitches, "objectForKeyedSubscript:", v6));
  objc_msgSend(v24, "setObject:forKeyedSubscript:", v23, CFSTR("glitchCount"));
  objc_release(v24);
  objc_release(v23);
  objc_release(v22);
  objc_release(v21);
  objc_release(v19);
  v25 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_glitches, "objectForKeyedSubscript:", v6));
  v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v25, "objectForKeyedSubscript:", CFSTR("scrollDuration")));
  v27 = objc_retainAutoreleasedReturnValue(
          +[NSNumber numberWithUnsignedLongLong:](
            &OBJC_CLASS___NSNumber,
            "numberWithUnsignedLongLong:",
            (unsigned __int64)(float)(v13 * 1000.0) + (unsigned int)objc_msgSend(v26, "unsignedIntValue")));
  v28 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_glitches, "objectForKeyedSubscript:", v6));
  objc_msgSend(v28, "setObject:forKeyedSubscript:", v27, CFSTR("scrollDuration"));
  objc_release(v28);
  objc_release(v27);
  objc_release(v26);
  objc_release(v25);
  v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "beginEvent"));
  v30 = objc_retainAutoreleasedReturnValue(objc_msgSend(v29, "name"));
  LODWORD(v27) = (unsigned int)objc_msgSend(v30, "isEqualToString:", CFSTR("Scroll_Dragging"));
  objc_release(v30);
  objc_release(v29);
  if ( (_DWORD)v27 )
  {
    v31 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_glitches, "objectForKeyedSubscript:", v6));
    v32 = objc_retainAutoreleasedReturnValue(objc_msgSend(v31, "objectForKeyedSubscript:", CFSTR("scrollCount")));
    v33 = objc_retainAutoreleasedReturnValue(
            +[NSNumber numberWithUnsignedInt:](
              &OBJC_CLASS___NSNumber,
              "numberWithUnsignedInt:",
              (unsigned int)objc_msgSend(v32, "unsignedIntValue") + 1));
    v34 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_glitches, "objectForKeyedSubscript:", v6));
    objc_msgSend(v34, "setObject:forKeyedSubscript:", v33, CFSTR("scrollCount"));
    objc_release(v34);
    objc_release(v33);
    objc_release(v32);
    objc_release(v31);
  }
  _Block_object_dispose(&v36, 8);
  objc_release(v7);
  objc_release(v6);
}