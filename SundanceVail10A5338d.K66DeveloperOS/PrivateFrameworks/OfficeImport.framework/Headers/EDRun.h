/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "EDKeyedObject.h"

@class EDResources;

@interface EDRun : NSObject <EDKeyedObject> {
	EDResources *mResources;	// 4 = 0x4
	unsigned mCharIndex;	// 8 = 0x8
	unsigned mFontIndex;	// 12 = 0xc
}
@property(assign) unsigned charIndex;	// G=0x33a1b4d9; S=0x33b81779; converted property
@property(retain) id font;	// G=0x33a1b4e9; S=0x33a605f5; converted property
@property(assign) unsigned fontIndex;	// G=0x33ac8629; S=0x33b81789; converted property
+ (id)runWithCharIndex:(unsigned)charIndex font:(id)font resources:(id)resources;	// 0x33a60559
+ (id)runWithCharIndex:(unsigned)charIndex fontIndex:(unsigned)index resources:(id)resources;	// 0x33a17bdd
+ (id)runWithResources:(id)resources;	// 0x33b8172d
- (id)initWithCharIndex:(unsigned)charIndex font:(id)font resources:(id)resources;	// 0x33a605b1
- (id)initWithCharIndex:(unsigned)charIndex fontIndex:(unsigned)index resources:(id)resources;	// 0x33a17c35
- (id)initWithResources:(id)resources;	// 0x33a17c75
// converted property getter: - (unsigned)charIndex;	// 0x33a1b4d9
// converted property getter: - (id)font;	// 0x33a1b4e9
// converted property getter: - (unsigned)fontIndex;	// 0x33ac8629
- (BOOL)isEqual:(id)equal;	// 0x33ad8715
- (BOOL)isEqualToRun:(id)run;	// 0x33ad8771
- (int)key;	// 0x33a17cd1
// converted property setter: - (void)setCharIndex:(unsigned)index;	// 0x33b81779
// converted property setter: - (void)setFont:(id)font;	// 0x33a605f5
// converted property setter: - (void)setFontIndex:(unsigned)index;	// 0x33b81789
@end

