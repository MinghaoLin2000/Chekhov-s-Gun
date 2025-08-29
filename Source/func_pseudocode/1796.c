-[DeviceHeaderViewController setCapacityTotals:]
void __cdecl -[DeviceHeaderViewController setCapacityTotals:](DeviceHeaderViewController *self, SEL a2, id a3)
{
  id v5; // x19
  void *v6; // x21
  void *v7; // x23
  void *v8; // x24
  void *v9; // x22
  bool v10; // zf
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = objc_retain(a3);
  objc_storeStrong((id *)&self->_capacityTotals, a3);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", AMPDeviceTotalBytesKey));
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", AMPDeviceCategoriesKey));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKeyedSubscript:", AMPDeviceFreeCategoryKey));
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "objectForKeyedSubscript:", AMPDeviceCategoryBytesKey));
  objc_release(v8);
  objc_release(v7);
  if ( v6 )
    v10 = v9 == 0LL;
  else
    v10 = 1;
  if ( !v10 )
  {
    -[DeviceHeaderViewController setDeviceTotalDataCapacity:](self, "setDeviceTotalDataCapacity:", v6);
    -[DeviceHeaderViewController setDeviceTotalDataAvailable:](self, "setDeviceTotalDataAvailable:", v9);
    -[DeviceHeaderViewController updateDeviceDetailsLabelLine](self, "updateDeviceDetailsLabelLine");
  }
  objc_release(v9);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}