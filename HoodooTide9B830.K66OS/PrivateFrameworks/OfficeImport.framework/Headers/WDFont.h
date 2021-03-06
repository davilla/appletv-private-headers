/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WDFont : NSObject <NSCopying> {
@private
	NSString *mName;	// 4 = 0x4
	NSString *mSecondName;	// 8 = 0x8
	int mFontFamily;	// 12 = 0xc
	int mCharacterSet;	// 16 = 0x10
	int mPitch;	// 20 = 0x14
}
@property(assign) int characterSet;	// G=0x31370bd9; S=0x31200035; converted property
@property(assign) int fontFamily;	// G=0x31370bc9; S=0x31200025; converted property
@property(retain) id name;	// G=0x3121afbd; S=0x31370bf9; converted property
@property(assign) int pitch;	// G=0x31370be9; S=0x31200015; converted property
@property(retain) id secondName;	// G=0x31370bb9; S=0x31206b21; converted property
- (id)init;	// 0x31370e95
- (id)initWithName:(id)name;	// 0x311fff5d
// converted property getter: - (int)characterSet;	// 0x31370bd9
- (id)copyWithZone:(NSZone *)zone;	// 0x31370c39
- (void)dealloc;	// 0x31186785
// converted property getter: - (int)fontFamily;	// 0x31370bc9
- (unsigned)hash;	// 0x31370e25
- (BOOL)isEqual:(id)equal;	// 0x31370ced
// converted property getter: - (id)name;	// 0x3121afbd
// converted property getter: - (int)pitch;	// 0x31370be9
// converted property getter: - (id)secondName;	// 0x31370bb9
// converted property setter: - (void)setCharacterSet:(int)set;	// 0x31200035
// converted property setter: - (void)setFontFamily:(int)family;	// 0x31200025
// converted property setter: - (void)setName:(id)name;	// 0x31370bf9
// converted property setter: - (void)setPitch:(int)pitch;	// 0x31200015
// converted property setter: - (void)setSecondName:(id)name;	// 0x31206b21
@end

