/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSOrthography.h"


@interface NSSimpleOrthography : NSOrthography {
	unsigned _orthographyFlags;	// 4 = 0x4
}
@property(readonly, assign) unsigned orthographyFlags;	// G=0x320eab6d; converted property
+ (void)initialize;	// 0x320ea829
+ (id)orthographyWithFlags:(unsigned)flags;	// 0x320ea875
- (id)initWithCoder:(id)coder;	// 0x320eaa45
- (id)initWithDominantScript:(id)dominantScript languageMap:(id)map;	// 0x320ea949
- (id)initWithFlags:(unsigned)flags;	// 0x320ea8b5
- (id)allLanguages;	// 0x320eac65
- (id)allScripts;	// 0x320eac49
- (Class)classForCoder;	// 0x320ea9c5
- (id)dominantLanguage;	// 0x320eac29
- (id)dominantLanguageForScript:(id)script;	// 0x320eabe5
- (id)dominantScript;	// 0x320eab31
- (void)encodeWithCoder:(id)coder;	// 0x320ea9d5
- (id)languageMap;	// 0x320eab51
- (id)languagesForScript:(id)script;	// 0x320eab7d
// converted property getter: - (unsigned)orthographyFlags;	// 0x320eab6d
@end
