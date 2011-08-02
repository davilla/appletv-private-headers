/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCBReader.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EBReader : OCBReader {
@private
	XlObjectFactory *mXlObjectFactory;	// 16 = 0x10
}
+ (id)readFromData:(id)data cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x32cff0ad
+ (id)readFromData:(id)data cancel:(id)cancel tracing:(id)tracing temporaryDirectory:(id)directory asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x32cff0e9
+ (id)readFromFileName:(id)fileName cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x32bf9309
+ (id)readFromFileName:(id)fileName cancel:(id)cancel tracing:(id)tracing temporaryDirectory:(id)directory asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x32bf9345
+ (id)readerWithXlReader:(XlChartBinaryReader *)xlReader xlObjectFactory:(XlObjectFactory *)factory;	// 0x32bfcbbd
- (id)initWithXlReader:(XlChartBinaryReader *)xlReader xlObjectFactory:(XlObjectFactory *)factory;	// 0x32bfcc05
- (void)dealloc;	// 0x32b14369
- (id)readWorkbookFrom:(XlChartBinaryReader *)from fileName:(id)name cancel:(id)cancel tracing:(id)tracing temporaryDirectory:(id)directory asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x32bfcc41
@end

