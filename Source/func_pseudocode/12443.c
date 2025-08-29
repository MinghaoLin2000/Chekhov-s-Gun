-[NSString tsu_UTIMimeType]
NSString *__cdecl -[NSString tsu_UTIMimeType](NSString *self, SEL a2)
{
  return (NSString *)-[NSString tsu_UTTypeCopyPreferredTagWithClass:](
                       self,
                       "tsu_UTTypeCopyPreferredTagWithClass:",
                       UTTagClassMIMEType);
}