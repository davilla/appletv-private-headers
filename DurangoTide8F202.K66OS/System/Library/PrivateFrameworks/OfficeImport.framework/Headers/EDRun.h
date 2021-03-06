/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "EDKeyedObject.h"

@class EDResources;

__attribute__((visibility("hidden")))
@interface EDRun : NSObject <EDKeyedObject> {
@private
	EDResources *mResources;	// 4 = 0x4
	unsigned mCharIndex;	// 8 = 0x8
	unsigned mFontIndex;	// 12 = 0xc
}
@property(assign) unsigned charIndex;	// G=0x319e6895; S=0x31ad3c65; converted property
@property(retain) id font;	// G=0x319e68a5; S=0x31a0e26d; converted property
@property(assign) unsigned fontIndex;	// G=0x31a67515; S=0x31ad3c75; converted property
+ (id)runWithCharIndex:(unsigned)charIndex font:(id)font resources:(id)resources;	// 0x31a0e1dd
+ (id)runWithCharIndex:(unsigned)charIndex fontIndex:(unsigned)index resources:(id)resources;	// 0x319e63a1
+ (id)runWithResources:(id)resources;	// 0x31ad3c85
- (id)initWithCharIndex:(unsigned)charIndex font:(id)font resources:(id)resources;	// 0x31a0e22d
- (id)initWithCharIndex:(unsigned)charIndex fontIndex:(unsigned)index resources:(id)resources;	// 0x319e63f1
- (id)initWithResources:(id)resources;	// 0x319e6429
// converted property getter: - (unsigned)charIndex;	// 0x319e6895
// converted property getter: - (id)font;	// 0x319e68a5
// converted property getter: - (unsigned)fontIndex;	// 0x31a67515
- (BOOL)isEqual:(id)equal;	// 0x31a731d5
- (BOOL)isEqualToRun:(id)run;	// 0x31a73229
- (unsigned)key;	// 0x319e647d
// converted property setter: - (void)setCharIndex:(unsigned)index;	// 0x31ad3c65
// converted property setter: - (void)setFont:(id)font;	// 0x31a0e26d
// converted property setter: - (void)setFontIndex:(unsigned)index;	// 0x31ad3c75
@end

