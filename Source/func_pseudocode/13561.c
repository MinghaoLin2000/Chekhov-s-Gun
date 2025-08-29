-[TSUMutableLinkedPointerSet dealloc]
void __cdecl -[TSUMutableLinkedPointerSet dealloc](TSUMutableLinkedPointerSet *self, SEL a2)
{
  __CFDictionary *mDictionary; // x0
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  mDictionary = self->mDictionary;
  if ( mDictionary )
    CFRelease(mDictionary);
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___TSUMutableLinkedPointerSet;
  -[TSUMutableLinkedPointerSet dealloc](&v4, "dealloc");
}