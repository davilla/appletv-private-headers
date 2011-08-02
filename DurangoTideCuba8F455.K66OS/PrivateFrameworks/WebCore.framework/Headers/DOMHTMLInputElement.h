/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"
#import "WebCore-Structs.h"

@class DOMFileList, NSURL, NSString, DOMHTMLFormElement;

@interface DOMHTMLInputElement : DOMHTMLElement {
}
@property(readonly, copy) NSURL *absoluteImageURL;	// G=0x3184199d; 
@property(copy) NSString *accept;	// G=0x3183fc31; S=0x3183fd65; 
@property(copy) NSString *accessKey;	// G=0x3183fe7d; S=0x3183ffb1; 
@property(copy) NSString *align;	// G=0x318400c9; S=0x318401fd; 
@property(copy) NSString *alt;	// G=0x31840315; S=0x31840449; 
@property(readonly, copy) NSString *altDisplayString;	// G=0x318417d5; 
@property(assign) BOOL autocapitalize;	// G=0x31841a39; S=0x31841a55; converted property
@property(assign) BOOL autocorrect;	// G=0x318419f9; S=0x31841a15; converted property
@property(assign) BOOL autofocus;	// G=0x3183f259; S=0x31840585; 
@property(assign) BOOL checked;	// G=0x3183f1f9; S=0x31840561; 
@property(assign) BOOL defaultChecked;	// G=0x3183fb79; S=0x3183fb95; 
@property(copy) NSString *defaultValue;	// G=0x3183f34d; S=0x3183fa61; 
@property(assign) BOOL disabled;	// G=0x3183f211; S=0x3183f231; 
@property(readonly, retain) DOMFileList *files;	// G=0x318419dd; 
@property(readonly, retain) DOMHTMLFormElement *form;	// G=0x3183fbb9; 
@property(assign) BOOL formNoValidate;	// G=0x3183fbd5; S=0x3183fbf1; converted property
@property(assign) BOOL indeterminate;	// G=0x3183f2b9; S=0x31841749; 
@property(retain) id max;	// G=0x318405a9; S=0x31840679; converted property
@property(assign) int maxLength;	// G=0x31840b09; S=0x31840b21; 
@property(retain) id min;	// G=0x318405dd; S=0x3184079d; converted property
@property(assign) BOOL multiple;	// G=0x31840b55; S=0x31840b71; 
@property(copy) NSString *name;	// G=0x3183f2ed; S=0x31840b95; 
@property(retain) id pattern;	// G=0x31840611; S=0x318408c1; converted property
@property(retain) id placeholder;	// G=0x3183f481; S=0x3183f6f1; converted property
@property(assign) BOOL readOnly;	// G=0x3183f279; S=0x31840cad; 
@property(assign) BOOL required;	// G=0x31840cd1; S=0x31840ced; converted property
@property(assign) int selectionEnd;	// G=0x318417a1; S=0x318417b9; 
@property(assign) int selectionStart;	// G=0x3184176d; S=0x31841785; 
@property(copy) NSString *size;	// G=0x31840d11; S=0x31840e4d; 
@property(copy) NSString *src;	// G=0x31840f75; S=0x318410a9; 
@property(retain) id step;	// G=0x31840645; S=0x318409e5; converted property
@property(copy) NSString *type;	// G=0x3183f31d; S=0x318411c1; 
@property(copy) NSString *useMap;	// G=0x318412d9; S=0x3184140d; 
@property(copy) NSString *value;	// G=0x3183f5b9; S=0x3183f815; 
@property(assign) double valueAsDate;	// G=0x31841525; S=0x31841565; converted property
@property(assign) double valueAsNumber;	// G=0x318415c1; S=0x318415d9; converted property
@property(readonly, assign) BOOL willValidate;	// G=0x3183f299; 
- (BOOL)_isAutofilled;	// 0x3182fcb9
- (BOOL)_isEdited;	// 0x3182fccd
- (BOOL)_isTextField;	// 0x3182fca5
- (void)_replaceCharactersInRange:(NSRange)range withString:(id)string selectingFromIndex:(int)index;	// 0x3182fd05
- (NSRange)_selectedRange;	// 0x3182feed
- (void)_setAutofilled:(BOOL)autofilled;	// 0x3182ff1d
// declared property getter: - (id)absoluteImageURL;	// 0x3184199d
// declared property getter: - (id)accept;	// 0x3183fc31
// declared property getter: - (id)accessKey;	// 0x3183fe7d
// declared property getter: - (id)align;	// 0x318400c9
// declared property getter: - (id)alt;	// 0x31840315
// declared property getter: - (id)altDisplayString;	// 0x318417d5
// converted property getter: - (BOOL)autocapitalize;	// 0x31841a39
// converted property getter: - (BOOL)autocorrect;	// 0x318419f9
// declared property getter: - (BOOL)autofocus;	// 0x3183f259
- (BOOL)checkValidity;	// 0x31841ae1
// declared property getter: - (BOOL)checked;	// 0x3183f1f9
- (void)click;	// 0x31841c15
// declared property getter: - (BOOL)defaultChecked;	// 0x3183fb79
// declared property getter: - (id)defaultValue;	// 0x3183f34d
// declared property getter: - (BOOL)disabled;	// 0x3183f211
// declared property getter: - (id)files;	// 0x318419dd
// declared property getter: - (id)form;	// 0x3183fbb9
// converted property getter: - (BOOL)formNoValidate;	// 0x3183fbd5
// declared property getter: - (BOOL)indeterminate;	// 0x3183f2b9
// converted property getter: - (id)max;	// 0x318405a9
// declared property getter: - (int)maxLength;	// 0x31840b09
// converted property getter: - (id)min;	// 0x318405dd
// declared property getter: - (BOOL)multiple;	// 0x31840b55
// declared property getter: - (id)name;	// 0x3183f2ed
// converted property getter: - (id)pattern;	// 0x31840611
// converted property getter: - (id)placeholder;	// 0x3183f481
// declared property getter: - (BOOL)readOnly;	// 0x3183f279
// converted property getter: - (BOOL)required;	// 0x31840cd1
- (void)select;	// 0x3183f2d1
// declared property getter: - (int)selectionEnd;	// 0x318417a1
// declared property getter: - (int)selectionStart;	// 0x3184176d
// declared property setter: - (void)setAccept:(id)accept;	// 0x3183fd65
// declared property setter: - (void)setAccessKey:(id)key;	// 0x3183ffb1
// declared property setter: - (void)setAlign:(id)align;	// 0x318401fd
// declared property setter: - (void)setAlt:(id)alt;	// 0x31840449
// converted property setter: - (void)setAutocapitalize:(BOOL)autocapitalize;	// 0x31841a55
// converted property setter: - (void)setAutocorrect:(BOOL)autocorrect;	// 0x31841a15
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x31840585
// declared property setter: - (void)setChecked:(BOOL)checked;	// 0x31840561
- (void)setCustomValidity:(id)validity;	// 0x31841afd
// declared property setter: - (void)setDefaultChecked:(BOOL)checked;	// 0x3183fb95
// declared property setter: - (void)setDefaultValue:(id)value;	// 0x3183fa61
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x3183f231
// converted property setter: - (void)setFormNoValidate:(BOOL)validate;	// 0x3183fbf1
// declared property setter: - (void)setIndeterminate:(BOOL)indeterminate;	// 0x31841749
// converted property setter: - (void)setMax:(id)max;	// 0x31840679
// declared property setter: - (void)setMaxLength:(int)length;	// 0x31840b21
// converted property setter: - (void)setMin:(id)min;	// 0x3184079d
// declared property setter: - (void)setMultiple:(BOOL)multiple;	// 0x31840b71
// declared property setter: - (void)setName:(id)name;	// 0x31840b95
// converted property setter: - (void)setPattern:(id)pattern;	// 0x318408c1
// converted property setter: - (void)setPlaceholder:(id)placeholder;	// 0x3183f6f1
// declared property setter: - (void)setReadOnly:(BOOL)only;	// 0x31840cad
// converted property setter: - (void)setRequired:(BOOL)required;	// 0x31840ced
// declared property setter: - (void)setSelectionEnd:(int)end;	// 0x318417b9
- (void)setSelectionRange:(int)range end:(int)end;	// 0x31841c2d
// declared property setter: - (void)setSelectionStart:(int)start;	// 0x31841785
// declared property setter: - (void)setSize:(id)size;	// 0x31840e4d
// declared property setter: - (void)setSrc:(id)src;	// 0x318410a9
// converted property setter: - (void)setStep:(id)step;	// 0x318409e5
// declared property setter: - (void)setType:(id)type;	// 0x318411c1
// declared property setter: - (void)setUseMap:(id)map;	// 0x3184140d
// declared property setter: - (void)setValue:(id)value;	// 0x3183f815
// converted property setter: - (void)setValueAsDate:(double)date;	// 0x31841565
// converted property setter: - (void)setValueAsNumber:(double)number;	// 0x318415d9
- (void)setValueForUser:(id)user;	// 0x3183f93d
// declared property getter: - (id)size;	// 0x31840d11
// declared property getter: - (id)src;	// 0x31840f75
// converted property getter: - (id)step;	// 0x31840645
- (void)stepDown:(int)down;	// 0x31841aad
- (void)stepUp:(int)up;	// 0x31841a79
- (int)structuralComplexityContribution;	// 0x3185c335
// declared property getter: - (id)type;	// 0x3183f31d
// declared property getter: - (id)useMap;	// 0x318412d9
- (id)validationMessage;	// 0x31841615
- (id)validity;	// 0x3183fc15
// declared property getter: - (id)value;	// 0x3183f5b9
// converted property getter: - (double)valueAsDate;	// 0x31841525
// converted property getter: - (double)valueAsNumber;	// 0x318415c1
// declared property getter: - (BOOL)willValidate;	// 0x3183f299
@end

