/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OCBReader.h"


__attribute__((visibility("hidden")))
@interface EBReader : OCBReader {
@private
	XlObjectFactory *mXlObjectFactory;	// 16 = 0x10
}
+ (BOOL)isCSV;	// 0x34c553a1
+ (id)readFromData:(id)data cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x34dd7dad
+ (id)readFromData:(id)data cancel:(id)cancel tracing:(id)tracing temporaryDirectory:(id)directory asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x34dd77f1
+ (id)readFromFileName:(id)fileName cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x34c4fd35
+ (id)readFromFileName:(id)fileName cancel:(id)cancel tracing:(id)tracing temporaryDirectory:(id)directory asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x34c4fd69
+ (id)readerWithXlReader:(XlChartBinaryReader *)xlReader xlObjectFactory:(XlObjectFactory *)factory;	// 0x34c54e25
- (id)initWithXlReader:(XlChartBinaryReader *)xlReader xlObjectFactory:(XlObjectFactory *)factory;	// 0x34c54e75
- (void)dealloc;	// 0x34c8fdd1
- (bool)isCSV;	// 0x34c5536d
- (id)readWorkbookFrom:(XlChartBinaryReader *)from fileName:(id)name cancel:(id)cancel tracing:(id)tracing temporaryDirectory:(id)directory asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x34c54ec5
@end

