/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EBContentFormat : NSObject {
}
+ (id)edContentFormatFromXlDXfUserFmt:(XlDXfUserFmt *)xlDXfUserFmt edResources:(id)resources;	// 0x31d8b79d
+ (id)edContentFormatFromXlFormat:(XlFormat *)xlFormat edResources:(id)resources;	// 0x31c19dc5
+ (XlDXfUserFmt *)xlDXfUserFmtFromEDContentFormat:(id)edcontentFormat state:(id)state;	// 0x31d8b7ed
+ (XlFormat *)xlFormatFromEDContentFormat:(id)edcontentFormat state:(id)state;	// 0x31d8b67d
@end

