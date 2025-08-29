-[StoreUIService presentBackgroundAssetsTransparencyWithLogKey:completion:]
void __cdecl -[StoreUIService presentBackgroundAssetsTransparencyWithLogKey:completion:](
        StoreUIService *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x21
  os_log_s *v8; // x22
  BackgroundAssetConsentTask *v9; // x0
  BackgroundAssetConsentTask *consentTask; // x8
  BackgroundAssetConsentTask *v11; // x22
  id v12; // x20
  id v13; // x19
  _QWORD v14[4]; // [xsp+8h] [xbp-78h] BYREF
  id v15; // [xsp+28h] [xbp-58h]
  StoreUIService *v16; // [xsp+30h] [xbp-50h]
  id v17; // [xsp+38h] [xbp-48h]
  uint8_t buf[4]; // [xsp+40h] [xbp-40h] BYREF
  id v19; // [xsp+44h] [xbp-3Ch]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)ASDLogHandleForCategory(14LL));
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 138543362;
    v19 = v6;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v8,
      OS_LOG_TYPE_DEFAULT,
      "[%{public}@] Presenting transparency sheet",
      buf,
      0xCu);
  }
  objc_release(v8);
  v9 = objc_alloc_init(&OBJC_CLASS___BackgroundAssetConsentTask);
  consentTask = self->_consentTask;
  self->_consentTask = v9;
  objc_release(consentTask);
  v11 = self->_consentTask;
  v14[0] = _NSConcreteStackBlock;
  v14[1] = 3254779904LL;
  v14[2] = sub_10000ACA8;
  v14[3] = &unk_1000109E8;
  v16 = self;
  v17 = v7;
  v15 = v6;
  v12 = objc_retain(v7);
  v13 = objc_retain(v6);
  -[BackgroundAssetConsentTask requestConsentWithCompletion:](v11, "requestConsentWithCompletion:", v14);
  objc_release(v17);
  objc_release(v15);
  objc_release(v12);
  objc_release(v13);
}