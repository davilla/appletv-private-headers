/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewCellLayoutManager.h"
#import "UITextFieldDelegate.h"


__attribute__((visibility("hidden")))
@interface UITableViewCellLayoutManagerEditable1 : UITableViewCellLayoutManager <UITextFieldDelegate> {
}
- (void)_textFieldEndEditing:(id)editing;	// 0x33b050fd
- (void)_textFieldEndEditingOnReturn:(id)aReturn;	// 0x33c4037d
- (void)_textFieldStartEditing:(id)editing;	// 0x33b04db1
- (void)_textValueChanged:(id)changed;	// 0x33c40381
- (float)defaultTextFieldFontSizeForCell:(id)cell;	// 0x33c401b5
- (id)detailTextLabelForCell:(id)cell;	// 0x33b04391
- (id)editableTextFieldForCell:(id)cell;	// 0x33b03fe5
- (void)layoutSubviewsOfCell:(id)cell;	// 0x33b04395
- (void)textFieldDidBeginEditing:(id)textField;	// 0x33c4025d
- (void)textFieldDidEndEditing:(id)textField;	// 0x33c40261
- (BOOL)textFieldShouldBeginEditing:(id)textField;	// 0x33c40375
- (BOOL)textFieldShouldReturn:(id)textField;	// 0x33c40379
- (id)textLabelForCell:(id)cell;	// 0x33c401e1
@end

