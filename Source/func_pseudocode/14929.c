-[ATXHeuristicDataSourcesClient dealloc]
void __cdecl -[ATXHeuristicDataSourcesClient dealloc](ATXHeuristicDataSourcesClient *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  -[NSXPCConnection invalidate](self->_xpcConnection, "invalidate");
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___ATXHeuristicDataSourcesClient;
  -[ATXHeuristicDataSourcesClient dealloc](&v3, "dealloc");
}