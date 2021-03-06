/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewController.h"

#import "EKCalendarItemEditItemDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class EKCalendarItem, EKCalendarItemEditItem, EKEventStore, NSArray, UIActionSheet, UIResponder;

@interface EKCalendarItemEditor : UITableViewController <EKCalendarItemEditItemDelegate, UIActionSheetDelegate>
{
    NSArray *_editItems;
    EKEventStore *_store;
    id _revertState;
    EKCalendarItem *_calendarItem;
    NSArray *_currentItems;
    UIActionSheet *_alertSheet;
    id <EKCalendarItemEditorDelegate> _editorDelegate;
    EKCalendarItemEditItem *_currentEditItem;
    BOOL _scrollToNotes;
    UIResponder *_responderToRestoreOnAppearence;
    int _visibleSectionToRestoreOnAppearence;
    BOOL _giveTitleCellKeyboardFocus;
    int _editItemVisibility;
    BOOL _isIgnoringCellHeightChange;
    BOOL _needsCellHeightChange;
    BOOL _showsTimeZone;
}

@property(readonly) EKCalendarItemEditItem *currentEditItem; // @synthesize currentEditItem=_currentEditItem;
@property(nonatomic) int visibleSectionToRestoreOnAppearence; // @synthesize visibleSectionToRestoreOnAppearence=_visibleSectionToRestoreOnAppearence;
@property(retain, nonatomic) UIResponder *responderToRestoreOnAppearence; // @synthesize responderToRestoreOnAppearence=_responderToRestoreOnAppearence;
@property(nonatomic) BOOL showsTimeZone; // @synthesize showsTimeZone=_showsTimeZone;
@property(nonatomic) BOOL scrollToNotes; // @synthesize scrollToNotes=_scrollToNotes;
@property(nonatomic) id <EKCalendarItemEditorDelegate> editorDelegate; // @synthesize editorDelegate=_editorDelegate;
- (void)_deleteRecurringSheetButtonPressed:(int)arg1;
- (void)_deleteSheetButtonPressed:(int)arg1;
- (void)_detachSheetButtonPressed:(int)arg1;
- (void)_cancelSheetButtonPressed:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)_presentDetachSheet;
- (id)_viewForSheet;
- (id)_nameForDeleteButton;
- (BOOL)_canDetachSingleOccurrence;
- (BOOL)_performSave:(int)arg1 animated:(BOOL)arg2;
- (void)_performDelete:(int)arg1;
- (void)deleteClicked:(id)arg1;
- (BOOL)allowsDeletingFutureOccurrences;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)tableViewDidStartReload:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)defaultAlertTitleForEditItem:(id)arg1;
- (void)editItemRequiresHeightChange:(id)arg1;
- (void)_reallyHandleCellHeightChange;
- (void)_tableViewDidUpdateHeights;
- (void)_tableViewWillUpdateHeights;
- (void)editItem:(id)arg1 wantsKeyboardPinned:(BOOL)arg2;
- (id)viewControllerForEditItem:(id)arg1;
- (void)editItemTextChanged:(id)arg1;
- (void)editItemDidEndEditing:(id)arg1;
- (void)editItemDidCommit:(id)arg1;
- (void)editItemDidStartEditing:(id)arg1;
- (void)_revertEvent;
- (void)_copyEventForPossibleRevert;
- (void)_keyboardWillHide;
- (void)_pinKeyboard:(BOOL)arg1;
- (struct CGSize)contentSizeForViewInPopover;
- (void)didReceiveMemoryWarning;
- (void)refreshStartAndEndDates;
- (void)setupForEvent;
- (id)notificationNamesForLocaleChange;
- (void)customizeActionSheet:(id)arg1;
- (id)defaultAlertTitle;
- (void)setupDeleteButton;
- (id)defaultTitleForCalendarItem;
- (id)preferredTitle;
- (void)prepareEditItems;
- (void)_setCalendarItemOnEditItems;
- (void)_configureVisibleItems;
- (void)completeWithAction:(int)arg1 animated:(BOOL)arg2;
- (BOOL)saveWithSpan:(int)arg1 animated:(BOOL)arg2;
- (void)handleTapOutside;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)applicationDidResume;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (unsigned int)indexOfEditItemInVisibleItems:(id)arg1;
- (int)editItemVisibility;
- (void)setEditItemVisibility:(int)arg1 animated:(BOOL)arg2;
- (void)_updateCurrentEditItemsFromVisibility:(int)arg1 toVisibility:(int)arg2 animated:(BOOL)arg3;
@property(retain, nonatomic) EKCalendarItem *calendarItem;
@property(retain, nonatomic) EKEventStore *store;
- (void)_localeChanged;
- (id)_editItems;
- (void)dealloc;
- (id)init;

@end

