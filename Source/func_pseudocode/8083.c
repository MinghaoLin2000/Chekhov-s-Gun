-[SignpostIntervalMetrics initWithBeginSnapshot:endSnapshot:animationInterval:]
SignpostIntervalMetrics *__cdecl -[SignpostIntervalMetrics initWithBeginSnapshot:endSnapshot:animationInterval:](
        SignpostIntervalMetrics *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x21
  SignpostIntervalMetrics *v11; // x22
  void *v12; // x23
  void *v13; // x0
  void *v14; // x24
  void *v15; // x25
  double v16; // d0
  double v17; // d8
  void *v18; // x26
  double v19; // d0
  void *v20; // x25
  double v21; // d0
  double v22; // d8
  void *v23; // x25
  double v24; // d0
  double v25; // d9
  double v26; // d0
  void *v27; // x25
  double v28; // d0
  double v29; // d8
  void *v30; // x26
  double v31; // d0
  void *v32; // x25
  double v33; // d0
  double v34; // d8
  void *v35; // x26
  double v36; // d0
  void *v37; // x0
  void *v38; // x25
  void *v39; // x26
  void *v40; // x25
  double v41; // d0
  double v42; // d8
  void *v43; // x26
  double v44; // d0
  void *v45; // x25
  double *v46; // x26
  float v47; // s0
  double v48; // d0
  double v49; // d0
  _QWORD v51[4]; // [xsp+8h] [xbp-88h] BYREF
  id v52; // [xsp+28h] [xbp-68h]
  objc_super v53; // [xsp+30h] [xbp-60h] BYREF

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  v53.receiver = self;
  v53.super_class = (Class)&OBJC_CLASS___SignpostIntervalMetrics;
  v11 = -[SignpostIntervalMetrics init](&v53, "init");
  if ( v11 )
  {
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "metrics"));
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "metrics"));
    v14 = v13;
    if ( v12 && v13 )
    {
      v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "cpuTimeNsec"));
      objc_msgSend(v15, "doubleValue");
      v17 = v16;
      v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "cpuTimeNsec"));
      objc_msgSend(v18, "doubleValue");
      v11->cpuTimeSec = (v17 - v19) / 1000000000.0;
      objc_release(v18);
      objc_release(v15);
      v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "dirtyMemoryLifetimePeakKB"));
      objc_msgSend(v20, "doubleValue");
      v22 = v21;
      objc_release(v20);
      v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "dirtyMemoryLifetimePeakKB"));
      objc_msgSend(v23, "doubleValue");
      v25 = v24;
      objc_release(v23);
      if ( v22 >= v25 )
        v26 = v22;
      else
        v26 = v25;
      v11->peakMemoryKB = v26;
      v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "dirtyMemoryKB"));
      objc_msgSend(v27, "doubleValue");
      v29 = v28;
      v30 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "dirtyMemoryKB"));
      objc_msgSend(v30, "doubleValue");
      v11->averageMemoryKB = (v29 + v31) * 0.5;
      objc_release(v30);
      objc_release(v27);
      v32 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "storageDirtiedKB"));
      objc_msgSend(v32, "doubleValue");
      v34 = v33;
      v35 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "storageDirtiedKB"));
      objc_msgSend(v35, "doubleValue");
      v11->diskLogicalWritesKB = v34 - v36;
      objc_release(v35);
      objc_release(v32);
      v37 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "cpuInstructionsKI"));
      if ( !v37
        || (v38 = v37,
            v39 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "cpuInstructionsKI")),
            objc_release(v39),
            objc_release(v38),
            !v39) )
      {
        v11->cpuInstructionsKI = 0.0;
        if ( v10 )
          goto LABEL_11;
        goto LABEL_13;
      }
      v40 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "cpuInstructionsKI"));
      objc_msgSend(v40, "doubleValue");
      v42 = v41;
      v43 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "cpuInstructionsKI"));
      objc_msgSend(v43, "doubleValue");
      v11->cpuInstructionsKI = v42 - v44;
      objc_release(v43);
      objc_release(v40);
    }
    if ( v10 )
    {
LABEL_11:
      v45 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "glitches"));
      v51[0] = _NSConcreteStackBlock;
      v51[1] = 3254779904LL;
      v51[2] = sub_100005274;
      v51[3] = &unk_1000142D8;
      v46 = objc_retain(v11);
      v52 = v46;
      objc_msgSend(v45, "enumerateObjectsUsingBlock:", v51);
      objc_release(v45);
      objc_msgSend(v10, "durationSeconds");
      v46[7] = (float)(v47 * 1000.0);
      objc_release(v52);
LABEL_14:
      *(_OWORD *)&v11->countInstances = xmmword_100010BB0;
      objc_msgSend(v8, "startMs");
      v11->prevStartMs = v48;
      objc_msgSend(v9, "endMs");
      v11->prevEndMs = v49;
      objc_release(v14);
      objc_release(v12);
      goto LABEL_15;
    }
LABEL_13:
    v11->hitchDuration = 0.0;
    v11->animationDuration = 0.0;
    goto LABEL_14;
  }
LABEL_15:
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  return v11;
}