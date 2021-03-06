/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADBulletProperties.h"


__attribute__((visibility("hidden")))
@interface OADAutoNumberBulletProperties : OADBulletProperties {
@private
	int mSchemeType;	// 4 = 0x4
	int mStartIndex;	// 8 = 0x8
}
- (id)initWithAutoNumberSchemeType:(int)autoNumberSchemeType startIndex:(unsigned)index;	// 0x319ec1c1
- (int)autoNumberSchemeType;	// 0x319ec245
- (BOOL)isEqual:(id)equal;	// 0x319ec1dd
- (unsigned)startIndex;	// 0x31aaffb5
@end

