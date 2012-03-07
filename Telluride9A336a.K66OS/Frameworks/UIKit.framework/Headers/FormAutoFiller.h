/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class DOMHTMLInputElement, WebFrame, DOMElement, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FormAutoFiller : NSObject {
@private
	WebFrame *_frame;	// 4 = 0x4
	DOMElement *_form;	// 8 = 0x8
	int _formType;	// 12 = 0xc
	DOMHTMLInputElement *_usernameElement;	// 16 = 0x10
	DOMHTMLInputElement *_passwordElement;	// 20 = 0x14
	NSMutableArray *_autoFilledControls;	// 24 = 0x18
	NSMutableDictionary *_fieldsFilledFromAB;	// 28 = 0x1c
	NSMutableArray *_continuationFields;	// 32 = 0x20
	BOOL _hasAutoFilled;	// 36 = 0x24
}
@property(readonly, assign) int formType;	// G=0x353704a1; converted property
@property(readonly, assign) BOOL hasAutoFilled;	// G=0x353717fd; converted property
@property(readonly, retain) DOMHTMLInputElement *passwordElement;	// G=0x3537050d; converted property
@property(readonly, retain) DOMHTMLInputElement *usernameElement;	// G=0x353704d5; converted property
+ (id)abMatchInFrame:(id)frame form:(id)form fieldName:(id)name;	// 0x3536fee9
+ (id)autoFillerForFrame:(id)frame form:(id)form create:(BOOL)create;	// 0x3536fc95
+ (void)clearAutoFillStateForFrame:(id)frame;	// 0x35201425
+ (void)clearAutoFilledTextField:(id)field inFrame:(id)frame form:(id)form;	// 0x35370019
+ (id)fieldNameForAutoFillOfControl:(id)control rep:(id)rep respectHTMLAutocompleteAttribute:(BOOL)attribute;	// 0x35370b75
+ (int)indexOfItemInRadioButtonGroup:(id)radioButtonGroup forSynonyms:(id)synonyms;	// 0x35370951
+ (int)indexOfItemInSelectElement:(id)selectElement forSynonyms:(id)synonyms;	// 0x35370545
+ (BOOL)isContinuationField:(id)field inFrame:(id)frame form:(id)form;	// 0x3536ff39
+ (id)matchForControl:(id)control rep:(id)rep fieldLabels:(id)labels useFieldName:(BOOL)name foundByPageScan:(BOOL *)scan;	// 0x3536fdf9
+ (id)radioButtonGroupContaining:(id)containing inFormElements:(id)formElements;	// 0x353707c9
+ (void)recordABMatch:(id)match inFrame:(id)frame form:(id)form fieldName:(id)name;	// 0x3536ff95
- (id)init;	// 0x35370061
- (id)_decomposeStreetAddress:(id)address style:(int)style;	// 0x35370aa9
- (void)_insertABValue:(id)value inTextFieldElement:(id)textFieldElement match:(id)match fieldName:(id)name;	// 0x35370c3d
- (int)_itemInSelectElement:(id)selectElement forMatch:(id)match;	// 0x35370a29
- (int)_reflectAutoFillMatch:(id)match inControls:(id)controls currIndex:(int)index fieldName:(id)name;	// 0x353714c5
- (int)_reflectMultiFieldMatch:(id)match inControls:(id)controls currIndex:(unsigned)index fieldName:(id)name isPhoneNumber:(BOOL)number;	// 0x35370cd9
- (void)_scanElements;	// 0x3537027d
- (BOOL)autoFill;	// 0x3537180d
- (void)autoFillAddressStartingAtControl:(id)control match:(id)match;	// 0x35371a3d
- (int)autoFillPhoneOrZipStartingAtControl:(id)control match:(id)match;	// 0x35371d81
- (void)clearAutoFilledTextField:(id)field;	// 0x35371fc1
- (void)dealloc;	// 0x353700d5
// converted property getter: - (int)formType;	// 0x353704a1
// converted property getter: - (BOOL)hasAutoFilled;	// 0x353717fd
// converted property getter: - (id)passwordElement;	// 0x3537050d
- (void)recordABContinuationField:(id)field;	// 0x35371f1d
- (void)recordABMatch:(id)match fieldName:(id)name;	// 0x35371e41
// converted property getter: - (id)usernameElement;	// 0x353704d5
- (id)visibleControlsInForm;	// 0x35370199
@end
