/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UITableViewController.h> // Unknown library

@class NSMutableArray;
@protocol ABMultipleSourceImagePickerDelegate;

@interface ABMultipleImagePickerViewController : UITableViewController {
	NSMutableArray *_imageCellData;	// 200 = 0xc8
	unsigned _selectedImageIndex;	// 204 = 0xcc
	id<ABMultipleSourceImagePickerDelegate> _delegate;	// 208 = 0xd0
}
@property(assign, nonatomic) id<ABMultipleSourceImagePickerDelegate> delegate;	// G=0x34cc42e5; S=0x34cc42f5; @synthesize=_delegate
- (id)initWithStyle:(int)style;	// 0x34cc3d1d
- (void)addImageData:(id)data title:(id)title isSelectedImage:(BOOL)image person:(void *)person;	// 0x34cc3e19
- (void)dealloc;	// 0x34cc4299
// declared property getter: - (id)delegate;	// 0x34cc42e5
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x34cc3f61
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34cc42f5
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x34cc3f8d
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x34cc41b9
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x34cc3f65
- (void)viewDidLoad;	// 0x34cc3d79
@end

