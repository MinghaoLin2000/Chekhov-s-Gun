-[SignpostIntervalMetrics updateSummary:endSnapshot:animationInterval:]
void __cdecl -[SignpostIntervalMetrics updateSummary:endSnapshot:animationInterval:](
        SignpostIntervalMetrics *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x22
  void *v11; // x23
  void *v12; // x0
  void *v13; // x24
  void *v14; // x25
  double v15; // d0
  double v16; // d8
  void *v17; // x26
  double v18; // d0
  double v19; // d10
  void *v20; // x25
  double v21; // d0
  double v22; // d8
  void *v23; // x26
  double v24; // d0
  double peakMemoryKB; // d11
  void *v26; // x25
  double v27; // d0
  double v28; // d8
  void *v29; // x25
  double v30; // d0
  double v31; // d9
  double v32; // d0
  double v33; // d1
  void *v34; // x25
  double v35; // d0
  double v36; // d8
  void *v37; // x26
  double v38; // d0
  void *v39; // x25
  float v40; // s0
  double prevStartMs; // d8
  double v42; // d0
  double v43; // d0
  double prevEndMs; // d8
  double v45; // d0
  double v46; // d8
  double v47; // d0
  _QWORD v48[5]; // [xsp+8h] [xbp-88h] BYREF

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "metrics"));
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "metrics"));
  v13 = v12;
  ++self->countInstances;
  if ( v11 && v12 )
  {
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "dirtyMemoryKB"));
    objc_msgSend(v14, "doubleValue");
    v16 = v15;
    v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "dirtyMemoryKB"));
    objc_msgSend(v17, "doubleValue");
    v19 = (v16 + v18) * 0.5;
    objc_release(v17);
    objc_release(v14);
    v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "cpuTimeNsec"));
    objc_msgSend(v20, "doubleValue");
    v22 = v21;
    v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "cpuTimeNsec"));
    objc_msgSend(v23, "doubleValue");
    self->cpuTimeSec = self->cpuTimeSec + (v22 - v24) / 1000000000.0;
    objc_release(v23);
    objc_release(v20);
    peakMemoryKB = self->peakMemoryKB;
    v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "dirtyMemoryLifetimePeakKB"));
    objc_msgSend(v26, "doubleValue");
    v28 = v27;
    objc_release(v26);
    v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "dirtyMemoryLifetimePeakKB"));
    objc_msgSend(v29, "doubleValue");
    v31 = v30;
    objc_release(v29);
    if ( v28 >= v31 )
      v32 = v28;
    else
      v32 = v31;
    if ( peakMemoryKB >= v32 )
      v32 = peakMemoryKB;
    v33 = self->averageMemoryKB + (v19 - self->averageMemoryKB) / (double)self->countInstances;
    self->peakMemoryKB = v32;
    self->averageMemoryKB = v33;
    v34 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "storageDirtiedKB"));
    objc_msgSend(v34, "doubleValue");
    v36 = v35;
    v37 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "storageDirtiedKB"));
    objc_msgSend(v37, "doubleValue");
    self->diskLogicalWritesKB = self->diskLogicalWritesKB + v36 - v38;
    objc_release(v37);
    objc_release(v34);
  }
  if ( v10 )
  {
    v39 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "glitches"));
    v48[0] = _NSConcreteStackBlock;
    v48[1] = 3254779904LL;
    v48[2] = sub_100005620;
    v48[3] = &unk_1000142D8;
    v48[4] = self;
    objc_msgSend(v39, "enumerateObjectsUsingBlock:", v48);
    objc_release(v39);
    objc_msgSend(v10, "durationSeconds");
    self->animationDuration = self->animationDuration + (float)(v40 * 1000.0);
  }
  prevStartMs = self->prevStartMs;
  objc_msgSend(v8, "startMs");
  if ( prevStartMs <= v42 )
  {
    prevEndMs = self->prevEndMs;
    objc_msgSend(v8, "startMs");
    if ( prevEndMs > v45 )
      ++self->countIntervalOverlaps;
    v46 = self->prevEndMs;
    objc_msgSend(v9, "endMs");
    if ( v46 >= v43 )
      v43 = v46;
  }
  else
  {
    objc_msgSend(v9, "endMs");
  }
  self->prevEndMs = v43;
  objc_msgSend(v8, "startMs");
  self->prevStartMs = v47;
  objc_release(v13);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
}