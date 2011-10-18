/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMHTMLElement.h"

@class DOMHTMLFormElement, DOMFileList, NSURL, NSString;

@interface DOMHTMLInputElement : DOMHTMLElement {
}
@property(readonly, copy) NSURL *absoluteImageURL;	// G=0x35bd7a61; 
@property(copy) NSString *accept;	// G=0x35bd5ee1; S=0x35bd4d11; 
@property(copy) NSString *accessKey;	// G=0x35bd5fc1; S=0x35bd4e55; 
@property(copy) NSString *align;	// G=0x35bd60a1; S=0x35bd4f99; 
@property(copy) NSString *alt;	// G=0x35bd6181; S=0x35bd50dd; 
@property(readonly, copy) NSString *altDisplayString;	// G=0x35bd7871; 
@property(retain) id autocapitalize;	// G=0x35bd7edd; S=0x35bd7fb1; converted property
@property(assign) BOOL autocorrect;	// G=0x35bd7d55; S=0x35bd7e11; converted property
@property(assign) BOOL autofocus;	// G=0x35bd3ac5; S=0x35bd405d; 
@property(assign) BOOL checked;	// G=0x35bd3111; S=0x35bd694d; 
@property(assign) BOOL defaultChecked;	// G=0x35bd3935; S=0x35bd3ead; 
@property(copy) NSString *defaultValue;	// G=0x35bd3561; S=0x35bd37fd; 
@property(assign) BOOL disabled;	// G=0x35bd3145; S=0x35bd3205; 
@property(readonly, retain) DOMFileList *files;	// G=0x35bd7b49; 
@property(readonly, retain) DOMHTMLFormElement *form;	// G=0x35bd4495; 
@property(retain) id formAction;	// G=0x35bd4551; S=0x35bd4801; converted property
@property(retain) id formEnctype;	// G=0x35bd5c41; S=0x35bd4945; converted property
@property(retain) id formMethod;	// G=0x35bd5d21; S=0x35bd4a89; converted property
@property(assign) BOOL formNoValidate;	// G=0x35bd39fd; S=0x35bd3f85; converted property
@property(retain) id formTarget;	// G=0x35bd5e01; S=0x35bd4bcd; converted property
@property(assign) BOOL incremental;	// G=0x35bd3de5; S=0x35bd43bd; converted property
@property(assign) BOOL indeterminate;	// G=0x35bd3455; S=0x35bd74b5; 
@property(retain) id max;	// G=0x35bd6261; S=0x35bd5221; converted property
@property(assign) int maxLength;	// G=0x35bd32d5; S=0x35bd6a1d; 
@property(retain) id min;	// G=0x35bd6341; S=0x35bd5365; converted property
@property(assign) BOOL multiple;	// G=0x35bd3b8d; S=0x35bd4135; 
@property(copy) NSString *name;	// G=0x35bd6421; S=0x35bd54a9; 
@property(retain) id pattern;	// G=0x35bd6501; S=0x35bd55ed; converted property
@property(retain) id placeholder;	// G=0x35bd65e1; S=0x35bd5731; converted property
@property(assign) BOOL readOnly;	// G=0x35bd3c55; S=0x35bd420d; 
@property(assign) BOOL required;	// G=0x35bd3d1d; S=0x35bd42e5; converted property
@property(assign) int selectionEnd;	// G=0x35bd76f9; S=0x35bd77b5; 
@property(assign) int selectionStart;	// G=0x35bd7581; S=0x35bd763d; 
@property(copy) NSString *size;	// G=0x35bd6ae9; S=0x35bd6c41; 
@property(copy) NSString *src;	// G=0x35bd46a9; S=0x35bd5875; 
@property(retain) id step;	// G=0x35bd66c1; S=0x35bd59b9; converted property
@property(copy) NSString *type;	// G=0x35bd3489; S=0x35bd6d8d; 
@property(copy) NSString *useMap;	// G=0x35bd67a1; S=0x35bd5afd; 
@property(copy) NSString *value;	// G=0x35bd36ad; S=0x35bd6ec5; 
@property(assign) double valueAsDate;	// G=0x35bd6ffd; S=0x35bd70dd; converted property
@property(assign) double valueAsNumber;	// G=0x35bd71d1; S=0x35bd7291; converted property
@property(readonly, assign) BOOL willValidate;	// G=0x35bd3395; 
- (int)_autocapitalizeType;	// 0x35bbb579
- (BOOL)_isAutofilled;	// 0x35bbb2dd
- (BOOL)_isEdited;	// 0x35bbb559
- (BOOL)_isTextField;	// 0x35bbb2ed
- (void)_replaceCharactersInRange:(NSRange)range withString:(id)string selectingFromIndex:(int)index;	// 0x35bbb2fd
- (NSRange)_selectedRange;	// 0x35bbb4b9
- (void)_setAutofilled:(BOOL)autofilled;	// 0x35bbb4e9
// declared property getter: - (id)absoluteImageURL;	// 0x35bd7a61
// declared property getter: - (id)accept;	// 0x35bd5ee1
// declared property getter: - (id)accessKey;	// 0x35bd5fc1
// declared property getter: - (id)align;	// 0x35bd60a1
// declared property getter: - (id)alt;	// 0x35bd6181
// declared property getter: - (id)altDisplayString;	// 0x35bd7871
// converted property getter: - (id)autocapitalize;	// 0x35bd7edd
// converted property getter: - (BOOL)autocorrect;	// 0x35bd7d55
// declared property getter: - (BOOL)autofocus;	// 0x35bd3ac5
- (BOOL)checkValidity;	// 0x35bd8281
// declared property getter: - (BOOL)checked;	// 0x35bd3111
- (void)click;	// 0x35bd8531
// declared property getter: - (BOOL)defaultChecked;	// 0x35bd3935
// declared property getter: - (id)defaultValue;	// 0x35bd3561
// declared property getter: - (BOOL)disabled;	// 0x35bd3145
// declared property getter: - (id)files;	// 0x35bd7b49
// declared property getter: - (id)form;	// 0x35bd4495
// converted property getter: - (id)formAction;	// 0x35bd4551
// converted property getter: - (id)formEnctype;	// 0x35bd5c41
// converted property getter: - (id)formMethod;	// 0x35bd5d21
// converted property getter: - (BOOL)formNoValidate;	// 0x35bd39fd
// converted property getter: - (id)formTarget;	// 0x35bd5e01
// converted property getter: - (BOOL)incremental;	// 0x35bd3de5
// declared property getter: - (BOOL)indeterminate;	// 0x35bd3455
- (id)labels;	// 0x35bd7c0d
// converted property getter: - (id)max;	// 0x35bd6261
// declared property getter: - (int)maxLength;	// 0x35bd32d5
// converted property getter: - (id)min;	// 0x35bd6341
// declared property getter: - (BOOL)multiple;	// 0x35bd3b8d
// declared property getter: - (id)name;	// 0x35bd6421
// converted property getter: - (id)pattern;	// 0x35bd6501
// converted property getter: - (id)placeholder;	// 0x35bd65e1
// declared property getter: - (BOOL)readOnly;	// 0x35bd3c55
// converted property getter: - (BOOL)required;	// 0x35bd3d1d
- (void)select;	// 0x35bd8479
// declared property getter: - (int)selectionEnd;	// 0x35bd76f9
// declared property getter: - (int)selectionStart;	// 0x35bd7581
// declared property setter: - (void)setAccept:(id)accept;	// 0x35bd4d11
// declared property setter: - (void)setAccessKey:(id)key;	// 0x35bd4e55
// declared property setter: - (void)setAlign:(id)align;	// 0x35bd4f99
// declared property setter: - (void)setAlt:(id)alt;	// 0x35bd50dd
// converted property setter: - (void)setAutocapitalize:(id)autocapitalize;	// 0x35bd7fb1
// converted property setter: - (void)setAutocorrect:(BOOL)autocorrect;	// 0x35bd7e11
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x35bd405d
// declared property setter: - (void)setChecked:(BOOL)checked;	// 0x35bd694d
- (void)setCustomValidity:(id)validity;	// 0x35bd8341
// declared property setter: - (void)setDefaultChecked:(BOOL)checked;	// 0x35bd3ead
// declared property setter: - (void)setDefaultValue:(id)value;	// 0x35bd37fd
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x35bd3205
// converted property setter: - (void)setFormAction:(id)action;	// 0x35bd4801
// converted property setter: - (void)setFormEnctype:(id)enctype;	// 0x35bd4945
// converted property setter: - (void)setFormMethod:(id)method;	// 0x35bd4a89
// converted property setter: - (void)setFormNoValidate:(BOOL)validate;	// 0x35bd3f85
// converted property setter: - (void)setFormTarget:(id)target;	// 0x35bd4bcd
// converted property setter: - (void)setIncremental:(BOOL)incremental;	// 0x35bd43bd
// declared property setter: - (void)setIndeterminate:(BOOL)indeterminate;	// 0x35bd74b5
// converted property setter: - (void)setMax:(id)max;	// 0x35bd5221
// declared property setter: - (void)setMaxLength:(int)length;	// 0x35bd6a1d
// converted property setter: - (void)setMin:(id)min;	// 0x35bd5365
// declared property setter: - (void)setMultiple:(BOOL)multiple;	// 0x35bd4135
// declared property setter: - (void)setName:(id)name;	// 0x35bd54a9
// converted property setter: - (void)setPattern:(id)pattern;	// 0x35bd55ed
// converted property setter: - (void)setPlaceholder:(id)placeholder;	// 0x35bd5731
// declared property setter: - (void)setReadOnly:(BOOL)only;	// 0x35bd420d
// converted property setter: - (void)setRequired:(BOOL)required;	// 0x35bd42e5
// declared property setter: - (void)setSelectionEnd:(int)end;	// 0x35bd77b5
- (void)setSelectionRange:(int)range end:(int)end;	// 0x35bd8721
// declared property setter: - (void)setSelectionStart:(int)start;	// 0x35bd763d
// declared property setter: - (void)setSize:(id)size;	// 0x35bd6c41
// declared property setter: - (void)setSrc:(id)src;	// 0x35bd5875
// converted property setter: - (void)setStep:(id)step;	// 0x35bd59b9
// declared property setter: - (void)setType:(id)type;	// 0x35bd6d8d
// declared property setter: - (void)setUseMap:(id)map;	// 0x35bd5afd
// declared property setter: - (void)setValue:(id)value;	// 0x35bd6ec5
// converted property setter: - (void)setValueAsDate:(double)date;	// 0x35bd70dd
// converted property setter: - (void)setValueAsNumber:(double)number;	// 0x35bd7291
- (void)setValueForUser:(id)user;	// 0x35bd85e9
// declared property getter: - (id)size;	// 0x35bd6ae9
// declared property getter: - (id)src;	// 0x35bd46a9
// converted property getter: - (id)step;	// 0x35bd66c1
- (void)stepDown:(int)down;	// 0x35bd81b5
- (void)stepUp:(int)up;	// 0x35bd80e9
- (int)structuralComplexityContribution;	// 0x35c025ad
// declared property getter: - (id)type;	// 0x35bd3489
// declared property getter: - (id)useMap;	// 0x35bd67a1
- (id)validationMessage;	// 0x35bd7369
- (id)validity;	// 0x35bd6881
// declared property getter: - (id)value;	// 0x35bd36ad
// converted property getter: - (double)valueAsDate;	// 0x35bd6ffd
// converted property getter: - (double)valueAsNumber;	// 0x35bd71d1
// declared property getter: - (BOOL)willValidate;	// 0x35bd3395
@end

