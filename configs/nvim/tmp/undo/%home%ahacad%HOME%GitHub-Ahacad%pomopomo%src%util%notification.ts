Vim�UnDo� jn1��m�/�B����:�q��-�跭����      Mexport default function notify(title: string, options: NotificationOptions) {                             aPy�    _�                             ����                                                                                                                                                                                                                                                                                                                                                             aPx�     �                   �               5��                                               5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             aPx�    �                    Mexport default function notify(title: string, options: NotificationOptions) {   &    if (!('Notification' in window)) {   C        console.warn('Notification not supported in this browser');   7    } else if (Notification.permission === 'granted') {   <        let notification = new Notification(title, options);   6    } else if (Notification.permission !== 'denied') {   ?        Notification.requestPermission().then((permission) => {   +            if (permission === 'granted') {   D                let notification = new Notification(title, options);               }           });       }�                  }�                    }�                	      });�   
             	        }�   	             >          let notification = new Notification(title, options);�      
          '        if (permission === "granted") {�      	          =      Notification.requestPermission().then((permission) => {�                6    } else if (Notification.permission !== "denied") {�                :      let notification = new Notification(title, options);�                7    } else if (Notification.permission === "granted") {�                A      console.warn("Notification not supported in this browser");�                &    if (!("Notification" in window)) {�               @  function notify(title: string, options: NotificationOptions) {�                  5��                                               �                                             �                                                    �               O       M          O       M       �               &       &   O       &       &       �               A       C   v       A       C       �               7       7   �       7       7       �               :       <   �       :       <       �               6       6   /      6       6       �               =       ?   f      =       ?       �               '       +   �      '       +       �    	           >       D   �      >       D       �    
           	                	              �               	          %      	              �                         1                    �                         7                    �                                  7      
      5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             aPy     �                Mexport default function notify(title: string, options: NotificationOptions) {5��                                                5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             aPy    �               &    if (!('Notification' in window)) {   C        console.warn('Notification not supported in this browser');   7    } else if (Notification.permission === 'granted') {   <        let notification = new Notification(title, options);   6    } else if (Notification.permission !== 'denied') {   ?        Notification.requestPermission().then((permission) => {   +            if (permission === 'granted') {   D                let notification = new Notification(title, options);               }           });       }�                }�                  }�   
                 });�   	                   }�      
          <        let notification = new Notification(title, options);�      	          %      if (permission === "granted") {�                ;    Notification.requestPermission().then((permission) => {�                4  } else if (Notification.permission !== "denied") {�                8    let notification = new Notification(title, options);�                5  } else if (Notification.permission === "granted") {�                ?    console.warn("Notification not supported in this browser");�                $  if (!("Notification" in window)) {�                Fexport  function notify(title: string, options: NotificationOptions) {5��                                                �                E       E           E       E       �               $       &   F       $       &       �               ?       C   m       ?       C       �               5       7   �       5       7       �               8       <   �       8       <       �               4       6   &      4       6       �               ;       ?   ]      ;       ?       �               %       +   �      %       +       �               <       D   �      <       D       �    	                                         �    
                                         �                         (                    �                         .                    �                         F       �      �      5�_�                        -    ����                                                                                                                                                                                                                                                                                                                                                             aPy�    �               &    if (!('Notification' in window)) {   C        console.warn('Notification not supported in this browser');   7    } else if (Notification.permission === 'granted') {   <        let notification = new Notification(title, options);   6    } else if (Notification.permission !== 'denied') {   ?        Notification.requestPermission().then((permission) => {   +            if (permission === 'granted') {   D                let notification = new Notification(title, options);               }           });       }�                }�                  }�   
                 });�   	                   }�      
          <        let notification = new Notification(title, options);�      	          %      if (permission === "granted") {�                ;    Notification.requestPermission().then((permission) => {�                4  } else if (Notification.permission !== "denied") {�                8    let notification = new Notification(title, options);�                5  } else if (Notification.permission === "granted") {�                ?    console.warn("Notification not supported in this browser");�                $  if (!("Notification" in window)) {�                Eexport function notify(title: string, options: NotificationOptions) {5��        -                  -                      �                F       F           F       F       �               $       &   G       $       &       �               ?       C   n       ?       C       �               5       7   �       5       7       �               8       <   �       8       <       �               4       6   '      4       6       �               ;       ?   ^      ;       ?       �               %       +   �      %       +       �               <       D   �      <       D       �    	                                         �    
                                         �                         )                    �                         /                    �                         G       �      �      5��