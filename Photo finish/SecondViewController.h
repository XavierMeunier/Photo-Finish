//
//  SecondViewController.h
//  Photo finish
//
//  Created by Stéphanie Moubarak on 04/12/12.
//  Copyright (c) 2012 com.hetic. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SecondViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate>{
    
    UIImagePickerController *picker;
    
}

- (IBAction)prendrePhoto:(id)sender;

@end
