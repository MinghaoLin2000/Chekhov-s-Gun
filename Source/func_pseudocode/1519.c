-[DeviceFooterViewController setCapacityBarTotals:]
void __cdecl -[DeviceFooterViewController setCapacityBarTotals:](DeviceFooterViewController *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x20
  void *v6; // x21
  void *v7; // x24
  void *v8; // x23
  AMPCapacityBarViewController *v9; // x24
  AMPCapacityBarViewController *v10; // x23
  _QWORD v11[5]; // [xsp+8h] [xbp-68h] BYREF
  id v12; // [xsp+30h] [xbp-40h]
  void *v13; // [xsp+38h] [xbp-38h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", AMPDeviceCategoriesKey));
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", AMPDeviceTotalBytesKey));
  v8 = objc_msgSend(v7, "unsignedLongLongValue");
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController capacityBarViewController](self, "capacityBarViewController"));
  -[AMPCapacityBarViewController setCapacity:](v9, "setCapacity:", v8);
  objc_release(v9);
  if ( v6 )
  {
    v11[0] = _NSConcreteStackBlock;
    v11[1] = 3254779904LL;
    v11[2] = sub_10003476C;
    v11[3] = &unk_1000B94F0;
    v11[4] = self;
    v13 = v8;
    v12 = objc_retain(v5);
    objc_msgSend(v6, "enumerateKeysAndObjectsUsingBlock:", v11);
    objc_release(v12);
  }
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController capacityBarViewController](self, "capacityBarViewController"));
  -[AMPCapacityBarViewController setCapacityData:](v10, "setCapacityData:", v5);
  objc_release(v10);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
}