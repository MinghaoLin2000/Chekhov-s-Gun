-[TSPPackage didReferenceData:]
void __cdecl -[TSPPackage didReferenceData:](TSPPackage *self, SEL a2, id a3)
{
  -[NSHashTable addObject:](self->_packageDatas, "addObject:", a3);
}