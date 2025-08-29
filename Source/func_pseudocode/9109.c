-[TSPAVAssetResourceLoaderDelegate dealloc]
void __cdecl -[TSPAVAssetResourceLoaderDelegate dealloc](TSPAVAssetResourceLoaderDelegate *self, SEL a2)
{
  objc_super v3; // [xsp+10h] [xbp-20h] BYREF

  -[TSUReadChannel close](self->_readChannel, "close");
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___TSPAVAssetResourceLoaderDelegate;
  -[TSPAVAssetResourceLoaderDelegate dealloc](&v3, "dealloc");
}