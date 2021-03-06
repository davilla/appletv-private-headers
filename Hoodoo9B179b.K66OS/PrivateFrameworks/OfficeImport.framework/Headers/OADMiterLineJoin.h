/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADLineJoin.h"


__attribute__((visibility("hidden")))
@interface OADMiterLineJoin : OADLineJoin {
@private
	float mLimit;	// 12 = 0xc
	unsigned mIsLimitOverridden : 1;	// 16 = 0x10
}
@property(assign) float limit;	// G=0x329da4c1; S=0x328830a5; converted property
+ (id)defaultProperties;	// 0x32883011
- (id)initWithDefaults;	// 0x32883059
- (id)copyWithZone:(NSZone *)zone;	// 0x329da44d
- (BOOL)isLimitOverridden;	// 0x329da4f1
// converted property getter: - (float)limit;	// 0x329da4c1
// converted property setter: - (void)setLimit:(float)limit;	// 0x328830a5
@end

