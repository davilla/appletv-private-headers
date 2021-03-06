/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"


@interface UITableViewCellLayoutManager : NSObject {
}
+ (id)layoutManagerForTableViewCellStyle:(int)tableViewCellStyle;	// 0x3007ae69
- (CGRect)_accessoryRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x30080415
- (CGRect)_adjustedBackgroundContentRectForCell:(id)cell forIndentedState:(BOOL)indentedState;	// 0x3007b419
- (CGRect)_adjustedBackgroundRectForCell:(id)cell forIndentedState:(BOOL)indentedState;	// 0x3007b569
- (CGRect)_backgroundRectForCell:(id)cell forIndentedState:(BOOL)indentedState;	// 0x3007b629
- (CGRect)_contentRectForCell:(id)cell forEditingState:(BOOL)editingState showingDeleteConfirmation:(BOOL)confirmation;	// 0x3007b051
- (CGRect)_editControlRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x3007f881
- (CGRect)_editingAccessoryRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x300807d5
- (CGRect)_reorderControlRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x3007fab1
- (CGRect)_reorderSeparatorRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x300801e1
- (CGRect)accessoryEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x300803e5
- (BOOL)accessoryShouldAppearForCell:(id)accessory;	// 0x3007b865
- (BOOL)accessoryShouldFadeForCell:(id)accessory;	// 0x30148971
- (CGRect)accessoryStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x30149b0d
- (CGRect)backgroundEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x3007f715
- (CGRect)backgroundStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x30147f6d
- (void)cell:(id)cell didTransitionToState:(unsigned)state;	// 0x30148bcd
- (void)cell:(id)cell willTransitionToState:(unsigned)state;	// 0x30147859
- (CGRect)contentEndingRectForCell:(id)cell forDisplayOfDeleteConfirmation:(BOOL)deleteConfirmation;	// 0x301609bd
- (CGRect)contentEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x3007b021
- (float)contentIndentationForCell:(id)cell;	// 0x30080c79
- (CGRect)contentRectForCell:(id)cell forState:(unsigned)state;	// 0x302ca029
- (CGRect)contentStartingRectForCell:(id)cell forDisplayOfDeleteConfirmation:(BOOL)deleteConfirmation;	// 0x301605d9
- (CGRect)contentStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x301486dd
- (float)defaultDetailTextLabelFontSizeForCell:(id)cell;	// 0x302ca019
- (id)defaultEditableTextFieldForCell:(id)cell;	// 0x301a2ba5
- (id)defaultImageViewForCell:(id)cell;	// 0x3009f525
- (id)defaultLabelForCell:(id)cell;	// 0x300e4dd1
- (id)defaultLabelForCell:(id)cell ofClass:(Class)aClass;	// 0x300e4e11
- (float)defaultTextLabelFontSizeForCell:(id)cell;	// 0x30146e11
- (CGRect)deleteConfirmationRectForCell:(id)cell;	// 0x301603c1
- (id)detailTextLabelForCell:(id)cell;	// 0x30146d0d
- (CGRect)editControlEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x3007f845
- (BOOL)editControlShouldAppearForCell:(id)editControl;	// 0x30147fe5
- (BOOL)editControlShouldFadeForCell:(id)editControl;	// 0x3007fa71
- (CGRect)editControlStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x301486ad
- (id)editableTextFieldForCell:(id)cell;	// 0x30162ae1
- (CGRect)editingAccessoryEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x300807a5
- (BOOL)editingAccessoryShouldAppearForCell:(id)editingAccessory;	// 0x3007fdb9
- (BOOL)editingAccessoryShouldFadeForCell:(id)editingAccessory;	// 0x30080b79
- (CGRect)editingAccessoryStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x30149a95
- (id)imageViewForCell:(id)cell;	// 0x3009f515
- (void)layoutSubviewsOfCell:(id)cell;	// 0x3007e979
- (CGRect)reorderControlEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x3007fa75
- (BOOL)reorderControlShouldAppearForCell:(id)reorderControl;	// 0x3009f5c1
- (BOOL)reorderControlShouldFadeForCell:(id)reorderControl;	// 0x30080109
- (CGRect)reorderControlStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x3015be35
- (CGRect)reorderSeparatorEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x300801a5
- (BOOL)reorderSeparatorShouldAppearForCell:(id)reorderSeparator;	// 0x3009f569
- (BOOL)reorderSeparatorShouldFadeForCell:(id)reorderSeparator;	// 0x30080391
- (CGRect)reorderSeparatorStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x302ca065
- (id)textLabelForCell:(id)cell;	// 0x30146cfd
@end

