-[TSPDirectoryPackageWriter newCGDataConsumerAtRelativePath:]
CGDataConsumer *__cdecl -[TSPDirectoryPackageWriter newCGDataConsumerAtRelativePath:](
        TSPDirectoryPackageWriter *self,
        SEL a2,
        id a3)
{
  return -[TSPDirectoryPackageDataWriter newCGDataConsumerAtRelativePath:](
           self->_dataWriter,
           "newCGDataConsumerAtRelativePath:",
           a3);
}