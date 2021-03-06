/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideBase.h"

@class OADTheme, OADTextListStyle, OADColorMap;

@interface PDNotesMaster : PDSlideBase {
	OADTheme *mTheme;	// 32 = 0x20
	OADColorMap *mColorMap;	// 36 = 0x24
	OADTextListStyle *mNotesTextStyle;	// 40 = 0x28
}
- (id)init;	// 0x33aaf33d
- (id)colorMap;	// 0x33aaf421
- (id)colorScheme;	// 0x33aaf441
- (void)dealloc;	// 0x33aafb6d
- (void)doneWithContent;	// 0x33bd9ced
- (id)drawingTheme;	// 0x33bd9d7d
- (id)fontScheme;	// 0x33aaf479
- (id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x33aaf4d1
- (id)notesTextStyle;	// 0x33aaf431
- (id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x33aaf4cd
- (id)parentSlideBase;	// 0x33bd9c79
- (id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x33aaf4c9
- (id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style overrideIndex:(BOOL)index4;	// 0x33aaf4b1
- (id)parentTextStyleForTables;	// 0x33bd9ce9
- (id)placeholderWithType:(int)type placeholderTypeIndex:(int)index;	// 0x33bd9cb5
- (id)styleMatrix;	// 0x33bd9c7d
- (id)theme;	// 0x33aaf411
@end

