/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSArray.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _NSCallStackArray : NSArray {
	void **_frames;	// 4 = 0x4
	unsigned _cnt;	// 8 = 0x8
	unsigned _ignore;	// 12 = 0xc
	char **_pcstrs;	// 16 = 0x10
	BOOL _wantSyms;	// 20 = 0x14
}
+ (id)arrayWithFrames:(void **)frames count:(unsigned)count symbols:(BOOL)symbols;	// 0x3467e251
- (unsigned)count;	// 0x346df979
- (void)dealloc;	// 0x3467e2e1
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x346dfab5
- (void)finalize;	// 0x346df921
- (id)objectAtIndex:(unsigned)index;	// 0x346df989
@end
