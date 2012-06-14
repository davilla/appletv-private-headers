/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CPDumpType.h"

@class CPDumpEnum;

__attribute__((visibility("hidden")))
@interface CPDumpNumeric : CPDumpType {
@private
	int mType;	// 8 = 0x8
	CPDumpEnum *mEnumType;	// 12 = 0xc
}
- (id)initWithType:(int)type;	// 0x31308a45
- (id)initWithType:(int)type enumType:(id)type2;	// 0x31308995
- (void)dealloc;	// 0x313089f9
- (id)enumType;	// 0x31308a69
- (void)fromBinary:(FILE *)binary toXml:(xmlNode *)xml state:(id)state;	// 0x31308a79
- (void)fromXml:(xmlNode *)xml toBinary:(FILE *)binary state:(id)state;	// 0x31308bf9
- (int)type;	// 0x31308a59
@end
