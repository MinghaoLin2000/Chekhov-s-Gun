-[FudPersonalizer initWithDelegate:]
FudPersonalizer *__cdecl -[FudPersonalizer initWithDelegate:](FudPersonalizer *self, SEL a2, id a3)
{
  dispatch_queue_attr_s *v5; // x0
  OS_dispatch_queue *v6; // x0
  FudPersonalizer *v7; // x0
  const __CFString *v9; // x1
  objc_super v10; // [xsp+10h] [xbp-20h] BYREF

  if ( !a3 )
  {
    v9 = CFSTR("%s(): delegate=nil\n");
LABEL_9:
    FudLog(3LL, v9);
    return self;
  }
  v5 = dispatch_queue_attr_make_with_qos_class(0LL, QOS_CLASS_BACKGROUND, 0);
  v6 = (OS_dispatch_queue *)dispatch_queue_create("com.apple.fud.personalizer", v5);
  self->_personalizationQueue = v6;
  if ( !v6 )
  {
    v9 = CFSTR("%s(): Queue create error\n");
    goto LABEL_9;
  }
  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___FudPersonalizer;
  v7 = -[FudPersonalizer init](&v10, "init");
  self = v7;
  if ( !v7 )
  {
    v9 = CFSTR("%s(): super init error\n");
    goto LABEL_9;
  }
  v7->_delegate = (FudPersonalizerDelegate *)a3;
  *(_OWORD *)&v7->_manifestDict = 0u;
  *(_OWORD *)&v7->_serverRequestDict = 0u;
  *(_OWORD *)&v7->_responseData = 0u;
  *(_OWORD *)&v7->_amai = 0u;
  v7->_overrideSecurityDomain = 0;
  return self;
}