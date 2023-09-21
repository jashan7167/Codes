from tkinter import *

main_window = Tk()
main_window.title("Web Browser")

nav_menu  = Frame(main_window)
nav_menu.pack(fill="both",expand=True)
text = Label(nav_menu,text="URL").grid(row=1,column=1)
url_entry = Entry(nav_menu,width=50)
url_entry.grid(row=1,column=2)
url_entry.insert(  0,"www.google.com")
button_go =  Button(nav_menu,text="Go")
button_go.grid(row=1,column=3)


main_window.mainloop()