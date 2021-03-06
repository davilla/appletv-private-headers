/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABMultiCellContentView_DisplayAlternate.h"

@class NSMutableArray, NSArray;

@interface ABMultiCellContentView_Address : ABMultiCellContentView_DisplayAlternate {
@private
	NSArray *_lineInfos;	// 196 = 0xc4
	NSMutableArray *_lineSubviews;	// 200 = 0xc8
	NSRange _streetRange;	// 204 = 0xcc
	unsigned _entryFieldIndexOfFirstStreetField;	// 212 = 0xd4
	NSMutableArray *_verticalDividers;	// 216 = 0xd8
}
+ (int)calculateStreetRowsForText:(id)text;	// 0x34c76151
+ (CGSize)layoutSubviewsForView:(id)view usingSize:(CGSize)size propertyGroup:(id)group info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;	// 0x34c6f641
+ (id)lineInfosForPropertyGroup:(id)propertyGroup info:(id)info;	// 0x34c74d1d
+ (unsigned)rowsForPropertyGroup:(id)propertyGroup info:(id)info;	// 0x34cc1d61
+ (id)streetTextForPropertyGroup:(id)propertyGroup info:(id)info;	// 0x34c76111
- (void)addStreetFieldAnimated:(BOOL)animated;	// 0x34c8acf1
- (void)dealloc;	// 0x34c81571
- (unsigned)lineIndexOfStreetField:(id)streetField;	// 0x34c8a4e5
- (id)pickerView;	// 0x34c75dc9
- (id)propertyKeyForTag:(int)tag;	// 0x34c8a491
- (void)reload;	// 0x34c7528d
- (void)reloadFromModel;	// 0x34c76189
- (void)removeStreetFieldAtIndex:(unsigned)index animated:(BOOL)animated;	// 0x34cc1e29
- (void)removeTextFieldAnimationDidStop:(id)removeTextFieldAnimation finished:(id)finished context:(void *)context;	// 0x34cc1d89
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x34c76581
- (void)setPropertyGroupInfo:(id)info;	// 0x34c74b51
- (id)streetFieldAtLineIndex:(unsigned)lineIndex;	// 0x34c8a551
- (int)tagForPropertyKey:(id)propertyKey;	// 0x34c75e0d
- (void)textFieldDidEndEditing:(id)textField;	// 0x34c8b6bd
- (void)textFieldTextDidChange:(id)textFieldText;	// 0x34c8a219
@end

