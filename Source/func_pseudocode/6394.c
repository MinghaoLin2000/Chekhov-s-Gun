-[VideoConversionTask updateResultTracker]
void __cdecl -[VideoConversionTask updateResultTracker](VideoConversionTask *self, SEL a2)
{
  NSError *v3; // x20
  NSNumber *v4; // x20
  objc_class *v5; // x0
  NSString *v6; // x21
  NSDictionary *v7; // x22
  _QWORD v8[2]; // [xsp+8h] [xbp-48h] BYREF
  _QWORD v9[2]; // [xsp+18h] [xbp-38h] BYREF

  -[MediaConversionRequestTracker setOutputInformation:](
    self->_requestTracker,
    "setOutputInformation:",
    self->_resultInformation);
  v3 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask error](self, "error"));
  -[MediaConversionRequestTracker setError:](self->_requestTracker, "setError:", v3);
  objc_release(v3);
  v8[0] = CFSTR("videoConversionStatus");
  v4 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInteger:](&OBJC_CLASS___NSNumber, "numberWithInteger:", self->_status));
  v8[1] = CFSTR("videoConversionOperationType");
  v9[0] = v4;
  v5 = (objc_class *)objc_opt_class(self);
  v6 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v5));
  v9[1] = v6;
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSDictionary dictionaryWithObjects:forKeys:count:](
           &OBJC_CLASS___NSDictionary,
           "dictionaryWithObjects:forKeys:count:",
           v9,
           v8,
           2LL));
  -[MediaConversionRequestTracker setServiceInformation:](self->_requestTracker, "setServiceInformation:", v7);
  objc_release(v7);
  objc_release(v6);
  objc_release(v4);
}