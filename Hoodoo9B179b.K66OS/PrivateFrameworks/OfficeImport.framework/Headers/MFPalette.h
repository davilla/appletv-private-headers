/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "MFObject.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MFPalette : NSObject <MFObject> {
@private
	NSMutableArray *m_colours;	// 4 = 0x4
}
+ (id)paletteWithColours:(id)colours;	// 0x328af3e5
- (id)init;	// 0x327caf79
- (id)initWithColours:(id)colours;	// 0x328af421
- (void)dealloc;	// 0x327c62dd
- (id)getColour:(int)colour;	// 0x329fc121
- (BOOL)resize:(int)resize;	// 0x329fc191
- (int)selectInto:(id)into;	// 0x328af511
- (BOOL)setEntries:(int)entries :(id)arg2;	// 0x329fc26d
@end

